struct XsVertex {
	vex3f position;
	vex2f texcoord;
	vex3f normal;
	XsVertex() { position = 0; texcoord = 0; normal = 0; };
	XsVertex(vex3f _a, vex2f _b, vex3f _c) { position = _a; texcoord = _b; normal = _c; };
	XsVertex(vex3f _a) { position = _a; };
	XsVertex(float _v1, float _v2, float _v3) { position = vex3f(_v1, _v2, _v3); };
};
struct XsVertex2d {
	vex2f position = 0;
	vex2f texcoord = 0;
	XsVertex2d() { position = 0; texcoord = 0; };
	XsVertex2d(vex2f _a, vex2f _b) { position = _a; texcoord = _b; };
};
struct XsVertexi {
	vex3i position = 0;
	vex2i texcoord = 0;
	vex3i normal = 0;
	XsVertexi() { position = 0; texcoord = 0; normal = 0; };
	XsVertexi(vex3i _a, vex2i _b, vex3i _c) { position = _a; texcoord = _b; normal = _c; };
};
struct XsVertexi2d {
	vex2i position = 0;
	vex2i texcoord = 0;
	XsVertexi2d() { position = 0; texcoord = 0; };
	XsVertexi2d(vex2i _a, vex2i _b) { position = _a; texcoord = _b; };
};
typedef std::vector<GLfloat> XsVertices;
typedef std::vector<XsVertex> XsVertexDepo;
typedef std::vector<XsVertex2d> XsVertex2dDepo;
class XsVertexStream {
private:
	XsVertexDepo _r;
	XsVertex _max_x, _max_y, _max_z;
	XsVertex _min_x, _min_y, _min_z;
	float _c_area;
	float _s_area_xy;
	float _s_area_xz;
	float _s_area_yz;
	float _dis_x;
	float _dis_y;
	float _dis_z;
public:
	void refresh() {
		float t_nx = 0, t_ny = 0, t_nz = 0, t_xx = 0, t_xy = 0, t_xz = 0;
		for (auto _q : _r) {
			if (_q.position.x < t_nx) {
				t_nx = _q.position.x;
				_min_x = _q;
			}
			else if (_q.position.x > t_xx) {
				t_xx = _q.position.x;
				_max_x = _q;
			};
			if (_q.position.y < t_ny) {
				t_ny = _q.position.y;
				_min_y = _q;
			}
			else if (_q.position.y > t_xy) {
				t_xy = _q.position.y;
				_max_y = _q;
			};
			if (_q.position.z < t_nz) {
				t_nz = _q.position.z;
				_min_z = _q;
			}
			else if (_q.position.z > t_xz) {
				t_xz = _q.position.z;
				_max_z = _q;
			};
		};
		_dis_x = sqrt(_max_x.position.x * _max_x.position.x + _min_x.position.x * _min_x.position.x);
		_dis_y = sqrt(_max_y.position.y * _max_y.position.y + _min_y.position.y * _min_y.position.y);
		_dis_z = sqrt(_max_z.position.z * _max_z.position.z + _min_z.position.z * _min_z.position.z);
		_s_area_xy = _dis_x * _dis_y;
		_s_area_xz = _dis_x * _dis_z;
		_s_area_yz = _dis_z * _dis_y;
		_c_area = _dis_x * _dis_z * _dis_y;
	};
	XsVertex maxX() { return _max_x; };
	XsVertex maxY() { return _max_y; };
	XsVertex maxZ() { return _max_z; };
	XsVertex minX() { return _min_x; };
	XsVertex minY() { return _min_y; };
	XsVertex minZ() { return _min_z; };
	float cubicArea() { return _c_area; };
	float qudricAreaXY() { return _s_area_xy; };
	float qudricAreaZX() { return _s_area_xz; };
	float qudricAreaYZ() { return _s_area_yz; };
	float distanceX() { return _dis_x; };
	float distanceY() { return _dis_y; };
	float distanceZ() { return _dis_y; };
	XsVertexDepo getVertexData() { return _r; };
	GLenum glMode;
	XsEnum xsMode;
	void setVertex(size_t _p, vex3f _v)			{ _r[_p] = XsVertex(_v, vex2f(0), vex3f(0)); };
	void setTexCoord(size_t _p, vex2f _v)		{ _r[_p] = XsVertex(vex3f(0), _v, vex3f(0)); };
	void setNormal(size_t _p, vex3f _v)			{ _r[_p] = XsVertex(vex3f(0), vex2f(0), _v); };
	void setVertex(size_t _p, XsVertex _v)		{ _r[_p] = XsVertex(_v.position, vex2f(0), vex3f(0)); };
	void setTexCoord(size_t _p, XsVertex _v)	{ _r[_p] = XsVertex(vex3f(0), _v.texcoord, vex3f(0)); };
	void setNormal(size_t _p, XsVertex _v)		{ _r[_p] = XsVertex(vex3f(0), vex2f(0), _v.normal); };

