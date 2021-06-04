class XsPopUpSettings {
public:
    vex2f screenSize;
    vex2f mousePosition;
    void begin() {
        glViewport(0.0f, 0.0f, screenSize.x, screenSize.y);
        glScissor(0.0f, 0.0f, screenSize.x, screenSize.y);
        glLoadIdentity();
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, screenSize.x, screenSize.y, 0, -1, 1);
        glMatrixMode(GL_MODELVIEW);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glDisable(GL_CULL_FACE);
        glDisable(GL_DEPTH_TEST);
        glEnable(GL_SCISSOR_TEST);
        glDisable(GL_LIGHTING);
    };
    void end() {
        glEnable(GL_LIGHTING);
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LESS);
    };
};

class XsPopUpShape {
public:
    XsPopUpSettings settings;
    XsVertex2dDepo vertices;
    vex2f pos;
    int rot;
    vex4f color;
    XsTexture texture;
    GLenum mode;
    bool isMouseTouch(vex2f __scale) {
        if (settings.mousePosition.x < (pos.x + __scale.x) && settings.mousePosition.x > (pos.x - __scale.x) &&
            settings.mousePosition.y < (pos.y + __scale.y) && settings.mousePosition.y > (pos.y - __scale.y))
            return true;
        else
            return false;
    };
    void draw() {
        if (volatile bool(texture != NULL))
            glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        if (volatile bool(texture != NULL)) {
            glBindTexture(GL_TEXTURE_2D, texture);
        }
        glTranslatef(pos.x , pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(mode);
        for (int ____v = 0; ____v < vertices.size(); ____v++) {
            if (volatile bool(texture != NULL))
                glTexCoord2f(vertices[____v].texcoord.x, vertices[____v].texcoord.y);
            glVertex2i(vertices[____v].position.x, vertices[____v].position.y);
        }
        glEnd();
    }
};/*
class XsGui {
public:
    class Button {
    public:
        XsGuiPlane plane;
        vex2f pos;
        vex2f scale;
        unsigned int texture;
        bool button() {
            if (plane.settings.mousePosition.x < pos.x + scale.x && plane.settings.mousePosition.x > pos.x - scale.x &&
                plane.settings.mousePosition.y < pos.y + scale.y && plane.settings.mousePosition.y > pos.y - scale.y) {
                return true;
            }
            else
                return false;
        };
    };
};

class XsGuiPlane{
private:
    bool tik__ = false;
    int __vertices[8]{
        -50, -50,
        -50, 50,
        50, 50,
        50, -50
    };
    std::vector<XsGui> __datat;
public:
    XsPopUpSettings settings;
    vex2f pos;
    vex4f color;
    vex4f outLineColor;
    float outLineScale;
    unsigned int texture;
    /*bool isMouseTouch() {
        if (settings.mousePosition.x < (pos.x + __vertices[4]) && settings.mousePosition.x > (pos.x + __vertices[0]) &&
            settings.mousePosition.y < (pos.y + __vertices[3]) && settings.mousePosition.y > (pos.y + __vertices[1] + 20))
            return true;
        else
            return false;
    };
    void addGui(XsGui& _paw) {
        __datat.push_back(_paw);
    };
    void draw() {
        //if (isMouseTouch() && XsIsKeyPressed(XS_MOUSE_LEFT))
            //pos = settings.mousePosition;
        
        if (settings.mousePosition.x < (pos.x + __vertices[4] + 5) && settings.mousePosition.x >(pos.x + __vertices[4] - 5) &&
            settings.mousePosition.y < (pos.y + __vertices[5] + 5) && settings.mousePosition.y >(pos.y + __vertices[5] - 5) && XsIsKeyPressed(XS_MOUSE_LEFT)) {
            tik__ = true;
        };
        if (!XsIsKeyPressed(XS_MOUSE_LEFT))
            tik__ = false;
        if (tik__) {
                __vertices[3] = settings.mousePosition.y - pos.y;
                __vertices[5] = settings.mousePosition.y - pos.y;
                __vertices[6] = settings.mousePosition.x - pos.x;
                __vertices[4] = settings.mousePosition.x - pos.x;
            if (__vertices[4] < 0) {
                __vertices[4] = 2;
                __vertices[6] = 2;
            }
            if (__vertices[5] < -20) {
                __vertices[5] = -18;
                __vertices[3] = -18;
            }
        };
        glPushMatrix();
        glLoadIdentity();
        glLineWidth(outLineScale);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(0, 0, 0, 0);
        glColor4f(color.x, color.y, color.z, color.w);
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glBegin(GL_QUADS);
        glVertex2i(__vertices[0], __vertices[1]);
        glVertex2i(__vertices[2], __vertices[3]);
        glVertex2i(__vertices[4], __vertices[5]);
        glVertex2i(__vertices[6], __vertices[7]);
        glEnd();
        glColor4f(outLineColor.x, outLineColor.y, outLineColor.z, outLineColor.w);
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        glBegin(GL_QUADS);
        glVertex2i(__vertices[0], __vertices[1]);
        glVertex2i(__vertices[2], __vertices[3]);
        glVertex2i(__vertices[4], __vertices[5]);
        glVertex2i(__vertices[6], __vertices[7]);
        glEnd();
        glPopMatrix();
        glFlush();
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    };
};*/