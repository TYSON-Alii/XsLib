struct XsVertex {
	vex3f position;
	vex2f texcoord;
	vex3f normal;
	XsVertex() { position = 0; texcoord = 0; normal = 0; };
	XsVertex(vex3f _a, vex2f _b, vex3f _c) { position = _a; texcoord = _b; normal = _c; };
};
struct XsVertex2d {
	vex2f position = vex2cf(0, 0);
	vex2f texcoord = vex2cf(0, 0);
	XsVertex2d() { position = 0; texcoord = 0;};
	XsVertex2d(vex2f _a, vex2f _b) { position = _a; texcoord = _b; };
};
struct XsVertexi {
	vex3i position = vex3ci(0, 0, 0);
	vex2i texcoord = vex2ci(0, 0);
	vex3i normal = vex3ci(0, 0, 0);
	XsVertexi() { position = 0; texcoord = 0; normal = 0; };
	XsVertexi(vex3i _a, vex2i _b, vex3i _c) { position = _a; texcoord = _b; normal = _c; };
};
struct XsVertexi2d {
	vex2i position = vex2ci(0, 0);
	vex2i texcoord = vex2ci(0, 0);
	XsVertexi2d() { position = 0; texcoord = 0;};
	XsVertexi2d(vex2i _a, vex2i _b) { position = _a; texcoord = _b; };
}; 
typedef std::vector<GLfloat> XsVertices;
typedef std::vector<XsVertex> XsVertexDepo;
typedef std::vector<XsVertex2d> XsVertex2dDepo;
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f _scale) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig) {
	for (auto _____yey : __myVert) {
		glVertex3f(_____yey.position.x * __orig.x, _____yey.position.y * __orig.y, _____yey.position.z * __orig.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f __orig, vex3f __g) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig, vex3f __g) {
	for (auto _____yey : __myVert) 
		glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) *__orig.y, (_____yey.position.z + __g.z) * __orig.z);
};

void XsVerticesLoad(XsVertices& _a, XsVertexDepo _v, XsEnum _mode) {
	switch (_mode) {
	case XS_VERTEX:
		_a.resize(_v.size() * 3);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 3] = _v[_i].position.x;
			_a[_i * 3 + 1] = _v[_i].position.y;
			_a[_i * 3 + 2] = _v[_i].position.z;
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		_a.resize(_v.size() * 5);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 5] = _v[_i].position.x;
			_a[_i * 5 + 1] = _v[_i].position.y;
			_a[_i * 5 + 2] = _v[_i].position.z;
			_a[_i * 5 + 3] = _v[_i].texcoord.x;
			_a[_i * 5 + 4] = _v[_i].texcoord.y;
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		_a.resize(_v.size() * 6);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 6] = _v[_i].position.x;
			_a[_i * 6 + 1] = _v[_i].position.y;
			_a[_i * 6 + 2] = _v[_i].position.z;
			_a[_i * 6 + 3] = _v[_i].normal.x;
			_a[_i * 6 + 4] = _v[_i].normal.y;
			_a[_i * 6 + 5] = _v[_i].normal.z;
		};
		break;
	case XS_ALL:
		_a.resize(_v.size() * 8);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 8] = _v[_i].position.x;
			_a[_i * 8 + 1] = _v[_i].position.y;
			_a[_i * 8 + 2] = _v[_i].position.z;
			_a[_i * 8 + 3] = _v[_i].texcoord.x;
			_a[_i * 8 + 4] = _v[_i].texcoord.y;
			_a[_i * 8 + 5] = _v[_i].normal.x;
			_a[_i * 8 + 6] = _v[_i].normal.y;
			_a[_i * 8 + 7] = _v[_i].normal.z;
		};
		break;
	}
};

