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
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
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

	if (!__in_file.is_open())
	{
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
		NEWLINE;
		return __vertices;
	}
	else {
		while (std::getline(__in_file, __line))
		{
			__ss->clear();
			__ss->str(__line);
			*__ss >> __prefix;

			if (__prefix == "v")
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
		}
		__vertices.resize(__vertex_position_indicies.size(), XsVertex());

		for (int i = 0; i < __vertices.size(); ++i)
		{
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		delete __ss;
		return __vertices;
	};
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
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
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

		vertices.resize(__vertex_position_indicies.size(), XsVertex());

		for (size_t i = 0; i < vertices.size(); ++i)
		{
			vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		info += "vertces : ";
		info += to_string(int(vertices.size()));
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
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
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

		for (size_t i = 0; i < __vertices.size(); ++i)
		{
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
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, "file cannot open :/ -- ");
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
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

		__vertices.resize(__vertex_position_indicies.size(), XsVertexi());

		for (size_t i = 0; i < __vertices.size(); ++i)
		{
			__vertices[i].position = __vertex_positions[__vertex_position_indicies[i] - 1];
			__vertices[i].texcoord = __vertex_texcoords[__vertex_texcoord_indicies[i] - 1];
			__vertices[i].normal = __vertex_normals[__vertex_normal_indicies[i] - 1];
		}
		return true;
	};
};