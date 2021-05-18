void XsSkybox(vex3f __ps, XsTexture __ttx) {
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(__ps.x, __ps.y, __ps.z);
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
}
void XsSkySphere(vex3f __ps, XsTexture __ttx) {
	glDisable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	glDepthFunc(GL_ALWAYS);
	glDepthMask(GL_FALSE);
	glDisable(GL_CULL_FACE);
	glLoadIdentity();
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glBindTexture(GL_TEXTURE_2D, __ttx);
	glTranslatef(__ps.x, __ps.y, __ps.z);
	glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereArray);
	glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereArray + 3);
	glDrawArrays(GL_TRIANGLES, 0, 2880);
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);
}

class XsSky {
public:
	XsTexture texture;
	vex3f position;
	vex4f rotation;
	vex3f color;
	void draw(XsEnum _get);
};
void XsSky::draw(XsEnum _get) {
	if (_get == XS_SKY_SPHERE) {
		glDisable(GL_LIGHTING);
		glEnable(GL_TEXTURE_2D);
		glDepthFunc(GL_ALWAYS);
		glDepthMask(GL_FALSE);
		glDisable(GL_CULL_FACE);
		glLoadIdentity();
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(position.x, position.y, position.z);
		glRotatef(rotation.w, rotation.x, rotation.y, rotation.z);
		glColor3f(color.x, color.y, color.z);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereArray);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsSphereArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
	}
	else if (_get == XS_SKY_BOX) {
		glDisable(GL_LIGHTING);
		glEnable(GL_TEXTURE_2D);
		glDepthFunc(GL_ALWAYS);
		glDepthMask(GL_FALSE);
		glDisable(GL_CULL_FACE);
		glLoadIdentity();
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(-position.x, -position.y, -position.z);
		glRotatef(rotation.w, rotation.x, rotation.y, rotation.z);
		glColor3f(color.x, color.y, color.z);
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
	};
};