void XsObj_to_opengl(XsVertexDepo& vertex, const char* file_name, vex3b ___mode) {
	std::ofstream dosyam(file_name);
	for (auto ____f : vertex) {
		if(volatile bool(___mode.x == true))
			dosyam << "glTexCoord2f(" << ____f.texcoord.x << ", " << ____f.texcoord.y << "); \n";
		if (volatile bool(___mode.y == true))
			dosyam  << "glNormal3f(" << ____f.normal.x << ", " << ____f.normal.y << ", " << ____f.normal.z << "); \n";
		if (volatile bool(___mode.z == true))
			dosyam << "glVertex3f(" << ____f.position.x << ", " << ____f.position.y << ", " << ____f.position.z << "); \n";
	}
}

void XsVertex_to_array(XsVertexDepo& vertex, const char* file_name) {
	std::ofstream dosyam(file_name);
	dosyam << "GLfloat sekil[] = { \n";
	for (int i = 0; i < vertex.size(); i++) {
		dosyam << vertex[i].position.x << ", " << vertex[i].position.y << ", " << vertex[i].position.z << ", " << vertex[i].texcoord.x << ", " << vertex[i].texcoord.y << ", \n";
	};
	dosyam << "\n };";
}

void XsVertex_print(XsVertexDepo& vertex, const char* file_name) {
	std::ofstream dosyam(file_name);
	for (int i = 0; i < vertex.size(); i += 4) {
		dosyam << vertex[i].position.x << " " << vertex[i].position.y << " " << vertex[i].position.z << " ";
		dosyam << vertex[i + 1].position.x << " " << vertex[i + 1].position.y << " " << vertex[i + 1].position.z << " ";
		dosyam << vertex[i + 2].position.x << " " << vertex[i + 2].position.y << " " << vertex[i + 2].position.z << " ";
		dosyam << vertex[i + 3].position.x << " " << vertex[i + 3].position.y << " " << vertex[i + 3].position.z << " ";
		dosyam << vertex[i].texcoord.x << " " << vertex[i].texcoord.y << " ";
		dosyam << vertex[i + 1].texcoord.x << " " << vertex[i + 1].texcoord.y << " ";
		dosyam << vertex[i + 2].texcoord.x << " " << vertex[i + 2].texcoord.y << " ";
		dosyam << vertex[i + 3].texcoord.x << " " << vertex[i + 3].texcoord.y << " ";
		dosyam << vertex[i / 4].normal.x << " " << vertex[i / 4].normal.y << " " << vertex[i / 4].normal.z << " ";
	};
}