	void insVertex(size_t _p, vex3f _v)			{ _r.insert(_r.begin() + _p, XsVertex(_v, vex2f(0), vex3f(0))); };
	void insTexCoord(size_t _p, vex2f _v)		{ _r.insert(_r.begin() + _p, XsVertex(vex3f(0), _v, vex3f(0))); };
	void insNormal(size_t _p, vex3f _v)			{ _r.insert(_r.begin() + _p, XsVertex(vex3f(0), vex2f(0), _v)); };
	void insVertex(size_t _p, XsVertex _v)		{ _r.insert(_r.begin() + _p, XsVertex(_v.position, vex2f(0), vex3f(0))); };
	void insTexCoord(size_t _p, XsVertex _v)	{ _r.insert(_r.begin() + _p, XsVertex(vex3f(0), _v.texcoord, vex3f(0))); };
	void insNormal(size_t _p, XsVertex _v)		{ _r.insert(_r.begin() + _p, XsVertex(vex3f(0), vex2f(0), _v.normal)); };

	void addVertex(vex3f _v)	 { _r.push_back(XsVertex(_v, vex2f(0), vex3f(0))); };
	void addTexCoord(vex2f _v)	 { _r.push_back(XsVertex(vex3f(0), _v, vex3f(0))); };
	void addNormal(vex3f _v)	 { _r.push_back(XsVertex(vex3f(0), vex2f(0), _v)); };
	void addVertex(XsVertex _v)  { _r.push_back(XsVertex(_v.position, vex2f(0), vex3f(0))); };
	void addTexCoord(XsVertex _v){ _r.push_back(XsVertex(vex3f(0), _v.texcoord, vex3f(0))); };
	void addNormal(XsVertex _v)	 { _r.push_back(XsVertex(vex3f(0), vex2f(0), _v.normal)); };

	void add() { _r.push_back(XsVertex()); };
	void add(vex3f _v, vex2f _c, vex3f _n) { _r.push_back(XsVertex(_v, _c, _n)); };
	void add(vex3f _v, vex2f _c) { _r.push_back(XsVertex(_v, _c, vex3f(0))); };
	void add(vex3f _v) { _r.push_back(XsVertex(_v, vex2f(0), vex3f(0))); };
	void add(vex3f _v, vex3f _n) { _r.push_back(XsVertex(_v, vex2f(0), _n)); };
	void add(vex2f _c, vex3f _n) { _r.push_back(XsVertex(vex3f(0), _c, _n)); };
	void add(XsVertex _v) { _r.push_back(_v); };
	void add(XsVertex _v, XsEnum mode) {
		switch (mode) {
		case XS_VERTEX: _r.push_back(XsVertex(_v.position, vex2f(0), vex3f(0)));
			break;
		case XS_VERTEX_AND_NORMAL: _r.push_back(XsVertex(_v.position, vex2f(0), _v.normal));
			break;
		case XS_VERTEX_AND_TEXTURE: _r.push_back(XsVertex(_v.position, _v.texcoord, vex3f(0)));
			break;
		case XS_ALL: _r.push_back(_v);
			break;
		};
	};

