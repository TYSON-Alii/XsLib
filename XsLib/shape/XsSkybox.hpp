void XsSkySphere(vex3f __ps, XsTexture __ttx) {
	glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity();
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(__ps.x, __ps.y, __ps.z);
	glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray);
	glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray + 3);
	glDrawArrays(GL_TRIANGLES, 0, 2880);
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	glPopAttrib();
}

void XsSkySphere(XsCamera _c, XsTexture __ttx) {
	glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity();
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(_c.pos.x, _c.pos.y, _c.pos.z);
	glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray);
	glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray + 3);
	glDrawArrays(GL_TRIANGLES, 0, 2880);
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	glPopAttrib();
}

class XsSky {
public:
	XsTextureSTB texture;
	vex3f position;
	vex3f rotation;
	vex4f color;
	void draw(XsSolidType _get);
};
void XsSky::draw(XsSolidType _get) {
	switch (_get) {
	case XS_SPHERE:
		glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
		glDisable(GL_LIGHTING);
		glEnable(GL_TEXTURE_2D);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_ALWAYS);
		glDepthMask(GL_FALSE);
		glDisable(GL_CULL_FACE);
		glShadeModel(GL_SMOOTH);
		glLoadIdentity();
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		texture.bind();
		glTranslatef(position.x, position.y, position.z);
		glRotatef(rotation);
		glColor4f(color.x, color.y, color.z, color.w);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereTextureArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glPopAttrib();
		break;
	case XS_BOX:
		glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
		glDisable(GL_LIGHTING);
		glEnable(GL_TEXTURE_2D);
		glDepthFunc(GL_ALWAYS);
		glDepthMask(GL_FALSE);
		glDisable(GL_CULL_FACE);
		glShadeModel(GL_SMOOTH);
		glLoadIdentity();
		texture.bind();
		glTranslatef(-position.x, -position.y, -position.z);
		glRotatef(rotation);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(GL_TRIANGLES);
		glTexCoord2f(0.5, 1);
		glVertex3f(1, 1, 1);
		glTexCoord2f(0.25, 0.66666666666);
		glVertex3f(-1, 1, -1);
		glTexCoord2f(0.5, 0.66666666666);
		glVertex3f(-1, 1, 1);
		glTexCoord2f(0.25, 0.66666666666);
		glVertex3f(-1, 1, -1);
		glTexCoord2f(0, 0.33333333333);
		glVertex3f(1, -1, -1);
		glTexCoord2f(0.25, 0.33333333333);
		glVertex3f(-1, -1, -1);
		glTexCoord2f(1, 0.66666666666);
		glVertex3f(1, 1, -1);
		glTexCoord2f(0.75, 0.33333333333);
		glVertex3f(1, -1, 1);
		glTexCoord2f(1, 0.33333333333);
		glVertex3f(1, -1, -1);
		glTexCoord2f(0.5, 0.33333333333);
		glVertex3f(-1, -1, 1);
		glTexCoord2f(0.25, 0);
		glVertex3f(1, -1, -1);
		glTexCoord2f(0.5, 0);
		glVertex3f(1, -1, 1);
		glTexCoord2f(0.5, 0.66666666666);
		glVertex3f(-1, 1, 1);
		glTexCoord2f(0.25, 0.33333333333);
		glVertex3f(-1, -1, -1);
		glTexCoord2f(0.5, 0.33333333333);
		glVertex3f(-1, -1, 1);
		glTexCoord2f(0.75, 0.66666666666);
		glVertex3f(1, 1, 1);
		glTexCoord2f(0.5, 0.33333333333);
		glVertex3f(-1, -1, 1);
		glTexCoord2f(0.75, 0.33333333333);
		glVertex3f(1, -1, 1);
		glTexCoord2f(0.5, 1);
		glVertex3f(1, 1, 1);
		glTexCoord2f(0.25, 0.99999999999);
		glVertex3f(1, 1, -1);
		glTexCoord2f(0.25, 0.66666666666);
		glVertex3f(-1, 1, -1);
		glTexCoord2f(0.25, 0.66666666666);
		glVertex3f(-1, 1, -1);
		glTexCoord2f(0, 0.66666666666);
		glVertex3f(1, 1, -1);
		glTexCoord2f(0, 0.33333333333);
		glVertex3f(1, -1, -1);
		glTexCoord2f(1, 0.66666666666);
		glVertex3f(1, 1, -1);
		glTexCoord2f(0.75, 0.66666666666);
		glVertex3f(1, 1, 1);
		glTexCoord2f(0.75, 0.33333333333);
		glVertex3f(1, -1, 1);
		glTexCoord2f(0.5, 0.33333333333);
		glVertex3f(-1, -1, 1);
		glTexCoord2f(0.25, 0.33333333333);
		glVertex3f(-1, -1, -1);
		glTexCoord2f(0.25, 0);
		glVertex3f(1, -1, -1);
		glTexCoord2f(0.5, 0.66666666666);
		glVertex3f(-1, 1, 1);
		glTexCoord2f(0.25, 0.66666666666);
		glVertex3f(-1, 1, -1);
		glTexCoord2f(0.25, 0.33333333333);
		glVertex3f(-1, -1, -1);
		glTexCoord2f(0.75, 0.66666666666);
		glVertex3f(1, 1, 1);
		glTexCoord2f(0.5, 0.66666666666);
		glVertex3f(-1, 1, 1);
		glTexCoord2f(0.5, 0.33333333333);
		glVertex3f(-1, -1, 1);
		glEnd();
		glFlush();
		glPopAttrib();
		break;
	};
};

void XsSkybox(XsCamera _c, XsTexture __ttx) {
	glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(_c.pos.x, _c.pos.y, _c.pos.z);
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0.5, 1);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(1, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(1, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.25, 0);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 1);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.25, 0.99999999999);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(1, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.25, 0);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glEnd();
	glFlush();
	glPopMatrix();
	glPopAttrib();
};
void XsSkybox(vex3f _c, XsTexture __ttx) {
	glPushAttrib(GL_ENABLE_BIT | GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(_c.x, _c.y, _c.z);
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0.5, 1);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(1, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(1, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.25, 0);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 1);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.25, 0.99999999999);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0, 0.33333333333);
	glVertex3f(1, -1, -1);
	glTexCoord2f(1, 0.66666666666);
	glVertex3f(1, 1, -1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.75, 0.33333333333);
	glVertex3f(1, -1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.25, 0);
	glVertex3f(1, -1, -1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.25, 0.66666666666);
	glVertex3f(-1, 1, -1);
	glTexCoord2f(0.25, 0.33333333333);
	glVertex3f(-1, -1, -1);
	glTexCoord2f(0.75, 0.66666666666);
	glVertex3f(1, 1, 1);
	glTexCoord2f(0.5, 0.66666666666);
	glVertex3f(-1, 1, 1);
	glTexCoord2f(0.5, 0.33333333333);
	glVertex3f(-1, -1, 1);
	glEnd();
	glFlush();
	glPopMatrix();
	glPopAttrib();
};