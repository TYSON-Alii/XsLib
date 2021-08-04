void XsSave(XsShape& v, const char* filename) {
	std::ofstream _f(filename);

	_f << "XsShape\n";
	_f << v.pos.x << " " << v.pos.y << " " << v.pos.z << "\n";
	_f << v.rot.x << " " << v.rot.y << " " << v.rot.z << "\n";
	_f << v.scale.x << " " << v.scale.y << " " << v.scale.z << "\n";
	_f << v.color.x << " " << v.color.y << " " << v.color.z << " " << v.color.w << "\n";
};
void XsSave(XsShape2d& v, const char* filename) {
	std::ofstream _f(filename);

	_f << "XsShape2d\n";
	_f << v.pos.x << " " << v.pos.y << "\n";
	_f << v.rot << "\n";
	_f << v.scale.x << " " << v.scale.y << "\n";
	_f << v.color.x << " " << v.color.y << " " << v.color.z << " " << v.color.w << "\n";
};
void XsSave(XsCamera& v, const char* filename) {
	std::ofstream _f(filename);

	_f << "XsCamera\n";
	_f << v.pos.x << " " << v.pos.y << " " << v.pos.z << "\n";
	_f << v.rot.x << " " << v.rot.y << " " << v.rot.z << "\n";
	_f << v.fov << "\n";
	_f << v.near_ << " " << v.far_ << "\n";
	_f << v.viewport.x << " " << v.viewport.y << "\n";
};

