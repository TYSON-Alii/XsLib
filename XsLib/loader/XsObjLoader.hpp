bool XsOBJLoader(const char* __file_name, XsVertexDepo& __vertices) {
	std::vector<vex3f> __vertex_positions;
	std::vector<vex2f> __vertex_texcoords;
	std::vector<vex3f> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream* __ss = new std::stringstream;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3f __temp_vec3;
	vex2f __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open())
	{
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- ");
		XsLogDate(XsLogRed, XsLogWhite, 0);
		NEWLINE;
		return false;
	}
	else {
		while (std::getline(__in_file, __line))
		{
			__ss->clear();
			__ss->str(__line);
			*__ss >> __prefix;

			if (__prefix == "#")
			{
			}
			else if (__prefix == "o")
			{
			}
			else if (__prefix == "s")
			{
			}
			else if (__prefix == "use_mtl")
			{
			}
			else if (__prefix == "v")
			{
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt")
			{
				*__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn")
			{
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f")
			{
				int __counter = 0;
				while (*__ss >> __temp_glint)
				{
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss->peek() == '/')
					{
						++__counter;
						__ss->ignore(1, '/');
					}
					else if (__ss->peek() == ' ')
					{
						++__counter;
						__ss->ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
			else
			{

			}
		}

		__vertices.resize(__vertex_position_indicies.size(), XsVertex());
		for (size_t i = 0; i < __vertices.size(); ++i)
		{
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		delete __ss;
		return true;
	};
};
XsVertexDepo XsOBJLoader(const char* __file_name) {
	XsVertexDepo __vertices;
	std::vector<vex3f> __vertex_positions;
	std::vector<vex2f> __vertex_texcoords;
	std::vector<vex3f> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream* __ss = new std::stringstream;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3f __temp_vec3;
	vex2f __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open()) {
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- \n");
		XsLogDate(XsLogWhite, XsLogRed, 0);
		NEWLINE;
		return __vertices;
	}
	else {
		while (std::getline(__in_file, __line)) {
			__ss->clear();
			__ss->str(__line);
			*__ss >> __prefix;

			if (__prefix == "v") {
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt") {
				*__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn") {
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f") {
				volatile size_t __counter = 0;
				while (*__ss >> __temp_glint) {
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss->peek() == '/') {
						++__counter;
						__ss->ignore(1, '/');
					}
					else if (__ss->peek() == ' ') {
						++__counter;
						__ss->ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
		}
		__vertices.resize(__vertex_position_indicies.size(), XsVertex());

		for (volatile size_t i = 0; i < __vertices.size(); ++i){
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		delete __ss;
	};
	return __vertices;
};

XsVertices XsOBJLoader(const char* __file_name, XsEnum mode) {
	XsVertices __vertices;
	std::vector<vex3f> __vertex_positions;
	std::vector<vex2f> __vertex_texcoords;
	std::vector<vex3f> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream* __ss = new std::stringstream;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3f __temp_vec3;
	vex2f __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open()) {
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- \n");
		XsLogDate(XsLogWhite, XsLogRed, 0);
		NEWLINE;
		return __vertices;
	}
	else {
		while (std::getline(__in_file, __line)) {
			__ss->clear();
			__ss->str(__line);
			*__ss >> __prefix;

			if (__prefix == "v") {
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt") {
				*__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn") {
				*__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f") {
				volatile size_t __counter = 0;
				while (*__ss >> __temp_glint) {
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss->peek() == '/') {
						++__counter;
						__ss->ignore(1, '/');
					}
					else if (__ss->peek() == ' ') {
						++__counter;
						__ss->ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
		}
		__vertices.clear();
		switch (mode) {
		case XS_VERTEX:
			__vertices.resize(__vertex_position_indicies.size() * 3, 0);
			for (volatile size_t i = 0; i < __vertex_position_indicies.size(); i++) {
				__vertices[i * 3] = __vertex_positions[__vertex_position_indicies[i] - 1].x;
				__vertices[i * 3 + 1] = __vertex_positions[__vertex_position_indicies[i] - 1].y;
				__vertices[i * 3 + 2] = __vertex_positions[__vertex_position_indicies[i] - 1].z;
			}
			break;
		case XS_VERTEX_AND_TEXTURE:
			__vertices.resize(__vertex_position_indicies.size() * 5, 0);
			for (volatile size_t i = 0; i < __vertex_position_indicies.size(); i++) {
				__vertices[i * 5] = __vertex_positions[__vertex_position_indicies[i] - 1].x;
				__vertices[i * 5 + 1] = __vertex_positions[__vertex_position_indicies[i] - 1].y;
				__vertices[i * 5 + 2] = __vertex_positions[__vertex_position_indicies[i] - 1].z;
				__vertices[i * 5 + 3] = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1].x;
				__vertices[i * 5 + 4] = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1].y;
			}
			break;
		case XS_VERTEX_AND_NORMAL:
			__vertices.resize(__vertex_position_indicies.size() * 6, 0);
			for (volatile size_t i = 0; i < __vertex_position_indicies.size(); i++) {
				__vertices[i * 6] = __vertex_positions[__vertex_position_indicies[i] - 1].x;
				__vertices[i * 6 + 1] = __vertex_positions[__vertex_position_indicies[i] - 1].y;
				__vertices[i * 6 + 2] = __vertex_positions[__vertex_position_indicies[i] - 1].z;
				__vertices[i * 6 + 5] = __vertex_normals[__vertex_normal_indicies[i] - 1].x;
				__vertices[i * 6 + 6] = __vertex_normals[__vertex_normal_indicies[i] - 1].y;
				__vertices[i * 6 + 7] = __vertex_normals[__vertex_normal_indicies[i] - 1].z;
			}
			break;
		case XS_ALL:
			__vertices.resize(__vertex_position_indicies.size() * 8, 0);
			for (volatile size_t i = 0; i < __vertex_position_indicies.size(); i++) {
				__vertices[i * 8] = __vertex_positions[__vertex_position_indicies[i] - 1].x;
				__vertices[i * 8 + 1] = __vertex_positions[__vertex_position_indicies[i] - 1].y;
				__vertices[i * 8 + 2] = __vertex_positions[__vertex_position_indicies[i] - 1].z;
				__vertices[i * 8 + 3] = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1].x;
				__vertices[i * 8 + 4] = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1].y;
				__vertices[i * 8 + 5] = __vertex_normals[__vertex_normal_indicies[i] - 1].x;
				__vertices[i * 8 + 6] = __vertex_normals[__vertex_normal_indicies[i] - 1].y;
				__vertices[i * 8 + 7] = __vertex_normals[__vertex_normal_indicies[i] - 1].z;
			}
			break;
		}
		delete __ss;
	};
	return __vertices;
};

bool XsOBJShape::loadFromFile(const char* __file_name) {
	std::vector<vex3f> __vertex_positions;
	std::vector<vex2f> __vertex_texcoords;
	std::vector<vex3f> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream __ss;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3f __temp_vec3;
	vex2f __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open())
	{
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- ");
		XsLogDate(XsLogRed, XsLogWhite, 0);
		NEWLINE;
		info.clear();
		info += "file cannot open ";
		return false;
	}
	else {
		while (std::getline(__in_file, __line))
		{
			__ss.clear();
			__ss.str(__line);
			__ss >> __prefix;

			if (__prefix == "#")
			{
				std::string __trvfsvf;
				__ss >> __trvfsvf;
				info += __trvfsvf;
				info += " ";
			}
			else if (__prefix == "o")
			{
			}
			else if (__prefix == "s")
			{
			}
			else if (__prefix == "use_mtl")
			{
			}
			else if (__prefix == "v")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt")
			{
				__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f")
			{
				int __counter = 0;
				while (__ss >> __temp_glint)
				{
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss.peek() == '/')
					{
						++__counter;
						__ss.ignore(1, '/');
					}
					else if (__ss.peek() == ' ')
					{
						++__counter;
						__ss.ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
			else
			{

			}
		}

		_verts.resize(__vertex_position_indicies.size(), XsVertex());

		for (size_t i = 0; i < _verts.size(); ++i)
		{
			_verts[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			_verts[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			_verts[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		info += "vertces : ";
		info += str(int(_verts.size()));
		return true;
	};
};

bool XsOBJLoader(const char* __file_name, std::vector<XsVertex>& __vertices, vex3f __scale) {
	std::vector<vex3f> __vertex_positions;
	std::vector<vex2f> __vertex_texcoords;
	std::vector<vex3f> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream __ss;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3f __temp_vec3;
	vex2f __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open())
	{
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- ");
		XsLogDate(XsLogRed, XsLogWhite, 0);
		NEWLINE;
		return false;
	}
	else {

		while (std::getline(__in_file, __line))
		{
			__ss.clear();
			__ss.str(__line);
			__ss >> __prefix;

			if (__prefix == "#")
			{
			}
			else if (__prefix == "o")
			{
			}
			else if (__prefix == "s")
			{
			}
			else if (__prefix == "use_mtl")
			{
			}
			else if (__prefix == "v")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt")
			{
				__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f")
			{
				int __counter = 0;
				while (__ss >> __temp_glint)
				{
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss.peek() == '/')
					{
						++__counter;
						__ss.ignore(1, '/');
					}
					else if (__ss.peek() == ' ')
					{
						++__counter;
						__ss.ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
			else
			{

			}
		}

		__vertices.resize(__vertex_position_indicies.size(), XsVertex());

		for (size_t i = 0; i < __vertices.size(); ++i){
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1] * __scale;
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		return true;
	};
};
bool XsOBJLoader(const char* __file_name, std::vector<XsVertexi>& __vertices) {
	std::vector<vex3i> __vertex_positions;
	std::vector<vex2i> __vertex_texcoords;
	std::vector<vex3i> __vertex_normals;

	std::vector<GLint> __vertex_position_indicies;
	std::vector<GLint> __vertex_texcoord_indicies;
	std::vector<GLint> __vertex_normal_indicies;

	std::stringstream __ss;
	std::ifstream __in_file(__file_name);
	std::string __line = "";
	std::string __prefix = "";
	vex3i __temp_vec3;
	vex2i __temp_vec2;
	GLint __temp_glint = 0;

	if (!__in_file.is_open())
	{
		XsLogError(XsLogRed, XsLogWhite, "file cannot open :/ -- ");
		XsLogDate(XsLogRed, XsLogWhite, 0);
		NEWLINE;
		return false;
	}
	else {

		while (std::getline(__in_file, __line))
		{
			__ss.clear();
			__ss.str(__line);
			__ss >> __prefix;

			if (__prefix == "#")
			{
			}
			else if (__prefix == "o")
			{
			}
			else if (__prefix == "s")
			{
			}
			else if (__prefix == "use_mtl")
			{
			}
			else if (__prefix == "v")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_positions.push_back(__temp_vec3);
			}
			else if (__prefix == "vt")
			{
				__ss >> __temp_vec2.x >> __temp_vec2.y;
				__vertex_texcoords.push_back(__temp_vec2);
			}
			else if (__prefix == "vn")
			{
				__ss >> __temp_vec3.x >> __temp_vec3.y >> __temp_vec3.z;
				__vertex_normals.push_back(__temp_vec3);
			}
			else if (__prefix == "f")
			{
				int __counter = 0;
				while (__ss >> __temp_glint)
				{
					if (__counter == 0)
						__vertex_position_indicies.push_back(__temp_glint);
					else if (__counter == 1)
						__vertex_texcoord_indicies.push_back(__temp_glint);
					else if (__counter == 2)
						__vertex_normal_indicies.push_back(__temp_glint);

					if (__ss.peek() == '/')
					{
						++__counter;
						__ss.ignore(1, '/');
					}
					else if (__ss.peek() == ' ')
					{
						++__counter;
						__ss.ignore(1, ' ');
					}

					if (__counter > 2)
						__counter = 0;
				}
			}
			else
			{

			}
		}

		__vertices.resize(__vertex_position_indicies.size(), XsVertexi(vex3i(0), vex2i(0), vex3i(0)));

		for (size_t i = 0; i < __vertices.size(); ++i)
		{
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		return true;
	};
};