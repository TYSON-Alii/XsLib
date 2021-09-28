void XsSolidTriangle() {
	glBegin(GL_TRIANGLES);
	for (float i = 0.5; i < 2.5; i += 0.6666)
		glVertex2f(cos(i * XS_PI), sin(i * XS_PI));
	glEnd();
};
void XsSolidSquare() {
	glBegin(GL_QUADS);
	for (float i = -0.25; i <= 1.25; i += 0.5)
		glVertex2f(cos(i * XS_PI), sin(i * XS_PI));
	glEnd();
};
void XsSolidPolygone(int count) {
	for (float i = -1; i < 1; i += 2.0f / float(count))
		glVertex2f(cos(i * XS_PI), sin(i * XS_PI));
};

void XsSolidTriangle(float _s) {
	glBegin(GL_TRIANGLES);
	for (float i = 0.5; i < 2.5; i += 0.6666)
		glVertex2f(cos(i * XS_PI) * _s, sin(i * XS_PI) * _s);
	glEnd();
};
void XsSolidSquare(float _s) {
	glBegin(GL_QUADS);
	for (float i = -0.25; i < 1.25; i += 0.5)
		glVertex2f(cos(i * XS_PI) * _s, sin(i * XS_PI) * _s);
	glEnd();
};
void XsSolidPolygone(int count, float _s) {
	for (float i = -1; i < 1; i += 2.0f / float(count))
		glVertex2f(cos(i * XS_PI) * _s, sin(i * XS_PI) * _s);
};

void XsSolidTriangle(vex2f _s) {
	glBegin(GL_TRIANGLES);
	for (float i = 0.5; i < 2.5; i += 0.6666)
		glVertex2f(cos(i * XS_PI) * _s.x, sin(i * XS_PI) * _s.y);
	glEnd();
};
void XsSolidSquare(vex2f _s) {
	glBegin(GL_QUADS);
	for (float i = -0.25; i < 1.25; i += 0.5)
		glVertex2f(cos(i * XS_PI) * _s.x, sin(i * XS_PI) * _s.y);
	glEnd();
};
void XsSolidPolygone(int count, vex2f _s) {
	for (float i = -1; i < 1; i += 2.0f / float(count))
		glVertex2f(cos(i * XS_PI) * _s.x, sin(i * XS_PI) * _s.y);
};

void XsSolidCube(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), XsCubeArray);
		glDrawArrays(GL_TRIANGLES, 0, 36);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), XsCubeTexturedArray);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), XsCubeTexturedArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 36);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsCubeNormalArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsCubeNormalArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 36);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), XsCubeAllInArray);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), XsCubeAllInArray + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), XsCubeAllInArray + 5);
		glDrawArrays(GL_TRIANGLES, 0, 36);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};

void XsSolidPrism(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), XsPrismArray);
		glDrawArrays(GL_TRIANGLES, 0, 24);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsPrismArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsPrismArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 24);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidSphere(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray);
		glVertexPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray + 5);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereTextureArray);
		glVertexPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereTextureArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), XsSphereArray + 5);
		glDrawArrays(GL_TRIANGLES, 0, 2880);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidCone(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsConeArray);
		glDrawArrays(GL_TRIANGLES, 0, 186);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL || XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsConeArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsConeArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 186);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidCylinder(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsCylinderArray);
		glDrawArrays(GL_TRIANGLES, 0, 372);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsCylinderArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsCylinderArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 372);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidIcoSphere(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsIcoSphereArray);
		glDrawArrays(GL_TRIANGLES, 0, 240);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsIcoSphereArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsIcoSphereArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 240);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidMonke(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsMonkeArray);
		glDrawArrays(GL_TRIANGLES, 0, 2904);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsMonkeArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsMonkeArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 2904);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidTorus(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsTorusArray);
		glDrawArrays(GL_TRIANGLES, 0, 3456);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsTorusArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsTorusArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 3456);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidTeapot(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsTeapotArray);
		glDrawArrays(GL_TRIANGLES, 0, 4680);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsTeapotArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsTeapotArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 4680);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolidStar(XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsStarArray);
		glDrawArrays(GL_TRIANGLES, 0, 120);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), XsStarArray);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), XsTeapotArray + 3);
		glDrawArrays(GL_TRIANGLES, 0, 120);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	};
};

void XsSolid(XsSolidType _shape, XsEnum mode) {
	switch (_shape) {
	case XS_CUBE:
		XsSolidCube(mode);
		break;
	case XS_PRISM:
		XsSolidPrism(mode);
		break;
	case XS_CYLINDER:
		XsSolidCylinder(mode);
		break;
	case XS_SPHERE:
		XsSolidSphere(mode);
		break;
	case XS_ICOSPHERE:
		XsSolidIcoSphere(mode);
		break;
	case XS_CONE:
		XsSolidCone(mode);
		break;
	case XS_MONKE:
		XsSolidMonke(mode);
		break;
	case XS_TORUS:
		XsSolidTorus(mode);
		break;
	case XS_TEAPOT:
		XsSolidTeapot(mode);
		break;
	case XS_STAR:
		XsSolidStar(mode);
		break;
	};
};