	void insert(size_t _p) { _r.insert(_r.begin() + _p, XsVertex()); };
	void insert(size_t _p, vex3f _v, vex2f _c, vex3f _n) { _r.insert(_r.begin() + _p, XsVertex(_v, _c, _n)); };
	void insert(size_t _p, vex3f _v, vex2f _c) { _r.insert(_r.begin() + _p, XsVertex(_v, _c, vex3f(0))); };
	void insert(size_t _p, vex3f _v) { _r.insert(_r.begin() + _p, XsVertex(_v, vex2f(), vex3f())); };
	void insert(size_t _p, vex3f _v, vex3f _n) { _r.insert(_r.begin() + _p, XsVertex(_v, vex2f(), _n)); };
	void insert(size_t _p, vex2f _c, vex3f _n) { _r.insert(_r.begin() + _p, XsVertex(vex3f(), _c, _n)); };
	void insert(size_t _p, XsVertex _v) { _r.insert(_r.begin() + _p, _v); };
	void insert(size_t _p, XsVertex _v, XsEnum mode) {
		switch (mode) {
		case XS_VERTEX: _r.insert(_r.begin() + _p, XsVertex(_v.position, vex2f(0), vex3f(0)));
			break;
		case XS_VERTEX_AND_NORMAL: _r.insert(_r.begin() + _p, XsVertex(_v.position, vex2f(0), _v.normal));
			break;
		case XS_VERTEX_AND_TEXTURE: _r.insert(_r.begin() + _p, XsVertex(_v.position, _v.texcoord, vex3f(0)));
			break;
		case XS_ALL: _r.insert(_r.begin() + _p, _v);
			break;
		};
	};
	void insert() { _r.insert(_r.begin() + 0, XsVertex()); };
	void insert(vex3f _v, vex2f _c, vex3f _n) { _r.insert(_r.begin(), XsVertex(_v, _c, _n)); };
	void insert(vex3f _v, vex2f _c) { _r.insert(_r.begin(), XsVertex(_v, _c, vex3f(0))); };
	void insert(vex3f _v) { _r.insert(_r.begin(), XsVertex(_v, vex2f(), vex3f())); };
	void insert(vex3f _v, vex3f _n) { _r.insert(_r.begin(), XsVertex(_v, vex2f(), _n)); };
	void insert(vex2f _c, vex3f _n) { _r.insert(_r.begin(), XsVertex(vex3f(), _c, _n)); };
	void insert(XsVertex _v) { _r.insert(_r.begin(), _v); };
	void insert(XsVertex _v, XsEnum mode) {
		switch (mode) {
		case XS_VERTEX: _r.insert(_r.begin(), XsVertex(_v.position, vex2f(0), vex3f(0)));
			break;
		case XS_VERTEX_AND_NORMAL: _r.insert(_r.begin(), XsVertex(_v.position, vex2f(0), _v.normal));
			break;
		case XS_VERTEX_AND_TEXTURE: _r.insert(_r.begin(), XsVertex(_v.position, _v.texcoord, vex3f(0)));
			break;
		case XS_ALL: _r.insert(_r.begin(), _v);
			break;
		};
	};

	void set(size_t _p) { _r[_p] = XsVertex(); };
	void set(size_t _p, vex3f _v, vex2f _c, vex3f _n) { _r[_p] = XsVertex(_v, _v, _n); };
	void set(size_t _p, vex3f _v, vex2f _c) { _r[_p] = XsVertex(_v, _c, vex3f()); };
	void set(size_t _p, vex3f _v) { _r[_p] = XsVertex(_v, vex2f(), vex3f()); };
	void set(size_t _p, vex3f _v, vex3f _n) { _r[_p] = XsVertex(_v, vex2f(), _n); };
	void set(size_t _p, vex2f _c, vex3f _n) { _r[_p] = XsVertex(vex3f(), _c, _n); };
	void set(size_t _p, XsVertex _v) { _r[_p] = _v; };
	void set(size_t _p, XsVertex _v, XsEnum mode) {
		switch (mode) {
		case XS_VERTEX: _r[_p] = XsVertex(_v.position, vex2f(), vex3f());
			break;
		case XS_VERTEX_AND_NORMAL: _r[_p] = XsVertex(_v.position, vex2f(), _v.normal);
			break;
		case XS_VERTEX_AND_TEXTURE: _r[_p] = XsVertex(_v.position, _v.texcoord, vex3f());
			break;
		case XS_ALL: _r[_p] = _v;
			break;
		};
	};

