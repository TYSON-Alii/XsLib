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
XsShape ball;
vextor<XsShape> balls;
vextor<vex3f> ball_speeds;

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
    glEnable(GL_LIGHTING);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_LIGHT0);
    glEnable(GL_BLEND);
    glBlendFunc(GL_ZERO, GL_SRC_COLOR);
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ZERO);
    glBlendEquation(GL_FUNC_ADD);

    kameram.fov = 45.0f;
    kameram.far_ = 1000000;
    kameram.viewport = vex2f(WIDTH, HEIGHT);
    kameram.near_ = 0.001;
    kameram.pos = vex3f(20, -20, 0);

    XsTextureSTB floor;
    floor.wrapping = GL_CLAMP_TO_BORDER;
    floor.filter = GL_NEAREST;
    floor.format = GL_RGB;
    floor.fileName = "data/siyah.png";
    floor.load();

    XsTexture sky;
    XsStbImageLoad("data/BlueSkySkyBoxb.png", sky, GL_CLAMP_TO_BORDER, GL_NEAREST, GL_RGBA);

    XsSky skybox;
    skybox.color = 1;
    skybox.rotation = 0;
    skybox.texture = sky;
    XsChrono saat, _s, _q, save;

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
        glLoadIdentity();
        const GLfloat pos[4] = { kameram.rot.x * 8 - kameram.pos.x + speed.x, kameram.rot.y * 8 - kameram.pos.y + speed.y, kameram.rot.z * 8 - kameram.pos.z + speed.z , 1 };
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

        mouse_pos = XsGetMousePos(window);
        kameram.viewport = vex2f(window.getSize().x, window.getSize().y);

        if (XsLimiter(saat, 0.005) && XsIsKeyPressed(XS_MOUSE_LEFT)) {
            ball.color = XsRand3f(0, 1000) / 1000;
            ball.pos = (kameram.rot + XsRand3f(-100, 100) / 1000) * 13 - kameram.pos;
            ball.rot = 0;
            ball_speeds.push_back(kameram.rot * 2);
            balls.push_back(ball);
        };

        if (XsIsKeyPressed(XS_KEY_W))
            speed -= kameram.rot * 0.1f;
        else if (XsIsKeyPressed(XS_KEY_S))
            speed += kameram.rot * 0.1f;
        else if (!XsIsKeyPressed(XS_KEY_S) && !XsIsKeyPressed(XS_KEY_W))
            speed = speed / 1.8;
        if (XsIsKeyPressed(XS_KEY_SPACE))
            speed = 0.0f;
        kameram.pos += speed;

        XsFPSCamera(kameram, vex2i(mouse_pos.x, mouse_pos.y - 350), 0.5);
        skybox.position = kameram.pos * -1;
        skybox.draw(XS_SPHERE);

        glDisable(GL_TEXTURE_2D);
        if (XsIsKeyPressed(XS_MOUSE_RIGHT) && balls.size() > 0) {
            ball_speeds.back() = ((kameram.rot * 13 - kameram.pos + speed) - balls.back().pos) / XS_PI - speed;
        };
        for (int i = 0; i < balls.size(); i++) {
            ball_speeds[i] *= 0.998;
            balls[i].pos.x < 0 ? ball_speeds[i].x += 0.04/* + (randomf(-10, 10) / 200)*/ : ball_speeds[i].x -= 0.04/* + (randomf(-10, 10) / 200)*/;
            balls[i].pos.y < 0 ? ball_speeds[i].y += 0.04/* + (randomf(-10, 10) / 200)*/ : ball_speeds[i].y -= 0.04/* + (randomf(-10, 10) / 200)*/;
            balls[i].pos.z < 0 ? ball_speeds[i].z += 0.04/* + (randomf(-10, 10) / 200)*/ : ball_speeds[i].z -= 0.04/* + (randomf(-10, 10) / 200)*/;
            balls[i].pos += ball_speeds[i];
            glLoadIdentity();
            balls[i].draw(XS_CUBE, XS_VERTEX_AND_NORMAL);
        };

        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        floor.bind();
        glColor4f(0.6, 0.2, 1, 0.35);
        XsPrintVertices(plane, XS_ALL);

        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && XsLimiter(_s, 0.2))
            std::cout << "shpe size: " << balls.size() << ", fps: " << (float)1e9 / (float)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - fps_start).count() << "\n";
    }
    return 0;
}