class XsSaver {
private:
	std::fstream _file;
	std::string _fname;
public:
	XsSaver(const char* filename) {
		std::string files = filename;
		if (files.size() > 7)
			if (files[files.size() - 7] == 'x' &&
				files[files.size() - 6] == 's' &&
				files[files.size() - 5] == '.' &&
				files[files.size() - 4] == 's' &&
				files[files.size() - 3] == 'a' &&
				files[files.size() - 2] == 'v' &&
				files[files.size() - 1] == 'e');
			else
				files += ".xs.save";
		_fname = files;
		_file.open(_fname, std::fstream::in);
		if (!_file.is_open()) {
			_file.open(_fname, std::fstream::out);
			if (!_file.is_open())
				XsLogError(XsLogWhite, XsLogRed, "file cannot open *shrug*\n");
			else
				_file.close();
		};
		_file.close();
	};
	void add(float v, const char* key) { _file.open(_fname, std::ios::app); _file << "float " << key << ' ' << v << '\n'; _file.close(); };
	void add(int v, const char* key) { _file.open(_fname, std::ios::app); _file << "int " << key << ' ' << v << '\n'; _file.close(); };
	void add(double v, const char* key) { _file.open(_fname, std::ios::app); _file << "double " << key << ' ' << v << '\n'; _file.close(); };
	void add(bool v, const char* key) { _file.open(_fname, std::ios::app); _file << "bool " << key << ' ' << v << '\n'; _file.close(); };
	void add(char v, const char* key) { _file.open(_fname, std::ios::app); _file << "char " << key << ' ' << v << '\n'; _file.close(); };
	void add(const char* v, const char* key) { _file.open(_fname, std::ios::app); _file << "c_string " << key << ' ' << v << '\n'; _file.close(); };
	void add(std::string v, const char* key) { _file.open(_fname, std::ios::app); _file << "string " << key << ' ' << v << '\n'; _file.close(); };
	void add(vex2f v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex2f " << key << ' ' << v.x << ' ' << v.y << '\n'; _file.close(); };
	void add(vex3f v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex3f " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << '\n'; _file.close(); };
	void add(vex4f v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex4f " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << ' ' << v.w << '\n'; _file.close(); };
	void add(vex2i v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex2i " << key << ' ' << v.x << ' ' << v.y << '\n'; _file.close(); };
	void add(vex3i v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex3i " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << '\n'; _file.close(); };
	void add(vex4i v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex4i " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << ' ' << v.w << '\n'; _file.close(); };
	void add(vex2d v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex2d " << key << ' ' << v.x << ' ' << v.y << '\n'; _file.close(); };
	void add(vex3d v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex3d " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << '\n'; _file.close(); };
	void add(vex4d v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex4d " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << ' ' << v.w << '\n'; _file.close(); };
	//void add(vex2b v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex2b " << key << ' ' << v.x << ' ' << v.y << '\n'; _file.close(); };
	//void add(vex3b v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex3b " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << '\n'; _file.close(); };
	//void add(vex4b v, const char* key) { _file.open(_fname, std::ios::app); _file << "vex4b " << key << ' ' << v.x << ' ' << v.y << ' ' << v.z << ' ' << v.w << '\n'; _file.close(); };

	bool get(float& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "float") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atof(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(int& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "int") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atoi(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(double& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "double") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atof(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(bool& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "bool") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atob(*_v);
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(char& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "char") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						if (_v->size() == 1) {
							v = _v->back();
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value is not character, first element will be taken...\n");
							v = _v->back();
						};
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(std::string& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = *_v + " ";
						while (*_s >> *_v)
							v += *_v + " ";
						v.pop_back();
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(const char*& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "c_string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _t = new std::string("");
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_t = *_v + " ";
						while (*_s >> *_v)
							*_t += *_v + " ";
						_t->pop_back();
						v = _t->c_str();
						delete _v, _t;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex2f& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex2i& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex2d& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex3f& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex3i& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atoi(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex3d& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex4f& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atof(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex4i& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atoi(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atoi(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool get(vex4d& v, const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atof(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};

	float getf(const char* key) {
		float v = 0;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "float") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atof(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	int geti(const char* key) {
		int v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "int") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atoi(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	double getd(const char* key) {
		double v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "double") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atof(_v->c_str());
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	bool getb(const char* key) {
		bool v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "bool") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = std::atob(*_v);
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	char getc(const char* key) {
		char v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "char") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						if (_v->size() == 1) {
							v = _v->back();
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value is not character, first element will be taken...\n");
							v = _v->back();
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	std::string getstr(const char* key) {
		std::string v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v = *_v + " ";
						while (*_s >> *_v)
							v += *_v + " ";
						v.pop_back();
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	const char* getcstr(const char* key) {
		const char* v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "c_string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _t = new std::string("");
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_t = *_v + " ";
						while (*_s >> *_v)
							*_t += *_v + " ";
						_t->pop_back();
						v = _t->c_str();
						delete _v, _t;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex2f getv2f(const char* key) {
		vex2f v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex2i getv2i(const char* key) {
		vex2i v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex2d getv2d(const char* key) {
		vex2d v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex3f getv3f(const char* key) {
		vex3f v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex3i getv3i(const char* key) {
		vex3i v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atoi(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex3d getv3d(const char* key) {
		vex3d v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex4f getv4f(const char* key) {
		vex4f v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atof(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex4i getv4i(const char* key) {
		vex4i v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atoi(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atoi(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atoi(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atoi(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};
	vex4d getv4d(const char* key) {
		vex4d v;
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						v.x = std::atof(_v->c_str());
						*_s >> *_v;
						if (!_v->empty()) {
							v.y = std::atof(_v->c_str());
							*_s >> *_v;
							if (!_v->empty()) {
								v.z = std::atof(_v->c_str());
								*_s >> *_v;
								if (!_v->empty()) {
									v.w = std::atof(_v->c_str());
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					goto correct;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return v;
	};

	void change(float v, const char* key) {
		if (isTheref(key)) {
			const std::string* _ts = new std::string(str(getf(key)));
			_file.open(_fname, std::fstream::in);
			std::string* _l = new std::string("");
			std::string* _tt = new std::string("");
			while (std::getline(_file, *_l)) {
				if (std::string("float ") + key + ' ' + *_ts != *_l)
					*_tt += *_l + '\n';
			};
			_file.close();
			_file.open(_fname, std::fstream::out);
			_file << *_tt;
			_file << std::string("float ") + key + ' ' + str(v) << '\n';
			_file.close();
			delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(int v, const char* key) {
		if (isTherei(key)) {
			const std::string* _ts = new std::string(str(geti(key)));
			_file.open(_fname, std::fstream::in);
			std::string* _l = new std::string("");
			std::string* _tt = new std::string("");
			while (std::getline(_file, *_l)) {
				if (std::string("int ") + key + ' ' + *_ts != *_l)
					*_tt += *_l + '\n';
			};
			_file.close();
			_file.open(_fname, std::fstream::out);
			_file << *_tt;
			_file << std::string("int ") + key + ' ' + str(v) << '\n';
			_file.close();
			delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(double v, const char* key) {
		if (isThered(key)) {
			const std::string* _ts = new std::string(str(getd(key)));
			_file.open(_fname, std::fstream::in);
			std::string* _l = new std::string("");
			std::string* _tt = new std::string("");
			while (std::getline(_file, *_l)) {
				if (std::string("double ") + key + ' ' + *_ts != *_l)
					*_tt += *_l + '\n';
			};
			_file.close();
			_file.open(_fname, std::fstream::out);
			_file << *_tt;
			_file << std::string("double ") + key + ' ' + str(v) << '\n';
			_file.close();
			delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(bool v, const char* key) {
		if (isThereb(key)) {
		const std::string* _ts = new std::string(str(getb(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("bool ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("bool ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(char v, const char* key) {
		if (isTherec(key)) {
		const std::string* _ts = new std::string(str(getc(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("char ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("char ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(const char* v, const char* key) {
		if (isTherecstr(key)) {
		const std::string* _ts = new std::string(getcstr(key));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("c_string ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("c_string ") + key + ' ' + std::string(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(std::string v, const char* key) {
		if (isTherestr(key)) {
		const std::string* _ts = new std::string(getstr(key));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("string ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("string ") + key + ' ' + v << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex2f v, const char* key) {
		if (isTherev2f(key)) {
			const std::string* _ts = new std::string(str(getv2f(key)));
			_file.open(_fname, std::fstream::in);
			std::string* _l = new std::string("");
			std::string* _tt = new std::string("");
			while (std::getline(_file, *_l)) {
				if (std::string("vex2f ") + key + ' ' + *_ts != *_l)
					*_tt += *_l + '\n';
			};
			_file.close();
			_file.open(_fname, std::fstream::out);
			_file << *_tt;
			_file << std::string("vex2f ") + key + ' ' + str(v) << '\n';
			_file.close();
			delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex2i v, const char* key) {
		if (isTherev2i(key)) {
		const std::string* _ts = new std::string(str(getv2i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex2i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex2i ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex2d v, const char* key) {
		if (isTherev2d(key)) {
		const std::string* _ts = new std::string(str(getv2d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex2d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex2d ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex3f v, const char* key) {
		if (isTherev3f(key)) {
		const std::string* _ts = new std::string(str(getv3f(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3f ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex3f ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex3i v, const char* key) {
		if (isTherev3i(key)) {
		const std::string* _ts = new std::string(str(getv3i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex3i ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex3d v, const char* key) {
		if (isTherev3d(key)) {
		const std::string* _ts = new std::string(str(getv3d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex3d ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex4f v, const char* key) {
		if (isTherev4f(key)) {
		const std::string* _ts = new std::string(str(getv4f(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4f ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex4f ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex4i v, const char* key) {
		if (isTherev4i(key)) {
		const std::string* _ts = new std::string(str(getv4i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex4i ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};
	void change(vex4d v, const char* key) {
		if (isTherev4d(key)) {
		const std::string* _ts = new std::string(str(getv4d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file << std::string("vex4d ") + key + ' ' + str(v) << '\n';
		_file.close();
		delete _ts, _tt, _l;
		}
		else
			add(v, key);
	};

	void delf(const char* key) {
		const std::string* _ts = new std::string(str(getf(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("float ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void deli(const char* key) {
		const std::string* _ts = new std::string(str(geti(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("int ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void deld(const char* key) {
		const std::string* _ts = new std::string(str(getd(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("double ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delb(bool v, const char* key) {
		const std::string* _ts = new std::string(str(getb(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("bool ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delc(char v, const char* key) {
		const std::string* _ts = new std::string(str(getc(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("char ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delcstr(const char* v, const char* key) {
		const std::string* _ts = new std::string(getcstr(key));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("c_string ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delstr(std::string v, const char* key) {
		const std::string* _ts = new std::string(getstr(key));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("string ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv2f(vex2f v, const char* key) {
		const std::string* _ts = new std::string(str(getv2f(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex2f ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv2i(vex2i v, const char* key) {
		const std::string* _ts = new std::string(str(getv2i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex2i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv2d(vex2d v, const char* key) {
		const std::string* _ts = new std::string(str(getv2d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex2d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv3f(vex3f v, const char* key) {
		const std::string* _ts = new std::string(str(getv3f(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3f ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv3i(vex3i v, const char* key) {
		const std::string* _ts = new std::string(str(getv3i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv3d(vex3d v, const char* key) {
		const std::string* _ts = new std::string(str(getv3d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex3d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv4f(vex4f v, const char* key) {
		const std::string* _ts = new std::string(str(getv4f(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4f ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void delv4i(vex4i v, const char* key) {
		const std::string* _ts = new std::string(str(getv4i(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4i ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};
	void del4d(vex4d v, const char* key) {
		const std::string* _ts = new std::string(str(getv2d(key)));
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string("");
		std::string* _tt = new std::string("");
		while (std::getline(_file, *_l)) {
			if (std::string("vex4d ") + key + ' ' + *_ts != *_l)
				*_tt += *_l + '\n';
		};
		_file.close();
		_file.open(_fname, std::fstream::out);
		_file << *_tt;
		_file.close();
		delete _ts, _tt, _l;
	};

	bool isTheref(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "float") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherei(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "int") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isThered(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "double") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isThereb(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "bool") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherec(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "char") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherestr(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherecstr(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "c_string") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _t = new std::string("");
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						delete _v, _t;
						goto correct;
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev2f(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev2i(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev2d(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex2d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							delete _v;
							goto correct;
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev3f(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev3i(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev3d(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex3d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								delete _v;
								goto correct;
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev4f(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4f") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								*_s >> *_v;
								if (!_v->empty()) {
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev4i(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4i") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								*_s >> *_v;
								if (!_v->empty()) {
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
	bool isTherev4d(const char* key) {
		_file.open(_fname, std::fstream::in);
		std::string* _l = new std::string(""), * _i = new std::string(""), * _k = new std::string("");
		std::stringstream* _s = new std::stringstream();
		while (std::getline(_file, *_l)) {
			_s = new std::stringstream();
			*_s << *_l;
			*_s >> *_i;
			if (*_i == "vex4d") {
				*_s >> *_k;
				if (*_k == key) {
					std::string* _v = new std::string("");
					*_s >> *_v;
					if (!_v->empty()) {
						*_s >> *_v;
						if (!_v->empty()) {
							*_s >> *_v;
							if (!_v->empty()) {
								*_s >> *_v;
								if (!_v->empty()) {
									delete _v;
									goto correct;
								}
								else {
									XsLogError(XsLogWhite, XsLogRed, "value w empty...\n");
									delete _v;
									goto correct;
								};
							}
							else {
								XsLogError(XsLogWhite, XsLogRed, "value z empty...\n");
								delete _v;
								goto correct;
							};
						}
						else {
							XsLogError(XsLogWhite, XsLogRed, "value y empty...\n");
							delete _v;
							goto correct;
						};
					}
					else
						XsLogError(XsLogWhite, XsLogRed, "value is empty...\n");
					delete _v;
					_file.close();
					return false;
				};
			};
		};
		XsLogError(XsLogWhite, XsLogRed, "cant find type - key match...\n");
		_file.close();
		return false;
	correct:;
		delete _l, _i, _s, _k;
		_file.close();
		return true;
	};
};