	void set() { _r[0] = XsVertex(); };
	void set(vex3f _v, vex2f _c, vex3f _n) { _r[0] = XsVertex(_v, _v, _n); };
	void set(vex3f _v, vex2f _c) { _r[0] = XsVertex(_v, _c, vex3f()); };
	void set(vex3f _v) { _r[0] = XsVertex(_v, vex2f(), vex3f()); };
	void set(vex3f _v, vex3f _n) { _r[0] = XsVertex(_v, vex2f(), _n); };
	void set(vex2f _c, vex3f _n) { _r[0] = XsVertex(vex3f(), _c, _n); };
	void set(XsVertex _v) { _r[0] = _v; };
	void set(XsVertex _v, XsEnum mode) {
		switch (mode) {
		case XS_VERTEX: _r[0] = XsVertex(_v.position, vex2f(), vex3f());
			break;
		case XS_VERTEX_AND_NORMAL: _r[0] = XsVertex(_v.position, vex2f(), _v.normal);
			break;
		case XS_VERTEX_AND_TEXTURE: _r[0] = XsVertex(_v.position, _v.texcoord, vex3f());
			break;
		case XS_ALL: _r[0] = _v;
			break;
		};
	};

	void resize(size_t _p) { _r.resize(_p); };
	void resize(size_t _p, XsVertex _v) { _r.resize(_p, _v); };

	void fill() { std::fill(_r.begin(), _r.end(), XsVertex()); };
	void fill(XsVertex _v) { std::fill(_r.begin(), _r.end(), _v); };
	void fill(vex3f _v, vex2f _c, vex3f _n) { std::fill(_r.begin(), _r.end(), XsVertex(_v, _c, _n)); };
	void fill(vex3f _v, vex2f _c) { std::fill(_r.begin(), _r.end(), XsVertex(_v, _c, vex3f())); };
	void fill(vex3f _v) { std::fill(_r.begin(), _r.end(), XsVertex(_v, vex2f(), vex3f())); };
	void fill(vex3f _v, vex3f _n) { std::fill(_r.begin(), _r.end(), XsVertex(_v, vex2f(), _n)); };
	void fill(vex2f _c, vex3f _n) { std::fill(_r.begin(), _r.end(), XsVertex(vex3f(), _c, _n)); };

