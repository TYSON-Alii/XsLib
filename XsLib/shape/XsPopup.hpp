class XsPopUpSett {
public:
    vex2f screenSize = 0;
    vex2f mouse_pos = 0;
    void begin() {
        glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT | GL_SCISSOR_BIT);
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
    void end() { glPopAttrib(); };
};
class XsShape2d {
public:
    vex2f pos = 0;
    float rot = 0;
    vex2f scale = 0;
    vex4f color = 0;
    void draw(XsVertices _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertex2dDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode, GLenum glmode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, GLenum glmode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode, GLenum glmode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        switch (mode) {
        case XS_ALL:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX:
            for (auto _____yey : _v) {
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        case XS_VERTEX_AND_TEXTURE:
            for (auto _____yey : _v) {
                glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
                glVertex2f(_____yey.position.x, _____yey.position.y);
            };
            break;
        };
        glEnd();
    };
    void draw(XsVertexDepo _v, GLenum glmode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        for (auto _____yey : _v) {
            glVertex2f(_____yey.position.x, _____yey.position.y);
        };
        glEnd();
    };
    void draw() {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0.1);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
};
