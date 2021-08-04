#define _CRT_SECURE_NO_WARNINGS
#define GLEW_ENABLE_EXPERIMENTAL
#include <GL/glew.h>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
// including imgui 
#include "imgui.h"
#include "imgui-SFML.h"
#define XS_USE_SFML
#define XS_USE_GLM
#define XS_USE_WINDOWS
#define XS_USE_COLORS
#define XS_USE_IMGUI
#include <XsLib.hpp>
#define WIDTH 1000
#define HEIGHT 750
vex3f speed;
sf::Event event;
vex2f mouse_pos;
XsCamera kameram("save/kameram.txt");
sf::RenderWindow window;

int main() {
    srand(time(NULL));
    XsVertices plane = XsOBJLoader("../data/plane.obj", XS_ALL);
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
    ImGui::SFML::Init(window);
    glewInit();
    glEnable(3, GL_SCISSOR_TEST, GL_DEPTH_TEST, GL_BLEND);
    glDepthFunc(GL_LESS);
    glShadeModel(GL_SMOOTH);
    glBlendFunc(GL_ZERO, GL_SRC_COLOR);
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ZERO);
    glBlendEquation(GL_FUNC_ADD);
    glLoadIdentity();

    XsSaver save("save/save");
    vex2f cam_mouse = 0;
    if (save.isTherev2f("cam_mouse"))
        cam_mouse = save.getv2f("cam_mouse");
    vex2f cam_mouse_vel = 0;

    XsEffect::Shake shake;
    shake.random = 0.5;
    shake.area = 0.1;
    shake.speed = 0.1;

    XsTextureSTB floor = XsTextureSTB("../data/siyah.png", GL_RGB, GL_NEAREST, GL_CLAMP_TO_BORDER);

    XsSky skybox;
    skybox.color = 1;
    skybox.rotation = 0;
    skybox.texture = XsTextureSTB("../data/PurplyBlueSky.png", GL_RGBA, GL_NEAREST, GL_CLAMP_TO_BORDER);

    XsShape cube("save/cube.txt"); // load from file
    XsShape2d square("save/square.txt");
    XsTextureSTB square_tex("data/tex_15.png", GL_RGBA);

    XsPopUpSett sett;

    XsChrono saat;
    sf::Clock imclock;
    std::chrono::high_resolution_clock::time_point fps_start;
    while (window.isOpen()) {
        fps_start = std::chrono::high_resolution_clock::now();
        glClearColor(0, 0, 0, 1.0);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        };
        mouse_pos = XsGetMousePos(window);
        if (XsIsKeyPressed(XS_MOUSE_RIGHT)) {
            cam_mouse_vel = (mouse_pos - cam_mouse) / (randomf(300, 400) / 100.f);
            cam_mouse += cam_mouse_vel;
        };
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

        shake.step();
        if (XsIsKeyPressed(XS_KEY_SPACE))
            shake.use(kameram);
        XsFPSCamera(kameram, cam_mouse - vex2f(0, 300), 0.3);
        skybox.position = kameram.pos;
        skybox.draw(XS_SPHERE);

        glDisable(GL_TEXTURE_2D);
        // cube
        glLoadIdentity();
        cube.draw(XS_CUBE, XS_VERTEX);

        glEnable(GL_TEXTURE_2D);
        // floor
        floor.bind();
        glLoadIdentity();
        glColor4f(1, 1, 1, 0.4);
        XsPrintVertices(plane, XS_ALL);

        // drawing 2d shapes
        sett.screenSize = kameram.viewport;
        sett.begin();
        square.draw(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS, square_tex);
        sett.end();

        ImGui::SFML::Update(window, imclock.restart());
        ImGui::StyleColorsClassic();
        XsInfo(cube, "cube");
        XsInfo(square, "square");
        XsInfo(kameram, "cam");

        window.pushGLStates();
        ImGui::SFML::Render(window);
        window.popGLStates();
        
        window.display();
        if (XsIsKeyPressed(XS_KEY_SPACE))
            std::cout << "fps: " << (float)1e9 / (float)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - fps_start).count() << "\n";
    }
    // saving
    save.change(cam_mouse, "cam_mouse");
    XsSave(cube, "save/cube.txt");
    XsSave(square, "save/square.txt");
    XsSave(kameram, "save/kameram.txt");
    return 0;
}