struct XsVertex {
	vex3f position = vex3cf(0, 0, 0);
	vex2f texcoord = vex2cf(0, 0);
	vex3f normal = vex3cf(0, 0, 0);
};
struct XsVertex2d {
	vex2f position = vex2cf(0, 0);
	vex2f texcoord = vex2cf(0, 0);
};
struct XsVertexi {
	vex3i position = vex3ci(0, 0, 0);
	vex2i texcoord = vex2ci(0, 0);
	vex3i normal = vex3ci(0, 0, 0);
};
struct XsVertexi2d {
	vex2i position = vex2ci(0, 0);
	vex2i texcoord = vex2ci(0, 0);
};
typedef std::vector<XsVertex> XsVertexDepo;
typedef std::vector<XsVertex2d> XsVertex2dDepo;
void XsPrintVertex(XsVertexDepo __myVert, vex3b __boolen_piu) {
	for (auto _____yey : __myVert) {
		if (volatile bool(__boolen_piu.x))
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
		if (volatile bool(__boolen_piu.y))
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
		if (volatile bool(__boolen_piu.z))
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert) {
	for (auto _____yey : __myVert) {
		glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3b __boolen_piu, vex3f __orig) {
	for (auto _____yey : __myVert) {
		if (volatile bool(__boolen_piu.x))
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
		if (volatile bool(__boolen_piu.y))
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
		if (volatile bool(__boolen_piu.z))
			glVertex3f(_____yey.position.x * __orig.x, _____yey.position.y * __orig.y, _____yey.position.z * __orig.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig) {
	for (auto _____yey : __myVert) {
		glVertex3f(_____yey.position.x * __orig.x, _____yey.position.y * __orig.y, _____yey.position.z * __orig.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3b __boolen_piu, vex3f __orig, vex3f __g) {
	for (auto _____yey : __myVert) {
		if (volatile bool(__boolen_piu.x))
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
		if (volatile bool(__boolen_piu.y))
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
		if (volatile bool(__boolen_piu.z))
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, ( _____yey.position.z + __g.z) * __orig.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig, vex3f __g) {
	for (auto _____yey : __myVert) {
		glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) *__orig.y, (_____yey.position.z + __g.z) * __orig.z);
	};
};
class XsShape {
public:
	vex4f rot;
	vex3f pos;
	vex3f color;
	void draw(XsVertexDepo& vertices, GLenum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.w, rot.x, rot.y, rot.z);
		glColor3f(color.x, color.y, color.z);
		glBegin(mode);
		for (int i = 0; i < vertices.size(); i++) {
			glNormal3f(vertices[i].normal.x, vertices[i].normal.y, vertices[i].normal.z);
			glVertex3f(vertices[i].position.x, vertices[i].position.y, vertices[i].position.z);
		};
		glEnd();
	}
	void draw(XsVertexDepo& vertices, XsTexture& texture, GLenum mode) {
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.w, rot.x, rot.y, rot.z);
		glColor3f(color.x, color.y, color.z);
		glBegin(mode);
		for (int i = 0; i < vertices.size(); i++) {
			glTexCoord2f(vertices[i].texcoord.x, vertices[i].texcoord.y);
			glNormal3f(vertices[i].normal.x, vertices[i].normal.y, vertices[i].normal.z);
			glVertex3f(vertices[i].position.x, vertices[i].position.y, vertices[i].position.z);

		};
		glEnd();
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
		for (int i = 0; i < vertices.size(); i++) {
			glTexCoord2f(vertices[i].texcoord.x, vertices[i].texcoord.y);
			glNormal3f(vertices[i].normal.x, vertices[i].normal.y, vertices[i].normal.z);
			glVertex3f((vertices[i].position.x + origin.x) * scale.x, (vertices[i].position.y + origin.y) * scale.y, (vertices[i].position.z + origin.z) * scale.z);
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

class XsSolidShapes {
	class triangle {
	public:
		vex3f pos;
		vex4f rot;
		vex3f color;
		vex2f scale;
		void draw() {
			glLoadIdentity();
			glTranslatef(pos.x, pos.y, pos.z);
			glRotatef(rot.w, rot.x, rot.y, rot.z);
			glColor3f(color.x, color.y, color.z);
			glBegin(GL_TRIANGLES);
			for (float i = -0.9; i < 0.9; i += 0.333)
				glVertex3f(cos(i * XS_PI) * scale.x, sin(i * XS_PI) * scale.y, 0);
			glEnd();
		};
	};
	class rectangle {
	public:
		vex3f pos;
		vex4f rot;
		vex3f color;
		vex2f scale;
		void draw() {
			glLoadIdentity();
			glTranslatef(pos.x, pos.y, pos.z);
			glRotatef(rot.w, rot.x, rot.y, rot.z);
			glColor3f(color.x, color.y, color.z);
			glBegin(GL_TRIANGLES);
			for (float i = -1; i < 1; i += 0.25)
				glVertex3f(cos(i * XS_PI) * scale.x, sin(i * XS_PI) * scale.y, 0);
			glEnd();
		};
	};
	class polygone {
	public:
		vex3f pos;
		vex4f rot;
		vex3f color;
		vex2f scale;
		int count;
		void draw() {
			glLoadIdentity();
			glTranslatef(pos.x, pos.y, pos.z);
			glRotatef(rot.w, rot.x, rot.y, rot.z);
			glColor3f(color.x, color.y, color.z);
			glBegin(GL_TRIANGLES);
			for (float i = -1; i < 1; i += 1.0f / float(count))
				glVertex3f(cos(i * XS_PI) * scale.x, sin(i * XS_PI) * scale.y, 0);
			glEnd();
		};
	};
};

class XsModel {
public:
	bool loadFromFile(const char* _filename);
	XsVertexDepo vertex;
	std::vector<int> vcount;
	void printVertex();
	int size = 0;
};
void XsModel::printVertex() {
	glBegin(GL_QUADS);
	for (int i = 0; i < size; i++) {
		glTexCoord2f(vertex[i].texcoord.x, vertex[i].texcoord.y);
		if (i % 4 == 0)
			glNormal3f(vertex[i / 4].normal.x, vertex[i / 4].normal.y, vertex[i / 4].normal.z);
		glVertex3f(vertex[i].position.x, vertex[i].position.y, vertex[i].position.z);
	};
	glEnd();
};
bool XsModel::loadFromFile(const char* _filename) {
	std::stringstream ss;
	std::ifstream in_file(_filename);
	std::string _get = "";
	std::string trash = "";
	std::string _a = "";

	if (!in_file.is_open()){
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, std::string("file cannot open :/ -- " + std::string(_filename) + " ").c_str());
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
		NEWLINE;
		return false;
	}
	else {
		while (in_file >> _get) {
			if (_get == "#")
				std::getline(in_file, trash);
			else if (_get == "##") {
				_get.clear();
				while (_get == "##") {
					std::getline(in_file, _get);
				};
			}
			else if (_get == "i") {
				std::getline(in_file, _a);
				ss = std::stringstream(_a);
				ss >> _get;
				size = std::atoi(_get.c_str());
				vertex.resize(size, XsVertex());
				while (ss >> _get) {
					vcount.push_back(std::atoi(_get.c_str()));
				}
				for (int i = 0; i < vcount.size(); i++) {
					for (int j = 0; j < vcount[i]; j++) {
						in_file >> _get;
						vertex[j].position.x = std::atof(_get.c_str());
						in_file >> _get;
						vertex[j].position.y = std::atof(_get.c_str());
						in_file >> _get;
						vertex[j].position.z = std::atof(_get.c_str());
					};
					for (int j = 0; j < vcount[i]; j++) {
						in_file >> _get;
						vertex[j].texcoord.x = std::atof(_get.c_str());
						in_file >> _get;
						vertex[j].texcoord.y = std::atof(_get.c_str());
					};
					in_file >> _get;
					vertex[i].normal.x = std::atof(_get.c_str());
					in_file >> _get;
					vertex[i].normal.y = std::atof(_get.c_str());
					in_file >> _get;
					vertex[i].normal.z = std::atof(_get.c_str());
				}
			}
		}
	}
	return true;
};
