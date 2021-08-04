struct XsPopUpSett {
    vex2f screenSize = 0;
    bool isMouseTouch(vex2f _s, XsShape2d _v, vex2f mouse_pos);
    bool isMouseTouch(vex2f _s, vex2f _v, vex2f mouse_pos);
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
struct XsShape2d {
    XsShape2d() {};
    XsShape2d(const char* loadfromfile) {
        std::ifstream* _f = new std::ifstream(loadfromfile);
        if (_f->is_open()) {
            std::string* _s = new std::string("");
            *_f >> *_s;
            *_f >> *_s;
            pos.x = std::atof(_s->c_str());
            *_f >> *_s;
            pos.y = std::atof(_s->c_str());

            *_f >> *_s;
            rot = std::atof(_s->c_str());

            *_f >> *_s;
            scale.x = std::atof(_s->c_str());
            *_f >> *_s;
            scale.y = std::atof(_s->c_str());

            *_f >> *_s;
            color.x = std::atof(_s->c_str());
            *_f >> *_s;
            color.y = std::atof(_s->c_str());
            *_f >> *_s;
            color.z = std::atof(_s->c_str());
            *_f >> *_s;
            color.w = std::atof(_s->c_str());
            delete _s;
        }
        else
            XsLogError(XsLogWhite, XsLogRed, "file cannot open.\n");
        delete _f;
    };
    vex2f pos = 0;
    float rot = 0;
    vex2f scale = 1;
    vex4f color = 1;
    void draw(XsVertices _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertex2dDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
};

struct XsPopUp {
    vex2f pos = 0;
    float rot = 0;
    vex2f scale = 1;
    vex4f color = 1;
    vex2f colScale = 1;
    vex2f colPos = 0;
    bool isMouseTouch(vex2f _m_p) {
        if (colPos.x + colScale.x > _m_p.x && colPos.x - colScale.x < _m_p.x &&
            colPos.y + colScale.y > _m_p.y && colPos.y - colScale.y < _m_p.y)
            return true;
        return false;
    };
    void draw(XsVertices _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertices _v, XsEnum mode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode);
    };
    void draw(XsVertices _v, XsEnum mode, GLenum glmode, XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        XsPrintVertices(_v, mode, glmode);
    };
    void draw(XsVertex2dDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(GL_TRIANGLES);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, XsEnum mode, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v, mode);
        glEnd();
    };
    void draw(XsVertex2dDepo _v, GLenum glmode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
        glBegin(glmode);
        XsPrintVertex(_v);
        glEnd();
    };
    void draw(XsVertexDepo _v, XsEnum mode) {
        glLoadIdentity();
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
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
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTextureSTB& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        _t.bind();
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
    void draw(XsTexture& _t) {
        glEnable(GL_TEXTURE_2D);
        glLoadIdentity();
        glBindTexture(GL_TEXTURE_2D, _t);
        glTranslatef(pos.x, pos.y, 0);
        glRotatef(rot, 0, 0, 1);
        glScalef(scale);
        glColor4f(color.x, color.y, color.z, color.w);
    };
};

bool XsPopUpSett::isMouseTouch(vex2f _s, XsShape2d _v, vex2f mouse_pos) {
    if (_v.pos.x + _s.x > mouse_pos.x && _v.pos.x - _s.x < mouse_pos.x &&
        _v.pos.y + _s.y > mouse_pos.y && _v.pos.y - _s.y < mouse_pos.y)
        return true;
    else
        return false;
};
bool XsPopUpSett::isMouseTouch(vex2f _s, vex2f _v, vex2f mouse_pos) {
    if (_v.x + _s.x > mouse_pos.x && _v.x - _s.x < mouse_pos.x &&
        _v.y + _s.y > mouse_pos.y && _v.y - _s.y < mouse_pos.y)
        return true;
    else
        return false;
};

struct XsThem {
    vex2f buttonScale = 1;
    vex4f buttonColor = 1;
    vex4f buttonOutLineColor = 1;
    float buttonOutLineWidth = 1;
    vex4f backgroundOutLineColor = 1;
    float backgroundOutLineWidth = 1;
    vex4f backgroundColor = 1;
};

class XsSlider {
private:
    float _bpos = 0;
    bool _m_p = false;
    vex4f _color = 1;
public:
    XsSlider() { };
    XsSlider(XsThem _v) {
        buttonScale = _v.buttonScale;
        buttonColor = _v.buttonColor;
        buttonOutLineColor = _v.buttonOutLineColor;
        buttonOutLineWidth = _v.buttonOutLineWidth;
        backgroundOutLineColor = _v.backgroundOutLineColor;
        backgroundOutLineWidth = _v.backgroundOutLineWidth;
        backgroundColor = _v.backgroundColor;
    };
    void operator=(XsThem _v) {
        buttonScale = _v.buttonScale;
        buttonColor = _v.buttonColor;
        buttonOutLineColor = _v.buttonOutLineColor;
        buttonOutLineWidth = _v.buttonOutLineWidth;
        backgroundOutLineColor = _v.backgroundOutLineColor;
        backgroundOutLineWidth = _v.backgroundOutLineWidth;
        backgroundColor = _v.backgroundColor;
    };
    float width = 1;
    float height = 1;
    vex2f pos = 0;
    vex2f buttonScale = 1;
    vex4f buttonColor = 1;
    vex4f buttonOutLineColor = 1;
    float buttonOutLineWidth = 1;
    vex4f backgroundOutLineColor = 1;
    float backgroundOutLineWidth = 1;
    vex4f backgroundColor = 1;
    float min = 0;
    float max = 0;
    float mass = 0;
    float num = 0;
    void draw(vex2f _mpos) {
        glLoadIdentity();
        glPushMatrix();
        glTranslatef(pos);
        glScalef(width, height, 1);
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        glLineWidth(backgroundOutLineWidth);
        glColor4f(backgroundOutLineColor);
        XsPrintVertices(XsSquareVert, XS_VERTEX, GL_QUADS);
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glColor4f(backgroundColor);
        XsPrintVertices(XsSquareVert, XS_VERTEX, GL_QUADS);
        glPopMatrix();
        if (_mpos.x < pos.x + _bpos + height * buttonScale.x && _mpos.x > pos.x + _bpos - height * buttonScale.x &&
            _mpos.y < pos.y + height * buttonScale.y && _mpos.y > pos.y - height * buttonScale.y) {
            _color = buttonColor + vex4f(0.1, 0.1, 0.1, 0.1);
            if (XsIsKeyPressed(XS_MOUSE_LEFT)) {
                _m_p = true;
            }
        }
        else
            _color = buttonColor;
        if (!XsIsKeyPressed(XS_MOUSE_LEFT))
            _m_p = false;
        if (_m_p) {
            if (_mpos.x > pos.x + width - height * buttonScale.x - mass)
                _bpos = width - height * buttonScale.x - mass;
            else if (_mpos.x < pos.x - width + height * buttonScale.x + mass)
                _bpos = -width + height * buttonScale.x + mass;
            else
                _bpos = _mpos.x - pos.x;
            _color = buttonColor + vex4f(0.1, 0.1, 0.1, 0.1);
        }
        glPushMatrix();
        glTranslatef(pos + vex2f(_bpos, 0));
        glScalef(height * buttonScale.x, height * buttonScale.y, 1);
        glColor4f(_color);
        XsPrintVertices(XsSquareVert, XS_VERTEX, GL_QUADS);
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        glLineWidth(backgroundOutLineWidth);
        glColor4f(buttonOutLineColor);
        XsPrintVertices(XsSquareVert, XS_VERTEX, GL_QUADS);
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glPopMatrix();
        num = (_bpos + width - height * buttonScale.x - mass) / ((width - height * buttonScale.x - mass) * 2) * (fabs(max) + fabs(min)) - fabs(min);
    };
};