	void clear() { _r.clear(); };
};
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertex2dDepo __myVert, XsEnum _mode) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex2f(_____yey.position.x, _____yey.position.y);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex2f(_____yey.position.x, _____yey.position.y);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex2f(_____yey.position.x, _____yey.position.y);
		};
		break;
	};
};
void XsPrintVertex(XsVertex2dDepo __myVert) {
	for (auto _____yey : __myVert) {
		glVertex2f(_____yey.position.x, _____yey.position.y);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f _scale) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f(_____yey.position.x * _scale.x, _____yey.position.y * _scale.y, _____yey.position.z * _scale.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig) {
	for (auto _____yey : __myVert) {
		glVertex3f(_____yey.position.x * __orig.x, _____yey.position.y * __orig.y, _____yey.position.z * __orig.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert) {
	for (auto _____yey : __myVert) {
		glVertex3f(_____yey.position.x, _____yey.position.y, _____yey.position.z);
	};
};
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f __orig, vex3f __g) {
	switch (_mode) {
	case XS_ALL:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX:
		for (auto _____yey : __myVert) {
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (auto _____yey : __myVert) {
			glTexCoord2f(_____yey.texcoord.x, _____yey.texcoord.y);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (auto _____yey : __myVert) {
			glNormal3f(_____yey.normal.x, _____yey.normal.y, _____yey.normal.z);
			glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
		};
		break;
	};
};
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig, vex3f __g) {
	for (auto _____yey : __myVert)
		glVertex3f((_____yey.position.x + __g.x) * __orig.x, (_____yey.position.y + __g.y) * __orig.y, (_____yey.position.z + __g.z) * __orig.z);
};

void XsVerticesLoad(XsVertices& _a, XsVertexDepo _v, XsEnum _mode) {
	switch (_mode) {
	case XS_VERTEX:
		_a.resize(_v.size() * 3);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 3] = _v[_i].position.x;
			_a[_i * 3 + 1] = _v[_i].position.y;
			_a[_i * 3 + 2] = _v[_i].position.z;
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		_a.resize(_v.size() * 5);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 5] = _v[_i].position.x;
			_a[_i * 5 + 1] = _v[_i].position.y;
			_a[_i * 5 + 2] = _v[_i].position.z;
			_a[_i * 5 + 3] = _v[_i].texcoord.x;
			_a[_i * 5 + 4] = _v[_i].texcoord.y;
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		_a.resize(_v.size() * 6);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 6] = _v[_i].position.x;
			_a[_i * 6 + 1] = _v[_i].position.y;
			_a[_i * 6 + 2] = _v[_i].position.z;
			_a[_i * 6 + 3] = _v[_i].normal.x;
			_a[_i * 6 + 4] = _v[_i].normal.y;
			_a[_i * 6 + 5] = _v[_i].normal.z;
		};
		break;
	case XS_ALL:
		_a.resize(_v.size() * 8);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 8] = _v[_i].position.x;
			_a[_i * 8 + 1] = _v[_i].position.y;
			_a[_i * 8 + 2] = _v[_i].position.z;
			_a[_i * 8 + 3] = _v[_i].texcoord.x;
			_a[_i * 8 + 4] = _v[_i].texcoord.y;
			_a[_i * 8 + 5] = _v[_i].normal.x;
			_a[_i * 8 + 6] = _v[_i].normal.y;
			_a[_i * 8 + 7] = _v[_i].normal.z;
		};
		break;
	}
};

XsVertices XsVerticesLoad(XsVertexDepo _v, XsEnum _mode) {
	XsVertices _a;
	switch (_mode) {
	case XS_VERTEX:
		_a.resize(_v.size() * 3);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 3] = _v[_i].position.x;
			_a[_i * 3 + 1] = _v[_i].position.y;
			_a[_i * 3 + 2] = _v[_i].position.z;
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		_a.resize(_v.size() * 5);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 5] = _v[_i].position.x;
			_a[_i * 5 + 1] = _v[_i].position.y;
			_a[_i * 5 + 2] = _v[_i].position.z;
			_a[_i * 5 + 3] = _v[_i].texcoord.x;
			_a[_i * 5 + 4] = _v[_i].texcoord.y;
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		_a.resize(_v.size() * 6);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 6] = _v[_i].position.x;
			_a[_i * 6 + 1] = _v[_i].position.y;
			_a[_i * 6 + 2] = _v[_i].position.z;
			_a[_i * 6 + 3] = _v[_i].normal.x;
			_a[_i * 6 + 4] = _v[_i].normal.y;
			_a[_i * 6 + 5] = _v[_i].normal.z;
		};
		break;
	case XS_ALL:
		_a.resize(_v.size() * 8);
		for (int _i = 0; _i < _v.size(); _i++) {
			_a[_i * 8] = _v[_i].position.x;
			_a[_i * 8 + 1] = _v[_i].position.y;
			_a[_i * 8 + 2] = _v[_i].position.z;
			_a[_i * 8 + 3] = _v[_i].texcoord.x;
			_a[_i * 8 + 4] = _v[_i].texcoord.y;
			_a[_i * 8 + 5] = _v[_i].normal.x;
			_a[_i * 8 + 6] = _v[_i].normal.y;
			_a[_i * 8 + 7] = _v[_i].normal.z;
		};
		break;
	}
	return _a;
};

