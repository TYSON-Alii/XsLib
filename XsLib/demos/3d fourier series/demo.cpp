#define _CRT_SECURE_NO_WARNINGS
#define GLEW_ENABLE_EXPERIMENTAL
#include <GL/glew.h>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#define SFML_STATIC
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#define XS_USE_SFML
#define XS_USE_GLM
#define XS_USE_WINDOWS
#define XS_USE_STB
#define XS_USE_COLORS
#include <XsLib.hpp>
#define WIDTH 1000
#define HEIGHT 750
vex3f speed;
sf::Event event;
vex2f mouse_pos;
XsCamera kameram;

class ball {
private:
    vex3f _pos;
    std::vector<vex3f> paint_coord;
    XsChrono paint_clock;
public:
    float yaw;
    float pitch;
    void pos() { _pos = vex3f(0); };
    void pos(vex3f _v) { _pos = _v; };
    void pos(ball _b, vex3f _s) { _pos = _b.rot() * _s; };
    vex3f rot() {
        vex3f _temp;
        _temp.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
        _temp.y = -sin(glm::radians(pitch));
        _temp.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
        return _temp;
    };
    vex3f get_pos() { return _pos; };
    vex3f speed;
    float scale;
    vex3f color;
    vex3f paint_color;
    float paint_width;
    void drawLine(vex3f _p1, vex3f _c) {
        glLoadIdentity();
        glColor3f(_c.x, _c.y, _c.z);
        glLineWidth(paint_width / XsDistance((_p1 + _pos) / 2, kameram.pos));
        glBegin(GL_LINES);
        glVertex3f(_p1.x, _p1.y, _p1.z);
        glVertex3f(_pos.x, _pos.y, _pos.z);
        glEnd();
    };
    void drawLine(ball _v, vex3f _c) {
        glLoadIdentity();
        glColor3f(_c.x, _c.y, _c.z);
        glLineWidth(paint_width / XsDistance((_pos + _v.get_pos()) / 2, kameram.pos));
        glBegin(GL_LINES);
        glVertex3f(_pos.x, _pos.y, _pos.z);
        glVertex3f(_v.get_pos().x, _v.get_pos().y, _v.get_pos().z);
        glEnd();
    };
    void draw() {
        glLoadIdentity();
        glTranslatef(_pos.x, _pos.y, _pos.z);
        glScalef(scale, scale, scale);
        glColor3f(color.x, color.y, color.z);
        XsSolidIcoSphere(XS_VERTEX_AND_NORMAL);
        glColor3f(paint_color.x, paint_color.y, paint_color.z);
        for (size_t i = 0; i < paint_coord.size() - 1 && paint_coord.size() > 0; i++) {
            glLoadIdentity();
            glLineWidth(paint_width / XsDistance(paint_coord[i], kameram.pos));
            glBegin(GL_LINES);
            glVertex3f(paint_coord[i].x, paint_coord[i].y, paint_coord[i].z);
            glVertex3f(paint_coord[i + 1].x, paint_coord[i + 1].y, paint_coord[i + 1].z);
            glEnd();
        };
    };
    void paint (float _b) {
        if (XsLimiter(paint_clock, _b)) {
            paint_coord.push_back(_pos);
        };
    }
    void clear_paint() {
        paint_coord.clear();
    };
};

int main() {
    srand(time(NULL));
    sf::ContextSettings contextSettings;
    contextSettings.depthBits = 24;
    contextSettings.stencilBits = 8;
    contextSettings.antialiasingLevel = 0;
    contextSettings.majorVersion = 3;
    contextSettings.minorVersion = 3;
    contextSettings.sRgbCapable = false;
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "HELLO WORLD !!", sf::Style::Default, contextSettings);
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
    glewExperimental = GL_TRUE;
    glewInit();
    glEnable(GL_SCISSOR_TEST);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_ZERO, GL_SRC_COLOR);
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ZERO);
    glBlendEquation(GL_FUNC_ADD);

    kameram.fov = 45.0f;
    kameram.far_ = 100000;
    kameram.viewport = vex2f(WIDTH, HEIGHT);
    kameram.near_ = 0.001;
    kameram.pos = vex3f(-25, -70, 70);
    kameram.rot = 1;

    XsTexture sky;
    XsStbImageLoad("data/SunsetSky.png", sky, GL_CLAMP_TO_BORDER, GL_NEAREST, GL_RGBA);

    XsSky skybox;
    skybox.color = 1;
    skybox.rotation = 0;
    skybox.texture = sky;
    XsChrono _s;

    ball b1;
    b1.pos();
    b1.speed = 0.6;
    b1.pitch = 0;
    b1.yaw = 0;
    b1.scale = 1.0f;
    b1.color = XsColorDodgerBlue;

    ball b2;
    b2.pos(b1, 5.0f);
    b2.speed = 0.6;
    b2.pitch = 0;
    b2.yaw = 0;
    b2.scale = 0.7;
    b2.color = XsColorVioletRed;

    ball b3;
    b3.pos(b2, 5.0f);
    b3.speed = 0.6;
    b3.pitch = 0;
    b3.yaw = 0;
    b3.scale = 0.2;
    b3.color = XsColorHoneydew;

    std::chrono::high_resolution_clock::time_point fps_start;
    while (window.isOpen()) {
        fps_start = std::chrono::high_resolution_clock::now();
        glClearColor(0, 0, 0, 1.0);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        mouse_pos = XsGetMousePos(window);
        kameram.viewport = vex2f(window.getSize().x, window.getSize().y);

        if (XsIsKeyPressed(XS_KEY_W))
            speed -= kameram.rot * 0.1f;
        else if (XsIsKeyPressed(XS_KEY_S))
            speed += kameram.rot * 0.1f;
        else if (!XsIsKeyPressed(XS_KEY_S) and !XsIsKeyPressed(XS_KEY_W))
            speed = speed / 1.8;
        if (XsIsKeyPressed(XS_KEY_SPACE))
            speed = 0.0f;
        kameram.pos += speed;

        XsFPSCamera(kameram, vex2i(mouse_pos.x, mouse_pos.y - 300), 0.4f);
        skybox.position = kameram.pos * -1;
        skybox.draw(XS_SPHERE);

        glDisable(GL_TEXTURE_2D);
        b1.draw();
        b1.yaw += 0.4;
        b1.pitch -= 1.2;

        b2.pos(b1, 5);
        b2.drawLine(b1, XsColorCornsilk);
        b2.draw();
        b2.yaw += 0.9;
        b2.pitch -= 1.9;
        
        b3.pos(b2, 9);
        b3.drawLine(b2, XsColorCornsilk);
        b3.paint_color = XsColorLawnGreen;
        b3.paint_width = 5;
        b3.paint(0.02);
        b3.draw();

        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && XsLimiter(_s, 0.2))
            std::cout << " fps: " << (float)1e9 / (float)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - fps_start).count() << "\n";
    }
    return 0;
}