XsVertices XsVerticesLoad(XsVertexDepo _v, XsEnum _mode) {
	XsVertices _a;
	switch (_mode) {
	case XS_VERTEX:
		_a.resize(_v.size() * 3);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 3] = _v[_i].position.x;
			_a[_i * 3 + 1] = _v[_i].position.y;
			_a[_i * 3 + 2] = _v[_i].position.z;
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		_a.resize(_v.size() * 5);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 5] = _v[_i].position.x;
			_a[_i * 5 + 1] = _v[_i].position.y;
			_a[_i * 5 + 2] = _v[_i].position.z;
			_a[_i * 5 + 3] = _v[_i].texcoord.x;
			_a[_i * 5 + 4] = _v[_i].texcoord.y;
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		_a.resize(_v.size() * 6);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 6] = _v[_i].position.x;
			_a[_i * 6 + 1] = _v[_i].position.y;
			_a[_i * 6 + 2] = _v[_i].position.z;
			_a[_i * 6 + 3] = _v[_i].normal.x;
			_a[_i * 6 + 4] = _v[_i].normal.y;
			_a[_i * 6 + 5] = _v[_i].normal.z;
		};
		break;
	case XS_ALL:
		_a.resize(_v.size() * 8);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 8] = _v[_i].position.x;
			_a[_i * 8 + 1] = _v[_i].position.y;
			_a[_i * 8 + 2] = _v[_i].position.z;
			_a[_i * 8 + 3] = _v[_i].texcoord.x;
			_a[_i * 8 + 4] = _v[_i].texcoord.y;
			_a[_i * 8 + 5] = _v[_i].normal.x;
			_a[_i * 8 + 6] = _v[_i].normal.y;
			_a[_i * 8 + 7] = _v[_i].normal.z;
		};
		break;
	}
	return _a;
};

void XsVertexLoad(XsVertexDepo& _v, XsVertices _q, XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		for (int i = 0; i < _q.size() / 3; i++) {
			_v[i].position.x = _q[i * 3];
			_v[i].position.y = _q[i * 3 + 1];
			_v[i].position.z = _q[i * 3 + 2];
		};
		break;
	case XS_ALL:
		for (int i = 0; i < _q.size() / 8; i ++) {
			_v[i].position.x = _q[i * 8];
			_v[i].position.y = _q[i * 8 + 1];
			_v[i].position.z = _q[i * 8 + 2];
			_v[i].texcoord.x = _q[i * 8 + 3];
			_v[i].texcoord.y = _q[i * 8 + 4];
			_v[i].normal.x = _q[i * 8 + 5];
			_v[i].normal.y = _q[i * 8 + 6];
			_v[i].normal.z = _q[i * 8 + 7];
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int i = 0; i < _q.size() / 5; i++) {
			_v[i].position.x = _q[i * 5];
			_v[i].position.y = _q[i * 5 + 1];
			_v[i].position.z = _q[i * 5 + 2];
			_v[i].texcoord.x = _q[i * 5 + 3];
			_v[i].texcoord.y = _q[i * 5 + 4];
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int i = 0; i < _q.size() / 6; i++) {
			_v[i].position.x = _q[i * 6];
			_v[i].position.y = _q[i * 6 + 1];
			_v[i].position.z = _q[i * 6 + 2];
			_v[i].normal.x = _q[i * 6 + 3];
			_v[i].normal.y = _q[i * 6 + 4];
			_v[i].normal.z = _q[i * 6 + 5];
		};
		break;
	};
}

XsVertexDepo XsVertexLoad(XsVertices _q, XsEnum mode) {
	XsVertexDepo _v;
	switch (mode) {
	case XS_VERTEX:
		for (int i = 0; i < _q.size() / 3; i++) {
			_v[i].position.x = _q[i * 3];
			_v[i].position.y = _q[i * 3 + 1];
			_v[i].position.z = _q[i * 3 + 2];
		};
		break;
	case XS_ALL:
		for (int i = 0; i < _q.size() / 8; i++) {
			_v[i].position.x = _q[i * 8];
			_v[i].position.y = _q[i * 8 + 1];
			_v[i].position.z = _q[i * 8 + 2];
			_v[i].texcoord.x = _q[i * 8 + 3];
			_v[i].texcoord.y = _q[i * 8 + 4];
			_v[i].normal.x = _q[i * 8 + 5];
			_v[i].normal.y = _q[i * 8 + 6];
			_v[i].normal.z = _q[i * 8 + 7];
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int i = 0; i < _q.size() / 5; i++) {
			_v[i].position.x = _q[i * 5];
			_v[i].position.y = _q[i * 5 + 1];
			_v[i].position.z = _q[i * 5 + 2];
			_v[i].texcoord.x = _q[i * 5 + 3];
			_v[i].texcoord.y = _q[i * 5 + 4];
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int i = 0; i < _q.size() / 6; i++) {
			_v[i].position.x = _q[i * 6];
			_v[i].position.y = _q[i * 6 + 1];
			_v[i].position.z = _q[i * 6 + 2];
			_v[i].normal.x = _q[i * 6 + 3];
			_v[i].normal.y = _q[i * 6 + 4];
			_v[i].normal.z = _q[i * 6 + 5];
		};
		break;
	};
	return _v;
}

