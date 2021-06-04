class XsAnim {
private:
	GLenum __mode = 0;
	unsigned int __Xmode = 0;
	std::vector<int> __size;
	int _frameCount = 0;
	float _deltaTime;
	XsChrono __clk;
	int current_step = 0;
public:
	bool loadFromFile(const char* _filename);
	std::vector<XsVertices> vertices;
	void print();
	const int currentStep() { return current_step; };
	const int frameCount() { return _frameCount; };
	const float deltaTime() { return _deltaTime; };
	const GLenum GLmode() { return __mode; };
	const XsEnum mode() { return XsEnum(__Xmode); };
};

void XsAnim::print() {
	if (__clk.getMilliSeconds() > _deltaTime) {
		current_step++;
		if (current_step >= _frameCount) {
			current_step = 0;
		}
		__clk.start();
	}
	XsPrintVertices(vertices[current_step], XsEnum(__Xmode), __mode);
};

bool XsAnim::loadFromFile(const char* _filename) {
	std::stringstream ss;
	std::ifstream in_file(_filename);
	std::string _get = "";
	std::string trash = "";
	std::string _a = "";

	if (!in_file.is_open()) {
		XsLogError(XS_LOG_RED, XS_LOG_WHITE, std::string("file cannot open :/ -- " + std::string(_filename) + " ").c_str());
		XsLogDate(XS_LOG_RED, XS_LOG_WHITE, 0);
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
				_frameCount = atoi(_get.c_str());
				for (int __p = 0; __p < _frameCount; __p++) {
					ss >> _get;
					__size.push_back(std::atoi(_get.c_str()));
				};
				vertices.resize(_frameCount);
				ss >> _get;
				_deltaTime = atof(_get.c_str());
				for (int __y = 0; __y < _frameCount; __y++) {
					while (_get != "f") { in_file >> _get; };
					switch (__Xmode) {
					case XS_ALL:
						vertices[__y].resize(__size[__y] * 8);
						for (size_t _j = 0; _j < __size[__y]; _j++) {
							in_file >> _get;
							vertices[__y][_j * 8] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 1] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 2] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 3] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 4] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 5] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 6] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 8 + 7] = atof(_get.c_str());
						};
						break;
					case XS_VERTEX:
						vertices[__y].resize(__size[__y] * 3);
						for (size_t _j = 0; _j < __size[__y]; _j++) {
							in_file >> _get;
							vertices[__y][_j * 3] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 3 + 1] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 3 + 2] = atof(_get.c_str());
						};
						break;
					case XS_VERTEX_AND_TEXTURE:
						vertices[__y].resize(__size[__y] * 5);
						for (size_t _j = 0; _j < __size[__y]; _j++) {
							in_file >> _get;
							vertices[__y][_j * 5] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 5 + 1] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 5 + 2] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 5 + 3] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 5 + 4] = atof(_get.c_str());
						};
						break;
					case XS_VERTEX_AND_NORMAL:
						vertices[__y].resize(__size[__y] * 6);
						for (size_t _j = 0; _j < __size[__y]; _j++) {
							in_file >> _get;
							vertices[__y][_j * 6] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 6 + 1] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 6 + 2] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 6 + 3] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 6 + 4] = atof(_get.c_str());
							in_file >> _get;
							vertices[__y][_j * 6 + 5] = atof(_get.c_str());
						};
						break;
					};
				};
			}
		}
	}
	return true;
}

class XsAnimInfo {
public:
	XsChrono clock;
	size_t currentStep = 0;
	GLenum glmode;
	XsEnum mode;
	std::vector<XsVertices> vertices;
	float deltaTime;
};

void XsPrintAnim(XsAnimInfo _a) {
	if (_a.clock.getMilliSeconds() > _a.deltaTime) {
		_a.currentStep++;
		if (_a.currentStep >= _a.vertices.size()) {
			_a.currentStep = 0;
		}
		_a.clock.start();
	}
	XsPrintVertices(_a.vertices[_a.currentStep], XsEnum(_a.mode), _a.mode);
};

void XsWriteXsAnim(const char* _filename, GLenum _glmode, XsEnum mode, std::vector<XsVertices> _v, float _dtime) {
	int __kose = 0;
	switch (mode) {
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
	std::ofstream dosyay(_filename);
	dosyay << "i " << _glmode << " " << mode << " " << _v.size() << " ";
	for (int i = 0; i < _v.size(); i++)
		dosyay << _v[i].size() / __kose << " ";
	dosyay << _dtime << "\n";
	for (int i = 0; i < _v.size(); i++) {
		dosyay << "f ";
		for (auto __a : _v[i]) {
			dosyay << __a << " ";
		};
		dosyay << "\n";
	};
	dosyay.close();
};

void XsWriteXsAnim(const char* _filename, XsAnimInfo _aaa) {
	int __kose = 0;
	switch (_aaa.mode) {
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
	std::ofstream dosyay(_filename);
	dosyay << "i " << _aaa.glmode << " " << _aaa.mode << " " << _aaa.vertices.size() << " ";
	for (int i = 0; i < _aaa.vertices.size(); i++)
		dosyay << _aaa.vertices[i].size() / __kose << " ";
	dosyay << _aaa.deltaTime << "\n";
	for (int i = 0; i < _aaa.vertices.size(); i++) {
		dosyay << "f ";
		for (auto __a : _aaa.vertices[i]) {
			dosyay << __a << " ";
		};
		dosyay << "\n";
	};
	dosyay.close();
};