void XsVertexLoad(XsVertexDepo& _v, XsVertices _q, XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		for (int i = 0; i < _q.size() / 3; i++) {
			_v[i].position.x = _q[i * 3];
			_v[i].position.y = _q[i * 3 + 1];
			_v[i].position.z = _q[i * 3 + 2];
		};
		break;
	case XS_ALL:
		for (int i = 0; i < _q.size() / 8; i++) {
			_v[i].position.x = _q[i * 8];
			_v[i].position.y = _q[i * 8 + 1];
			_v[i].position.z = _q[i * 8 + 2];
			_v[i].texcoord.x = _q[i * 8 + 3];
			_v[i].texcoord.y = _q[i * 8 + 4];
			_v[i].normal.x = _q[i * 8 + 5];
			_v[i].normal.y = _q[i * 8 + 6];
			_v[i].normal.z = _q[i * 8 + 7];
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int i = 0; i < _q.size() / 5; i++) {
			_v[i].position.x = _q[i * 5];
			_v[i].position.y = _q[i * 5 + 1];
			_v[i].position.z = _q[i * 5 + 2];
			_v[i].texcoord.x = _q[i * 5 + 3];
			_v[i].texcoord.y = _q[i * 5 + 4];
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int i = 0; i < _q.size() / 6; i++) {
			_v[i].position.x = _q[i * 6];
			_v[i].position.y = _q[i * 6 + 1];
			_v[i].position.z = _q[i * 6 + 2];
			_v[i].normal.x = _q[i * 6 + 3];
			_v[i].normal.y = _q[i * 6 + 4];
			_v[i].normal.z = _q[i * 6 + 5];
		};
		break;
	};
}

XsVertexDepo XsVertexLoad(XsVertices _q, XsEnum mode) {
	XsVertexDepo _v;
	switch (mode) {
	case XS_VERTEX:
		for (int i = 0; i < _q.size() / 3; i++) {
			_v[i].position.x = _q[i * 3];
			_v[i].position.y = _q[i * 3 + 1];
			_v[i].position.z = _q[i * 3 + 2];
		};
		break;
	case XS_ALL:
		for (int i = 0; i < _q.size() / 8; i++) {
			_v[i].position.x = _q[i * 8];
			_v[i].position.y = _q[i * 8 + 1];
			_v[i].position.z = _q[i * 8 + 2];
			_v[i].texcoord.x = _q[i * 8 + 3];
			_v[i].texcoord.y = _q[i * 8 + 4];
			_v[i].normal.x = _q[i * 8 + 5];
			_v[i].normal.y = _q[i * 8 + 6];
			_v[i].normal.z = _q[i * 8 + 7];
		};
		break;
	case XS_VERTEX_AND_TEXTURE:
		for (int i = 0; i < _q.size() / 5; i++) {
			_v[i].position.x = _q[i * 5];
			_v[i].position.y = _q[i * 5 + 1];
			_v[i].position.z = _q[i * 5 + 2];
			_v[i].texcoord.x = _q[i * 5 + 3];
			_v[i].texcoord.y = _q[i * 5 + 4];
		};
		break;
	case XS_VERTEX_AND_NORMAL:
		for (int i = 0; i < _q.size() / 6; i++) {
			_v[i].position.x = _q[i * 6];
			_v[i].position.y = _q[i * 6 + 1];
			_v[i].position.z = _q[i * 6 + 2];
			_v[i].normal.x = _q[i * 6 + 3];
			_v[i].normal.y = _q[i * 6 + 4];
			_v[i].normal.z = _q[i * 6 + 5];
		};
		break;
	};
	return _v;
}

void XsPrintVertices(XsVertices _a, XsEnum mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &_a[0]);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 3);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 5);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), &_a[0]);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 5);
		glDrawArrays(GL_TRIANGLES, 0, _a.size() / 8);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};
void XsPrintVertices(XsVertices _a, XsEnum mode, GLenum __mode) {
	switch (mode) {
	case XS_VERTEX:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &_a[0]);
		glDrawArrays(__mode, 0, _a.size() / 3);
		glDisableClientState(GL_VERTEX_ARRAY);
		break;
	case XS_VERTEX_AND_TEXTURE:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 5 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(__mode, 0, _a.size() / 5);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	case XS_VERTEX_AND_NORMAL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 6 * sizeof(GLfloat), &_a[0]);
		glNormalPointer(GL_FLOAT, 6 * sizeof(GLfloat), &_a[0] + 3);
		glDrawArrays(__mode, 0, _a.size() / 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		break;
	case XS_ALL:
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnableClientState(GL_NORMAL_ARRAY);
		glVertexPointer(3, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0]);
		glTexCoordPointer(2, GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 3);
		glNormalPointer(GL_FLOAT, 8 * sizeof(GLfloat), &_a[0] + 5);
		glDrawArrays(__mode, 0, _a.size() / 8);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_NORMAL_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		break;
	};
};

