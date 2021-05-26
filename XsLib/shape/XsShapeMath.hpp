void XsScale (XsVertexDepo& __vertex, vex3f __scale) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position * __scale;
}
void XsOrigin (XsVertexDepo& __vertex, vex3f __origin) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + __origin;
}
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max, float __scale) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + ((rand() % __max - __min) + __min) / __scale;
}
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + (rand() % (__max - __min) + __min) / XS_PI;
}
void XsJoin(XsVertexDepo& __vertex, XsVertexDepo __vev) {
	for (int _i = 0; _i < __vev.size(); _i++) {
		__vertex.push_back(__vev[_i]);
	}
}
void XsOutLineColor(XsVertices _v, XsEnum mode) {
    glViewport(0.0f, 0.0f, 1000, 750);
    glScissor(0.0f, 0.0f, 1000, 750);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1000, 750, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    glEnable(GL_SCISSOR_TEST);
    glDisable(GL_LIGHTING);
    glEnable(GL_STENCIL_TEST);
    glEnable(GL_DEPTH_TEST);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
    glStencilFunc(GL_ALWAYS, 1, 0xFF); 
    glStencilMask(0xFF);
    XsPrintVertices(_v, mode); 
    glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
    glStencilMask(0x00);
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(1000, 0);
    glVertex2f(1000, 750);
    glVertex2f(0, 750);
    glEnd();
    glDisable(GL_STENCIL_TEST);
    glEnable(GL_LIGHTING);
    glDepthFunc(GL_LESS);
};