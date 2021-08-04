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
    vex3f _pos = 0;
    std::vector<vex3f> paint_coord;
    XsChrono paint_clock;
public:
    float yaw = 0;
    float pitch = 0;
    void pos() { _pos = vex3f(0); };
    void pos(vex3f _v) { _pos = _v; };
    void pos(ball _b, vex3f _s) { _pos = _b.get_pos() + _b.rot() * _s; };
    vex3f rot() { return vex3f(cos(glm::radians(yaw)) * cos(glm::radians(pitch)), -sin(glm::radians(pitch)), sin(glm::radians(yaw)) * cos(glm::radians(pitch))); };
    void pos(ball _b) { _pos = _b.get_pos() + _b.rot() * distance; };
    vex3f get_pos() { return _pos; };
    float scale = 1.f;
    vex3f color = 1.f;
    vex3f paint_color = 1.f;
    float paint_width = 1.f;
    float distance = 1.f;
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
    void paint(float _b) {
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

    vex2f cam_mouse = 0;
    vex2f cam_mouse_vel = 0;
    kameram.fov = 45.0f;
    kameram.far_ = 10000;
    kameram.viewport = vex2f(WIDTH, HEIGHT);
    kameram.near_ = 0.01;
    kameram.pos = vex3f(20, 20, 0);
    kameram.rot = 1;

    XsSky skybox;
    skybox.color = 1;
    skybox.rotation = 0;
    skybox.texture = XsTextureSTB("../data/PurplyBlueSky.png", GL_RGBA, GL_NEAREST, GL_CLAMP_TO_BORDER);
    XsChrono _s;

    ball b1;
    b1.pos();
    b1.scale = randomf(70, 110) / 100;
    b1.color = (vex3f() % 100) / 100;

    ball b2;
    b2.scale = randomf(30, 50) / 100;
    b2.color = (vex3f() % 100) / 100;
    b2.distance = randomf(40, 60) / 10;

    ball b3;
    b3.scale = randomf(40, 60) / 100;
    b3.color = (vex3f() % 100) / 100;
    b3.distance = randomf(70, 90) / 10;

    ball b4;
    b4.scale = randomf(20, 40) / 100;
    b4.color = (vex3f() % 100) / 100;
    b4.distance = randomf(20, 40) / 10;

    ball b5;
    b5.scale = randomf(30, 50) / 100;
    b5.color = (vex3f() % 100) / 100;
    b5.distance = randomf(50, 70) / 10;

    ball b6;
    b6.scale = randomf(20, 40) / 100;
    b6.color = (vex3f() % 100) / 100;
    b6.distance = randomf(40, 60) / 10;

    ball b7;
    b7.scale = randomf(10, 30) / 100;
    b7.color = (vex3f() % 100) / 100;
    b7.distance = randomf(80, 100) / 10;

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

        if (XsIsKeyPressed(XS_KEY_W) && !XsIsKeyPressed(XS_KEY_SPACE))
            speed += kameram.rot * 0.1f;
        else if (XsIsKeyPressed(XS_KEY_S) && !XsIsKeyPressed(XS_KEY_SPACE))
            speed -= kameram.rot * 0.1f;
        else if (!XsIsKeyPressed(XS_KEY_S) && !XsIsKeyPressed(XS_KEY_W))
            speed *= 0.98;
        if (XsIsKeyPressed(XS_KEY_SPACE))
            speed *= 0.75f;
        kameram.pos += speed;

        cam_mouse_vel = (mouse_pos - cam_mouse) / (randomf(300, 400) / 100.f);
        cam_mouse += cam_mouse_vel;

        XsFPSCamera(kameram, vex2f(cam_mouse.x, cam_mouse.y - 350), 0.3);
        skybox.position = kameram.pos;
        skybox.draw(XS_SPHERE);

        glDisable(GL_TEXTURE_2D);
        b1.draw();
        b1.yaw += 0.4;
        b1.pitch -= 1.2;

        b2.pos(b1);
        b2.drawLine(b1, XsColorCornsilk);
        b2.draw();
        b2.yaw -= 0.9;
        b2.pitch -= 1.9;

        b3.pos(b2);
        b3.drawLine(b2, XsColorAliceBlue);
        b3.draw();
        b3.yaw -= 0.6;
        b3.pitch += 2.3;

        b4.pos(b3);
        b4.drawLine(b3, XsColorGreenYellow);
        b4.draw();
        b4.yaw += 0.2;
        b4.pitch += 1.1;

        b5.pos(b4);
        b5.drawLine(b4, XsColorLinen);
        b5.draw();
        b5.yaw -= 0.2;
        b5.pitch -= 0.5;

        b6.pos(b5);
        b6.drawLine(b5, XsColorIndianRed);
        b6.draw();
        b6.yaw += 0.4;
        b6.pitch -= 0.8;

        b7.pos(b6);
        b7.drawLine(b6, XsColorAquamarine);
        b7.paint_color = XsColorLawnGreen;
        b7.paint_width = 5;
        b7.paint(0.01);
        b7.draw();

        window.display();
        if (XsIsKeyPressed(XS_KEY_SPACE) && XsLimiter(_s, 0.2))
            std::cout << " fps: " << (float)1e9 / (float)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - fps_start).count() << "\n";
    }
    return 0;
}