class XsShape {
public:
	XsShape() {};
	XsShape(vex3f _v) { pos = _v; };
	XsShape(vex3f _v, vex3f _r) { pos = _v; rot = _r; };
	XsShape(vex3f _v, vex3f _r, vex4f _c) { pos = _v; rot = _r; color = _c; };
	XsShape(vex3f _v, vex3f _r, vex4f _c, vex3f _s) { pos = _v; rot = _r; color = _c; scale = _s; };
	vex3f rot = 0;
	vex3f pos = 0;
	vex4f color = 0;
	vex3f scale = 1;
	void draw(XsVertexDepo vertices, GLenum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(mode);
		for (auto __a : vertices) {
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);
		};
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsTexture& texture, GLenum mode) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(mode);
		for (auto __a : vertices) {
			glTexCoord2f(__a.texcoord.x, __a.texcoord.y);
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);

		};
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsEnum mode, GLenum glmode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(glmode);
		XsPrintVertex(vertices, mode);
		glEnd();
	}
	void draw(XsVertexDepo vertices, XsTexture& texture, XsEnum mode, GLenum glmode) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		glBegin(glmode);
		XsPrintVertex(vertices, mode);
		glEnd();
	}
	void draw(XsSolidType __solid, XsEnum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsSolid(__solid, mode);
	}
	void draw(XsTexture texture, XsSolidType __solid, XsEnum mode) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsSolid(__solid, mode);
	}
	void draw(XsTextureSTB texture, XsSolidType __solid, XsEnum mode) {
		glEnable(GL_TEXTURE_2D);
		texture.bind();
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsSolid(__solid, mode);
	}
	void draw(XsVertices vertices, XsEnum mode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode);
	}
	void draw(XsVertices vertices, XsTexture& texture, XsEnum mode) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode);
	}
	void draw(XsVertices vertices, XsTextureSTB& texture, XsEnum mode) {
		glEnable(GL_TEXTURE_2D);
		texture.bind();
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode);
	}
	void draw(XsVertices vertices, XsEnum mode, GLenum glmode) {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode, glmode);
	}
	void draw(XsVertices vertices, XsTexture& texture, XsEnum mode, GLenum glmode) {
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode, glmode);
	}
	void draw(XsVertices vertices, XsTextureSTB& texture, XsEnum mode, GLenum glmode) {
		glEnable(GL_TEXTURE_2D);
		texture.bind();
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
		XsPrintVertices(vertices, mode, glmode);
	}
	void draw() {
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
	}
	void draw(XsTextureSTB& texture) {
		glEnable(GL_TEXTURE_2D);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
	}
	void draw(XsTexture& texture) {
		glEnable(GL_TEXTURE_2D);
		glTranslatef(pos.x, pos.y, pos.z);
		glRotatef(rot.x, 1, 0, 0);
		glRotatef(rot.y, 0, 1, 0);
		glRotatef(rot.z, 0, 0, 1);
		glScalef(scale.x, scale.y, scale.z);
		glColor4f(color.x, color.y, color.z, color.w);
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
		for (auto __a : vertices) {
			glTexCoord2f(__a.texcoord.x, __a.texcoord.y);
			glNormal3f(__a.normal.x, __a.normal.y, __a.normal.z);
			glVertex3f(__a.position.x, __a.position.y, __a.position.z);

		};
		glEnd();
	}
};
class XsOBJShape {
	std::string info;
	XsVertexDepo _verts;
public:
	std::string Info() { return info; };
	XsVertexDepo vertices() { return _verts; };
	bool loadFromFile(const char* __file_name);
	void draw() {
		for (int __i = 0; __i < _verts.size(); __i++) {
			if (_verts[__i].texcoord.x != NULL)
				glTexCoord2f(_verts[__i].texcoord.x, _verts[__i].texcoord.y);
			if (_verts[__i].position.x != NULL)
				glVertex3f(_verts[__i].position.x, _verts[__i].position.y, _verts[__i].position.z);
			if (_verts[__i].normal.x != NULL)
				glNormal3f(_verts[__i].normal.x, _verts[__i].normal.y, _verts[__i].normal.z);
		}
	};
};
class XsNumber {
private:
	int _dig;
public:
	vex2f scale;
	vex4f color;
	vex2f pos;
	vex2f re_pos;
	float rot;
	int number = 0;
	int digits() { return _dig; };
	void draw(XsTextureSTB textures[]) {
		_dig = str(number).size();
		for (int i = 0; i < str(number).size(); i++) {
			glLoadIdentity();
			textures[atoi(str(char(str(number)[i])).c_str())].bind();
			glTranslatef(pos + re_pos * vex2f(i), 0);
			glScalef(scale);
			glRotatef(rot, 0, 0, 1);
			glColor4f(color);
			XsPrintVertices(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS);
		};
	};
};
class XsNumberf {
private:
	int _after_point = 0;
	int _before_point = 0;
	std::string _qwe;
public:
	vex2f scale;
	vex4f color;
	vex2f pos;
	vex2f re_pos;
	float rot;
	float number = 0;
	void draw(XsTextureSTB textures[], int _pre) {
		_qwe = str(number, _pre);
		_before_point = 0;
		_after_point = 0;
		bool _ip = false;
		for (size_t i = 0; i < _qwe.size(); i++) {
			if (!_ip) {
				if (_qwe[i] == '.')
					_ip = true;
				else
					_before_point += atoi(str(_qwe[i]).c_str()) * (pow(10, i));
			}
			else {
				_after_point += atoi(str(_qwe[i]).c_str()) * (pow(10, _qwe.size() - i - 1));
			}
		}
		for (int i = 0; i < digit(_before_point); i++) {
			glLoadIdentity();
			textures[atoi(str(char(str(_before_point)[digit(_before_point) - i - 1])).c_str())].bind();
			glTranslatef(pos + re_pos * vex2f(i), 0);
			glScalef(scale);
			glRotatef(rot, 0, 0, 1);
			glColor4f(color);
			XsPrintVertices(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS);
		};
		glLoadIdentity();
		glBindTexture(GL_TEXTURE_2D, 0);
		glTranslatef(pos + re_pos * vex2f(digit(_before_point)), 0);
		glScalef(scale / 10);
		glRotatef(rot, 0, 0, 1);
		glColor4f(color);
		XsPrintVertices(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS);

		for (int i = 0; i < digit(_after_point); i++) {
			glLoadIdentity();
			textures[atoi(str(char(str(_after_point)[i])).c_str())].bind();
			glTranslatef(pos + re_pos * vex2f(digit(_before_point) + i + 1), 0);
			glScalef(scale);
			glRotatef(rot, 0, 0, 1);
			glColor4f(color);
			XsPrintVertices(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS);
		};
	};
};

struct XsText {
	vex2f scale;
	vex4f color;
	vex2f pos;
	vex2f re_pos;
	float rot;
	std::string text;
	int letters() { return text.size(); };
	void draw(XsTextureSTB textures[26]) {
		unsigned short int _j = 0;
		for (char _c : text) {
			glLoadIdentity();
			unsigned short int _i = 0;
			for (auto _ch : alphabet) {
				if (_c == _ch) {
					textures[_i].bind(); 
					goto _cks;
				};
				_i++;
			};
			_i = 0;
			for (auto _ch : ALPHABET) {
				if (_c == _ch) {
					textures[_i].bind();
					goto _cks;
				};
				_i++;
			};
		_cks:;
			glTranslatef(pos + re_pos * vex2f(_j), 0);
			glScalef(scale);
			glRotatef(rot, 0, 0, 1);
			glColor4f(color);
			XsPrintVertices(XsSquareTexVert, XS_VERTEX_AND_TEXTURE, GL_QUADS);
			_j++;
		};
	};
};