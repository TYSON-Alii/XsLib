class XsModel {
	GLenum __mode;
	unsigned int __Xmode;
	int __size = 0;
public:
	bool loadFromFile(const char* _filename);
	XsVertices vertices;
	void print();
};
void XsModel::print() {
	switch (__Xmode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &vertices[0]);
		glDrawArrays(__mode, 0, vertices.size() / 3);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), &vertices[0]);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), &vertices[0] + 3);
		glDrawArrays(__mode, 0, vertices.size() / 5);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), &vertices[0]);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), &vertices[0] + 3);
		glDrawArrays(__mode, 0, vertices.size() / 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), &vertices[0]);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), &vertices[0] + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), &vertices[0] + 5);
		glDrawArrays(__mode, 0, vertices.size() / 8);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};
bool XsModel::loadFromFile(const char* _filename) {
	std::stringstream ss;
	std::ifstream in_file(_filename);
	std::string _get = "";
	std::string trash = "";
	std::string _a = "";

	if (!in_file.is_open()) {
		XsLogError(XsLogRed, XsLogWhite, std::string("file cannot open :/ -- " + std::string(_filename) + " ").c_str());
		XsLogDate(XsLogRed, XsLogWhite, 0);
		newln;
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
				__mode = atoi(_get.c_str());
				ss >> _get;
				__Xmode = atoi(_get.c_str());
				ss >> _get;
				__size = std::atoi(_get.c_str());
				switch (__Xmode) {
				case XS_ALL:
					vertices.resize(__size * 8);
					for (size_t _j = 0; _j < __size; _j++) {
						in_file >> _get;
						vertices[_j * 8] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 1] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 2] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 3] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 4] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 5] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 6] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 8 + 7] = atof(_get.c_str());
					};
					break;
				case XS_VERTEX:
					vertices.resize(__size * 3);
					for (size_t _j = 0; _j < __size; _j++) {
						in_file >> _get;
						vertices[_j * 3] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 3 + 1] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 3 + 2] = atof(_get.c_str());
					};
					break;
				case XS_VERTEX_AND_TEXTURE:
					vertices.resize(__size * 5);
					for (size_t _j = 0; _j < __size; _j++) {
						in_file >> _get;
						vertices[_j * 5] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 5 + 1] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 5 + 2] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 5 + 3] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 5 + 4] = atof(_get.c_str());
					};
					break;
				case XS_VERTEX_AND_NORMAL:
					vertices.resize(__size * 6);
					for (size_t _j = 0; _j < __size; _j++) {
						in_file >> _get;
						vertices[_j * 6] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 6 + 1] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 6 + 2] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 6 + 3] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 6 + 4] = atof(_get.c_str());
						in_file >> _get;
						vertices[_j * 6 + 5] = atof(_get.c_str());
					};
					break;
				};
			}
		}
	}
	return true;
};

void XsWriteXsModel(XsVertices __v, XsEnum modex, GLenum mode, const char* file_name) {
	int __kose = 0;
	switch (modex) {
	case XS_VERTEX:
		__kose = 3;
		break;
	case XS_VERTEX_AND_TEXTURE:
		__kose = 5;
		break;
	case XS_VERTEX_AND_NORMAL:
		__kose = 6;
		break;
	case XS_ALL:
		__kose = 8;
		break;
	};
	std::ofstream dosyay(file_name);
	dosyay << "i " << mode << " " << modex << " " << __v.size() / __kose << "\n";
	for (auto __a : __v) {
		dosyay << __a << " ";
	};
	dosyay.close();
};

void XsWriteXsModel(XsVertices __v, XsEnum modex, GLenum mode, const char* file_name, std::string __comment) {
	int __kose = 0;
	switch (modex) {
	case XS_VERTEX:
		__kose = 3;
		break;
	case XS_VERTEX_AND_TEXTURE:
		__kose = 5;
		break;
	case XS_VERTEX_AND_NORMAL:
		__kose = 6;
		break;
	case XS_ALL:
		__kose = 8;
		break;
	};
	std::ofstream dosyay(file_name);
	dosyay << "##\n" << __comment << "\n##\n";
	dosyay << "i " << mode << " " << modex << " " << __v.size() / __kose << "\n";
	for (auto __a : __v) {
		dosyay << __a << " ";
	};
	dosyay.close();
};