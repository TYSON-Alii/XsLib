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
sf::RenderWindow window;

class cube {
private:
    vex3f f_color = 1;
public:
    bool isToushAnyThing = false;
    cube() {
        pos = kameram.rot * 13 + kameram.pos;
        color(vex3f() % 100 / 100);
        f_color = color();
        vel = kameram.rot * 2;
    };
    vex3f pos = 0;
    vex3f vel = 0;
    vex3f color() { return f_color; };
    void color(vex3f _v) { f_color = _v; };
    void draw() {
        vel *= 0.98;
        pos += vel;
        glLoadIdentity();
        glTranslatef(pos);
        isToushAnyThing ? glColor3f(1, 0, 0) : glColor3f(f_color);
        XsSolidCube(XS_VERTEX_AND_NORMAL);
    };
};
std::vector<cube> cubes;

int main() {
    srand(time(NULL));
    XsVertices plane = XsOBJLoader("data/plane.obj", XS_ALL);
    sf::ContextSettings contextSettings;
    contextSettings.depthBits = 24;
    contextSettings.stencilBits = 8;
    contextSettings.antialiasingLevel = 0;
    contextSettings.majorVersion = 3;
    contextSettings.minorVersion = 3;
    contextSettings.sRgbCapable = false;
    window.create(sf::VideoMode(WIDTH, HEIGHT), "HELLO WORLD !!", sf::Style::Default, contextSettings);
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
    glewExperimental = GL_TRUE;
    glewInit();
    glEnable(7, GL_SCISSOR_TEST, GL_DEPTH_TEST, GL_NORMALIZE, GL_COLOR_MATERIAL, GL_LIGHTING, GL_LIGHT0, GL_BLEND);
    glDepthFunc(GL_LESS);
    glShadeModel(GL_SMOOTH);
    glBlendFunc(GL_ZERO, GL_SRC_COLOR);
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ZERO);
    glBlendEquation(GL_FUNC_ADD);
    glLoadIdentity();
    const GLfloat pos[4] = { 0, 10, 0 , 1 };
    const GLfloat amb[4] = { 0, 0, 0, 0 };
    const GLfloat diff[4] = { 0.7, 0.7, 0.7, 1 };
    const GLfloat spec[4] = { 0, 0, 0, 0 };
    const GLfloat color[4] = { 0, 0, 0, 0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, amb);
    glLightfv(GL_LIGHT0, GL_SPECULAR, spec);
    glLightfv(GL_LIGHT0, GL_POSITION, pos);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diff);
    glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
    glMaterialfv(GL_FRONT, GL_EMISSION, color);
    glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diff);

    vex2f cam_mouse = 0;
    vex2f cam_mouse_vel = 0;
    kameram.fov = 45.0f;
    kameram.far_ = 10000;
    kameram.viewport = vex2f(WIDTH, HEIGHT);
    kameram.near_ = 0.01;
    kameram.pos = vex3f(20, 20, 0);

    XsTextureSTB floor("../data/siyah.png", GL_RGB, GL_NEAREST, GL_CLAMP_TO_BORDER);

    XsSky skybox;
    skybox.color = 1;
    skybox.rotation = 0;
    skybox.texture = XsTextureSTB("../data/PurplyBlueSky.png", GL_RGBA, GL_NEAREST, GL_CLAMP_TO_BORDER);

    XsColl mColl, mColl2;
    mColl.scale = 1;
    mColl2.scale = 1;

    XsChrono saat;
    std::chrono::high_resolution_clock::time_point fps_start;
    while (window.isOpen()) {
        fps_start = std::chrono::high_resolution_clock::now();
        glClearColor(0, 0, 0, 1.0);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();
        mouse_pos = XsGetMousePos(window);
        cam_mouse_vel = (mouse_pos - cam_mouse) / (randomf(300, 400) / 100.f);
        cam_mouse += cam_mouse_vel;
        kameram.viewport = vex2f(window.getSize().x, window.getSize().y);

        if (XsIsKeyPressed(XS_KEY_W) && !XsIsKeyPressed(XS_KEY_SPACE))
            speed += kameram.rot * 0.1f;
        else if (XsIsKeyPressed(XS_KEY_S) && !XsIsKeyPressed(XS_KEY_SPACE))
            speed -= kameram.rot * 0.1f;
        else if (!XsIsKeyPressed(XS_KEY_S) && !XsIsKeyPressed(XS_KEY_W))
            speed *= 0.95;
        if (XsIsKeyPressed(XS_KEY_SPACE))
            speed *= 0.75f;
        kameram.pos += speed;

        XsFPSCamera(kameram, cam_mouse - vex2f(0, 300), 0.3);
        skybox.position = kameram.pos;
        skybox.draw(XS_SPHERE);

        if (XsIsKeyPressed(XS_MOUSE_LEFT) && XsLimiter(saat, 0.15) && !XsIsKeyPressed(XS_MOUSE_RIGHT))
            cubes.push_back(cube());

        if (XsIsKeyPressed(XS_MOUSE_RIGHT)) {
            if (XsIsKeyPressed(XS_MOUSE_LEFT))
                cubes.back().vel += kameram.rot * 0.5;
            else
                cubes.back().vel = ((kameram.rot * 13 + kameram.pos) - cubes.back().pos) / 5;
        }

        glDisable(GL_TEXTURE_2D);
        for (volatile int i = 0; volatile bool(i < cubes.size()); i++) {
            mColl.pos = cubes[i].pos;
            for (volatile int j = 0; volatile bool(j < cubes.size()); j++) {
                if (i != j) {
                    mColl2.pos = cubes[j].pos;
                    if (volatile bool(XsDetectCollission(mColl, mColl2))) {
                        cubes[i].isToushAnyThing = true;
                        cubes[j].isToushAnyThing = true;
                        cubes[i].vel *= 0.6;
                        cubes[j].vel *= 0.6;
                        cubes[i].vel(cubes[j].vel);
                        cubes[i].vel -= ((v3f(2) - (cubes[i].pos - cubes[j].pos)) / 70) - cubes[j].vel;
                        cubes[j].vel += ((v3f(2) - (cubes[i].pos - cubes[j].pos)) / 70) - cubes[i].vel;
                    }
                    else {
                        cubes[i].isToushAnyThing = false;
                        cubes[j].isToushAnyThing = false;
                    }
                };
            };
            //cubes[i].pos.x > 0 ? cubes[i].vel.x -= 0.01 : cubes[i].vel.x += 0.01;
            cubes[i].pos.y > 0 ? cubes[i].vel.y -= 0.01 : cubes[i].vel.y += 0.01;
            //cubes[i].pos.z > 0 ? cubes[i].vel.z -= 0.01 : cubes[i].vel.z += 0.01;
            cubes[i].draw();
        };

        glEnable(GL_TEXTURE_2D);
        floor.bind();
        glLoadIdentity();
        glColor4f(1, 1, 1, 0.4);
        XsPrintVertices(plane, XS_ALL);

        window.display();
        if (XsIsKeyPressed(XS_KEY_SPACE))
            std::cout << "cube size: " << cubes.size() << " - fps: " << (float)1e9 / (float)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - fps_start).count() << "\n";
    }
    return 0;
}