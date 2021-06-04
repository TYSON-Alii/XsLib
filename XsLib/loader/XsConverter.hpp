void XsObjToOpenglText(XsVertexDepo vertex, const char* file_name, XsEnum _mode) {
	std::ofstream dosyam(file_name);
	switch (_mode) {
	case XS_ALL:
		for (auto ____f : vertex) {
			dosyam << "glTexCoord2f(" << ____f.texcoord.x << ", " << ____f.texcoord.y << "); \n";
			dosyam << "glNormal3f(" << ____f.normal.x << ", " << ____f.normal.y << ", " << ____f.normal.z << "); \n";
			dosyam << "glVertex3f(" << ____f.position.x << ", " << ____f.position.y << ", " << ____f.position.z << "); \n";
		};
		break;
	case XS_VERTEX:
		for (auto ____f : vertex) {
			dosyam << "glVertex3f(" << ____f.position.x << ", " << ____f.position.y << ", " << ____f.position.z << "); \n";
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto ____f : vertex) {
			dosyam << "glTexCoord2f(" << ____f.texcoord.x << ", " << ____f.texcoord.y << "); \n";
			dosyam << "glVertex3f(" << ____f.position.x << ", " << ____f.position.y << ", " << ____f.position.z << "); \n";
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto ____f : vertex) {
			dosyam << "glNormal3f(" << ____f.normal.x << ", " << ____f.normal.y << ", " << ____f.normal.z << "); \n";
			dosyam << "glVertex3f(" << ____f.position.x << ", " << ____f.position.y << ", " << ____f.position.z << "); \n";
		};
		break;
	};
	dosyam.close();
};

void XsVertexToArrayText(XsVertexDepo __vertex, const char* file_name, XsEnum __aa) {
	std::ofstream dosyam(file_name);
	dosyam << "GLfloat array[] = { \n";
	switch (__aa) {
	case XS_ALL:
		for (auto __f : __vertex) {
			dosyam << __f.position.x << ", " << __f.position.y << ", " << __f.position.z << ", ";
			dosyam << __f.texcoord.x << ", " << __f.texcoord.y << ",";
			dosyam << __f.normal.x << ", " << __f.normal.y << ", " << __f.normal.z << ", ";
			dosyam << "\n";
		};
		break;
	case XS_VERTEX:
		for (auto __f : __vertex) {
			dosyam << __f.position.x << ", " << __f.position.y << ", " << __f.position.z << ", ";
			dosyam << "\n";
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto __f : __vertex) {
			dosyam << __f.position.x << ", " << __f.position.y << ", " << __f.position.z << ", ";
			dosyam << __f.texcoord.x << ", " << __f.texcoord.y << ",";
			dosyam << "\n";
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto __f : __vertex) {
			dosyam << __f.position.x << ", " << __f.position.y << ", " << __f.position.z << ", ";
			dosyam << __f.normal.x << ", " << __f.normal.y << ", " << __f.normal.z << ", ";
			dosyam << "\n";
		};
		break;
	};
	dosyam << "};";
	dosyam.close();
};

void XsVertexWriteText(XsVertexDepo vertex, const char* file_name, XsEnum mode) {
	std::ofstream dosyam(file_name);
	switch (mode) {
	case XS_VERTEX:
		for (int i = 0; i < vertex.size(); i++) {
			dosyam << vertex[i].position.x << " " << vertex[i].position.y << " " << vertex[i].position.z << " ";
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int i = 0; i < vertex.size(); i ++) {
			dosyam << vertex[i].position.x << " " << vertex[i].position.y << " " << vertex[i].position.z << " ";
			dosyam << vertex[i].texcoord.x << " " << vertex[i].texcoord.y << " ";
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int i = 0; i < vertex.size(); i ++) {
			dosyam << vertex[i].position.x << " " << vertex[i].position.y << " " << vertex[i].position.z << " ";
			dosyam << vertex[i].normal.x << " " << vertex[i].normal.y << " " << vertex[i].normal.z << " ";
		};
		break;
	case XS_ALL:
		for (int i = 0; i < vertex.size(); i ++) {
			dosyam << vertex[i].position.x << " " << vertex[i].position.y << " " << vertex[i].position.z << " ";
			dosyam << vertex[i].texcoord.x << " " << vertex[i].texcoord.y << " ";
			dosyam << vertex[i].normal.x << " " << vertex[i].normal.y << " " << vertex[i].normal.z << " ";
		};
		break;
	};
}