void XsPrintVertices(XsVertices _a, XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &_a[0]);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 3);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 5);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), &_a[0]);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 5);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 8);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};
void XsPrintVertices(XsVertices _a, XsEnum mode, GLenum __mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &_a[0]);
		glDrawArrays(__mode, 0, _a.size() / 3);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(__mode, 0, _a.size() / 5);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), &_a[0]);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(__mode, 0, _a.size() / 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 5);
		glDrawArrays(__mode, 0, _a.size() / 8);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};

class XsShape {
public:
	vex3f rot;
	vex3f pos;
	vex3f color;
	void draw(XsVertexDepo vertices, GLenum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		glBegin(mode);
		for (auto __a : vertices) {
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);
		};
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsTexture& texture, GLenum mode) {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		glBegin(mode);
		for (auto __a : vertices) {
			glTexCoord2f(__a.texcoord.x, __a.texcoord.y);
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);

		};
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsEnum mode, GLenum glmode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		glBegin(glmode);
		XsPrintVertex(vertices, mode);
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsTexture& texture, XsEnum mode, GLenum glmode) {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		glBegin(glmode);
		XsPrintVertex(vertices, mode);
		glEnd();
	}
	void draw(XsVertices vertices, XsEnum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsPrintVertices(vertices, mode);
	}
	void draw(XsSolidType __solid, XsEnum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsSolid(__solid, mode);
	}
	void draw(XsTexture texture, XsSolidType __solid, XsEnum mode) {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsSolid(__solid, mode);
	}
	void draw(XsTextureSTB texture, XsSolidType __solid, XsEnum mode) {
		texture.bind();
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsSolid(__solid, mode);
	}
	void draw(XsVertices vertices, XsTexture& texture, XsEnum mode) {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsPrintVertices(vertices, mode);
	}
	void draw(XsVertices vertices, XsTextureSTB& texture, XsEnum mode) {
		texture.bind();
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
		XsPrintVertices(vertices, mode);
	}
	void draw() {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glColor3f(color.x, color.y, color.z);
	}
};

class XsShapeM {
public:
	vex4f rot;
	vex3f pos;
	vex3f origin;
	vex3f scale;
	vex3f color;
	XsVertexDepo vertices;
	XsTexture texture;
	GLenum mode;
	void draw() {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.w, rot.x, rot.y, rot.z);
		glColor3f(color.x, color.y, color.z);
		glBegin(mode);
		for (auto __a : vertices) {
			glTexCoord2f(__a.texcoord.x, __a.texcoord.y);
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);

		};
		glEnd();
	}
};
class XsShape2d {
public:
	float rot;
	vex2f pos;
	vex2f scale;
	vex4f color;
	GLenum mode;
	XsTexture texture;
	void draw(XsVertex2dDepo& vertices) {
		if (volatile bool(texture != NULL)) glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, 0.1);
		glRotatef(rot, 0, 0, 1);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(mode);
		for (int i = 0; i < vertices.size(); i++) {
			if (volatile bool(texture != NULL)) glTexCoord2f(vertices[i].texcoord.x, vertices[i].texcoord.y);
			glVertex2f((vertices[i].position.x) * scale.x, (vertices[i].position.y) * scale.y);
		}
		glEnd();
	}
};

class XsOBJShape {
public:
	std::string info;
	XsVertexDepo vertices;
	bool loadFromFile(const char* __file_name);
	void draw(GLenum __mode) {
		for (int __i = 0; __i < vertices.size(); __i++) {
			if (vertices[__i].texcoord.x != NULL)
				glTexCoord2f(vertices[__i].texcoord.x, vertices[__i].texcoord.y);
			if (vertices[__i].position.x != NULL)
				glVertex3f(vertices[__i].position.x, vertices[__i].position.y, vertices[__i].position.z);
			if (vertices[__i].normal.x != NULL)
				glNormal3f(vertices[__i].normal.x, vertices[__i].normal.y, vertices[__i].normal.z);
		}
	};
};