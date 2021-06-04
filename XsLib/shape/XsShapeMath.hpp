void XsScale(XsVertexDepo& __vertex, vex3f __scale) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position * __scale;
}
void XsOrigin(XsVertexDepo& __vertex, vex3f __origin) {
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
void XsScale(XsVertices& __vertex, XsEnum mode, vex3f __scale) {
	switch (mode) {
	case XS_VERTEX:
		for (int __i = 0; __i < __vertex.size() / 3; __i++) {
			__vertex[__i * 3] *= __scale.x;
			__vertex[__i * 3 + 1] *= __scale.y;
			__vertex[__i * 3 + 2] *= __scale.z;
		}
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int __i = 0; __i < __vertex.size() / 5; __i++) {
			__vertex[__i * 5] *= __scale.x;
			__vertex[__i * 5 + 1] *= __scale.y;
			__vertex[__i * 5 + 2] *= __scale.z;
		}
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int __i = 0; __i < __vertex.size() / 6; __i++) {
			__vertex[__i * 6] *= __scale.x;
			__vertex[__i * 6 + 1] *= __scale.y;
			__vertex[__i * 6 + 2] *= __scale.z;
		}
		break;
	case XS_ALL:
		for (int __i = 0; __i < __vertex.size() / 8; __i++) {
			__vertex[__i * 8] *= __scale.x;
			__vertex[__i * 8 + 1] *= __scale.y;
			__vertex[__i * 8 + 2] *= __scale.z;
		}
		break;
	};
}
void XsOrigin(XsVertices& __vertex, XsEnum mode, vex3f origin) {
	switch (mode) {
	case XS_VERTEX:
		for (int __i = 0; __i < __vertex.size() / 3; __i++) {
			__vertex[__i * 3] += origin.x;
			__vertex[__i * 3 + 1] += origin.y;
			__vertex[__i * 3 + 2] += origin.z;
		}
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int __i = 0; __i < __vertex.size() / 5; __i++) {
			__vertex[__i * 5] += origin.x;
			__vertex[__i * 5 + 1] += origin.y;
			__vertex[__i * 5 + 2] += origin.z;
		}
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int __i = 0; __i < __vertex.size() / 6; __i++) {
			__vertex[__i * 6] += origin.x;
			__vertex[__i * 6 + 1] += origin.y;
			__vertex[__i * 6 + 2] += origin.z;
		}
		break;
	case XS_ALL:
		for (int __i = 0; __i < __vertex.size() / 8; __i++) {
			__vertex[__i * 8] += origin.x;
			__vertex[__i * 8 + 1] += origin.y;
			__vertex[__i * 8 + 2] += origin.z;
		}
		break;
	};
}
/*
// just triangle mesh
void XsSubdivide(XsVertices& _v) {
	XsVertices _c = _v;
	prnt << _c.size() << "\n";
	_v.resize(_c.size() * _c.size(), 0);
	for (size_t i = 0; i < _c.size(); i+=9) {
		_v[i * 81] = _c[i / 9 * 1]; // x1
		_v[i * 81 + 1] = _c[i / 9 * 1 + 1]; // y1
		_v[i * 81 + 2] = _c[i / 9 * 1 + 2]; // z1
		_v[i * 81 + 3] = (_c[i / 9 * 1 + 3] + _c[i / 9 * 1 + 6]) / 2; // x2
		_v[i * 81 + 4] = (_c[i / 9 * 1 + 4] + _c[i / 9 * 1 + 7]) / 2; // y2
		_v[i * 81 + 5] = (_c[i / 9 * 1 + 5] + _c[i / 9 * 1 + 8]) / 2; // z2
		_v[i * 81 + 6] = _c[i / 9 * 1 + 3]; // x3
		_v[i * 81 + 7] = _c[i / 9 * 1 + 4]; // y3
		_v[i * 81 + 8] = _c[i / 9 * 1 + 5]; // z3
	};
	prnt << _v.size() << "\n";
};
*/
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
	glColor3f(0, 0, 0);
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