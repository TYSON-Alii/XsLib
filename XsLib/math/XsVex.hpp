template <typename _T>
struct vex2 {
	_T x, y;
	vex2<_T>() { this->x = 0; this->y = 0; };
	vex2<_T>(_T v1) { this->x = v1; this->y = v1; };
	vex2<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; };
	vex2<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; };
	vex2<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; };
	vex2<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; };
	vex2<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; };
	vex2<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; };
	const char* type() { return typeid(_T).name(); };
	vex2<_T> operator+ (vex2<_T> __vev) { return vex2<_T>(x + __vev.x, y + __vev.y); };
	vex2<_T> operator- (vex2<_T> __vev) { return vex2<_T>(x - __vev.x, y - __vev.y); };
	vex2<_T> operator* (vex2<_T> __vev) { return vex2<_T>(x * __vev.x, y * __vev.y); };
	vex2<_T> operator/ (vex2<_T> __vev) { return vex2<_T>(x / __vev.x, y / __vev.y); };
	vex2<_T> operator+ (_T __vev) { return vex2<_T>(x + __vev, y + __vev); };
	vex2<_T> operator- (_T __vev) { return vex2<_T>(x - __vev, y - __vev); };
	vex2<_T> operator* (_T __vev) { return vex2<_T>(x * __vev, y * __vev); };
	vex2<_T> operator/ (_T __vev) { return vex2<_T>(x / __vev, y / __vev); };
	vex2<_T> operator<<=(_T item) { return vex2<_T>(x + item, y + item); };
	vex2<_T> operator>>=(_T item) { return vex2<_T>(x - item, y - item); };
	vex2<_T> operator!() { return vex2<_T>(x ? x = false : x = true, y ? y = false : y = true); };
	vex2<_T> operator~() { return vex2<_T>(y, x); };
	vex2<_T> operator%(_T _v) { return vex2<_T>(x / 100 * _v, y / 100 * _v); };
	vex2<_T> operator%(vex2<_T> _v) { return vex2<_T>(x / 100 * _v.x, y / 100 * _v.y); };
	vex2<_T> operator[](int _max) { return vex2<_T>(_T(rand() % _max), _T(rand() % _max)); };
	vex2<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex2<_T>(std::ceil(x), std::ceil(y)); else if (_mode == XS_TRUNC) return vex2<_T>(std::trunc(x), std::trunc(y)); else if (_mode == XS_FLOOR) return vex2<_T>(std::floor(x), std::floor(y)); };
	bool operator==(vex2<_T> _v) { if (x == _v.x && y == _v.y) return true; else return false; };
	bool operator!=(vex2<_T> _v) { if (x != _v.x && y != _v.y) return true; else return false; };
	bool operator|(vex2<_T> _v) { if (x == _v.x || y == _v.y) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; };
	void operator--() { this->x -= 1; this->y -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; };
	void operator+=(vex2<_T> _num) { this->x += _num.x; this->y += _num.y; };
	void operator-=(vex2<_T> _num) { this->x -= _num.x; this->y -= _num.y; };
	void operator*=(vex2<_T> _num) { this->x *= _num.x; this->y *= _num.y; };
	void operator/=(vex2<_T> _num) { this->x /= _num.x; this->y /= _num.y; };
	void operator<<(_T item) { this->x += item; this->y += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; };
	void operator<<(vex2<_T> item) { this->x += item; this->y += item; };
	void operator>>(vex2<_T> item) { this->x -= item; this->y -= item; };
};

template <typename _T>
struct vex3 {
	_T x, y, z;
	vex3<_T>() { this->x = 0; this->y = 0; this->z = 0; };
	vex3<_T>(_T v1) { this->x = v1; this->y = v1; this->z = v1; };
	vex3<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; this->z = 0; };
	vex3<_T>(_T v1, _T v2, _T v3) { this->x = v1; this->y = v2; this->z = v3; };
	vex3<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y;};
	vex3<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y;};
	vex3<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y;};
	vex3<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y;};
	vex3<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y;};
	vex3<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	const char* type() { return typeid(_T).name(); };
	vex3<_T> operator+ (vex3<_T> __vev) { return vex3<_T>(x + __vev.x, y + __vev.y, z + __vev.z); };
	vex3<_T> operator- (vex3<_T> __vev) { return vex3<_T>(x - __vev.x, y - __vev.y, z - __vev.z); };
	vex3<_T> operator* (vex3<_T> __vev) { return vex3<_T>(x * __vev.x, y * __vev.y, z * __vev.z); };
	vex3<_T> operator/ (vex3<_T> __vev) { return vex3<_T>(x / __vev.x, y / __vev.y, z / __vev.z); };
	vex3<_T> operator+ (_T __vev) { return vex3<_T>(x + __vev, y + __vev, z + __vev); };
	vex3<_T> operator- (_T __vev) { return vex3<_T>(x - __vev, y - __vev, z - __vev); };
	vex3<_T> operator* (_T __vev) { return vex3<_T>(x * __vev, y * __vev, z * __vev); };
	vex3<_T> operator/ (_T __vev) { return vex3<_T>(x / __vev, y / __vev, z / __vev); };
	vex3<_T> operator<<=(_T item) { return vex3<_T>(x + item, y + item, z + item); };
	vex3<_T> operator>>=(_T item) { return vex3<_T>(x - item, y - item, z - item); };
	vex3<_T> operator!() { return vex3<_T>(x ? x = false : x = true, y ? y = false : y = true, z ? z = false : z = true); };
	vex3<_T> operator~() { return vex3<_T>(z, y, x); };
	vex3<_T> operator%(_T _v) { return vex3<_T>(x / 100 * _v, y / 100 * _v, z / 100 * _v); };
	vex3<_T> operator%(vex3<_T> _v) { return vex3<_T>(x / 100 * _v.x, y / 100 * _v.y, z / 100 * _v.z); };
	vex3<_T> operator[](int _max) { return vex3<_T>(_T(rand() % _max), _T(rand() % _max), _T(rand() % _max)); };
	vex3<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex3<_T>(std::ceil(x), std::ceil(y), std::ceil(z)); else if (_mode == XS_TRUNC) return vex3<_T>(std::trunc(x), std::trunc(y), std::trunc(z)); else if (_mode == XS_FLOOR) return vex3<_T>(std::floor(x), std::floor(y), std::floor(z)); };
	bool operator==(vex3<_T> _v) { if (x == _v.x && y == _v.y && z == _v.z) return true; else return false; };
	bool operator!=(vex3<_T> _v) { if (x != _v.x && y != _v.y && z != _v.z) return true; else return false; };
	bool operator|(vex3<_T> _v) { if (x == _v.x || y == _v.y || z == _v.z) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v && z == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v && z != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v || z == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; this->z += 1; };
	void operator--() { this->x -= 1; this->y -= 1; this->z -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; this->z += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; this->z -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; this->z *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; this->z /= _num; };
	void operator+=(vex3<_T> _num) { this->x += _num.x; this->y += _num.y; this->z += _num.z; };
	void operator-=(vex3<_T> _num) { this->x -= _num.x; this->y -= _num.y; this->z -= _num.z; };
	void operator*=(vex3<_T> _num) { this->x *= _num.x; this->y *= _num.y; this->z *= _num.z; };
	void operator/=(vex3<_T> _num) { this->x /= _num.x; this->y /= _num.y; this->z /= _num.z; };
	void operator<<(_T item) { this->x += item; this->y += item; this->z += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; this->z -= item; };
	void operator<<(vex3<_T> item) { this->x += item.x; this->y += item.y; this->z += item.z; };
	void operator>>(vex3<_T> item) { this->x -= item.x; this->y -= item.y; this->z -= item.z; };
};

template <typename _T>
struct vex4 {
	_T x, y, z, w;
	vex4<_T>() { this->x = 0; this->y = 0; this->z = 0; this->w = 0;};
	vex4<_T>(_T v1) { this->x = v1; this->y = v1; this->z = v1;  this->z = v1; };
	vex4<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; this->z = 0;  this->z = 0;};
	vex4<_T>(_T v1, _T v2, _T v3) { this->x = v1; this->y = v2; this->z = v3;  this->z = 0; };
	vex4<_T>(_T v1, _T v2, _T v3, _T v4) { this->x = v1; this->y = v2; this->z = v3;  this->z = v4; };
	vex4<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y; };
	vex4<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y; };
	vex4<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y; };
	vex4<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y; };
	vex4<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y; };
	vex4<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	const char* type() { return typeid(_T).name(); };
	vex4<_T> operator+ (vex4<_T> __vev) { return vex4<_T>(x + __vev.x, y + __vev.y, z + __vev.z, w + __vev.w); };
	vex4<_T> operator- (vex4<_T> __vev) { return vex4<_T>(x - __vev.x, y - __vev.y, z - __vev.z, w - __vev.w); };
	vex4<_T> operator* (vex4<_T> __vev) { return vex4<_T>(x * __vev.x, y * __vev.y, z * __vev.z, w * __vev.w); };
	vex4<_T> operator/ (vex4<_T> __vev) { return vex4<_T>(x / __vev.x, y / __vev.y, z / __vev.z, w / __vev.w); };
	vex4<_T> operator+ (_T __vev) { return vex4<_T>(x + __vev, y + __vev, z + __vev, w + __vev); };
	vex4<_T> operator- (_T __vev) { return vex4<_T>(x - __vev, y - __vev, z - __vev, w + __vev); };
	vex4<_T> operator* (_T __vev) { return vex4<_T>(x * __vev, y * __vev, z * __vev, w + __vev); };
	vex4<_T> operator/ (_T __vev) { return vex4<_T>(x / __vev, y / __vev, z / __vev, w + __vev); };
	vex4<_T> operator<<=(_T item) { return vex4<_T>(x + item, y + item, z + item, w + item); };
	vex4<_T> operator>>=(_T item) { return vex4<_T>(x - item, y - item, z - item, w - item); };
	vex4<_T> operator!() { return vex4<_T>(x ? x = false : x = true, y ? y = false : y = true, z ? z = false : z = true, w ? w = false : w = true); };
	vex4<_T> operator~() { return vex4<_T>(w, z, y, x); };
	vex4<_T> operator%(_T _v) { return vex4<_T>(x / 100 * _v, y / 100 * _v, z / 100 * _v, w / 100 * _v); };
	vex4<_T> operator%(vex4<_T> _v) { return vex4<_T>(x / 100 * _v.x, y / 100 * _v.y, z / 100 * _v.z, w / 100 * _v.w); };
	vex4<_T> operator[](int _max) { return vex4<_T>(_T(rand() % _max), _T(rand() % _max), _T(rand() % _max), _T(rand() % _max)); };
	vex4<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex4<_T>(std::ceil(x), std::ceil(y), std::ceil(z), std::ceil(w)); else if (_mode == XS_TRUNC) return vex4<_T>(std::trunc(x), std::trunc(y), std::trunc(z), std::trunc(w)); else if (_mode == XS_FLOOR) return vex4<_T>(std::floor(x), std::floor(y), std::floor(z), std::floor(w)); };
	bool operator==(vex4<_T> _v) { if (x == _v.x && y == _v.y && z == _v.z && w == _v.w) return true; else return false; };
	bool operator!=(vex4<_T> _v) { if (x != _v.x && y != _v.y && z != _v.z && w != _v.w) return true; else return false; };
	bool operator|(vex4<_T> _v) { if (x == _v.x || y == _v.y || z == _v.z || w == _v.w) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v && z == _v && w == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v && z != _v && w != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v || z == _v || w == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; this->z += 1; this->w += 1; };
	void operator--() { this->x -= 1; this->y -= 1; this->z -= 1; this->w -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; this->z += _num; this->w += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; this->z -= _num; this->w -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; this->z *= _num; this->w *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; this->z /= _num; this->w /= _num; };
	void operator+=(vex4<_T> _num) { this->x += _num.x; this->y += _num.y; this->z += _num.z; this->w += _num.w; };
	void operator-=(vex4<_T> _num) { this->x -= _num.x; this->y -= _num.y; this->z -= _num.z; this->w -= _num.w; };
	void operator*=(vex4<_T> _num) { this->x *= _num.x; this->y *= _num.y; this->z *= _num.z; this->w *= _num.w; };
	void operator/=(vex4<_T> _num) { this->x /= _num.x; this->y /= _num.y; this->z /= _num.z; this->w /= _num.w; };
	void operator<<(_T item) { this->x += item; this->y += item; this->z += item; this->w += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; this->z -= item; this->w -= item; };
	void operator<<(vex4<_T> item) { this->x += item.x; this->y += item.y; this->z += item.z; this->w += item.w;};
	void operator>>(vex4<_T> item) { this->x -= item.x; this->y -= item.y; this->z -= item.z; this->w -= item.w;};
};

// ///////////////////////////// //
typedef const vex2i vex2ci;
typedef vex2<unsigned int> vex2ui;
typedef vex2<short int> vex2si;
typedef vex2<unsigned short int> vex2usi;
typedef vex2<long int> vex2li;
typedef vex2<long long int> vex2lli;
typedef vex2<unsigned long int> vex2uli;
typedef vex2<unsigned long long int> vex2ulli;

typedef const vex2<unsigned int> vex2uci;
typedef const vex2<short int> vex2sci;
typedef const vex2<unsigned short int> vex2usci;
typedef const vex2<long int> vex2lci;
typedef const vex2<long long int> vex2llci;
typedef const vex2<unsigned long int> vex2ulci;
typedef const vex2<unsigned long long int> vex2ullci;

typedef const vex2b vex2cb;
typedef vex2<volatile bool> vex2vb;
typedef const vex2<volatile bool> vex2vcb;

typedef vex2<char> vex2h;
typedef vex2<const char*> vex2ch;

typedef const vex2f vex2cf;
typedef vex2<long float> vex2lf;
typedef const vex2<long float> vex2lcf;

typedef const vex2d vex2cd;
typedef vex2<long double> vex2ld;
typedef const vex2<long double> vex2lcd;

typedef const vex2s vex2cs;


typedef vex2i v2i;
typedef const vex2i v2ci;
typedef vex2<unsigned int> v2ui;
typedef vex2<short int> v2si;
typedef vex2<unsigned short int> v2usi;
typedef vex2<long int> v2li;
typedef vex2<long long int> v2lli;
typedef vex2<unsigned long int> v2uli;
typedef vex2<unsigned long long int> v2ulli;

typedef const vex2<unsigned int> v2uci;
typedef const vex2<short int> v2sci;
typedef const vex2<unsigned short int> v2usci;
typedef const vex2<long int> v2lci;
typedef const vex2<long long int> v2llci;
typedef const vex2<unsigned long int> v2ulci;
typedef const vex2<unsigned long long int> v2ullci;

typedef vex2b v2b;
typedef const vex2b v2cb;
typedef vex2<volatile bool> v2vb;
typedef const vex2<volatile bool> v2vcb;

typedef vex2<char> v2h;
typedef vex2<const char*> v2ch;

typedef vex2f v2f;
typedef const vex2f v2cf;
typedef vex2<long float> v2lf;
typedef const vex2<long float> v2lcf;

typedef vex2d v2d;
typedef const vex2d v2cd;
typedef vex2<long double> v2ld;
typedef const vex2<long double> v2lcd;

typedef vex2s v2s;
typedef const vex2s v2cs;

// ///////////////////////////// //
typedef const vex3i vex3ci;
typedef vex3<unsigned int> vex3ui;
typedef vex3<short int> vex3si;
typedef vex3<unsigned short int> vex3usi;
typedef vex3<long int> vex3li;
typedef vex3<long long int> vex3lli;
typedef vex3<unsigned long int> vex3uli;
typedef vex3<unsigned long long int> vex3ulli;

typedef const vex3<unsigned int> vex3uci;
typedef const vex3<short int> vex3sci;
typedef const vex3<unsigned short int> vex3usci;
typedef const vex3<long int> vex3lci;
typedef const vex3<long long int> vex3llci;
typedef const vex3<unsigned long int> vex3ulci;
typedef const vex3<unsigned long long int> vex3ullci;

typedef const vex3b vex3cb;
typedef vex3<volatile bool> vex3vb;
typedef const vex3<volatile bool> vex3vcb;

typedef vex3<char> vex3h;
typedef vex3<const char*> vex3ch;

typedef const vex3f vex3cf;
typedef vex3<long float> vex3lf;
typedef const vex3<long float> vex3lcf;

typedef const vex3d vex3cd;
typedef vex3<long double> vex3ld;
typedef const vex3<long double> vex3lcd;

typedef const vex3s vex3cs;


typedef const vex3i v3ci;
typedef vex3<unsigned int> v3ui;
typedef vex3<short int> v3si;
typedef vex3<unsigned short int> v3usi;
typedef vex3<long int> v3li;
typedef vex3<long long int> v3lli;
typedef vex3<unsigned long int> v3uli;
typedef vex3<unsigned long long int> v3ulli;

typedef const vex3<unsigned int> v3uci;
typedef const vex3<short int> v3sci;
typedef const vex3<unsigned short int> v3usci;
typedef const vex3<long int> v3lci;
typedef const vex3<long long int> v3llci;
typedef const vex3<unsigned long int> v3ulci;
typedef const vex3<unsigned long long int> v3ullci;

typedef vex3b v3b;
typedef const vex3b v3cb;
typedef vex3<volatile bool> v3vb;
typedef const vex3<volatile bool> v3vcb;

typedef vex3<char> v3h;
typedef vex3<const char*> v3ch;

typedef vex3f v3f;
typedef const vex3f v3cf;
typedef vex3<long float> v3lf;
typedef const vex3<long float> v3lcf;

typedef vex3d v3d;
typedef const vex3d v3cd;
typedef vex3<long double> v3ld;
typedef const vex3<long double> v3lcd;

typedef vex3s v3s;
typedef const vex3s v3cs;

// ///////////////////////////// //
typedef const vex4i vex4ci;
typedef vex4<unsigned int> vex4ui;
typedef vex4<short int> vex4si;
typedef vex4<unsigned short int> vex4usi;
typedef vex4<long int> vex4li;
typedef vex4<long long int> vex4lli;
typedef vex4<unsigned long int> vex4uli;
typedef vex4<unsigned long long int> vex4ulli;

typedef const vex4<unsigned int> vex4uci;
typedef const vex4<short int> vex4sci;
typedef const vex4<unsigned short int> vex4usci;
typedef const vex4<long int> vex4lci;
typedef const vex4<long long int> vex4llci;
typedef const vex4<unsigned long int> vex4ulci;
typedef const vex4<unsigned long long int> vex4ullci;

typedef const vex4b vex4cb;
typedef vex4<volatile bool> vex4vb;
typedef const vex4<volatile bool> vex4vcb;

typedef vex4<char> vex4h;
typedef vex4<const char*> vex4ch;

typedef const vex4f vex4cf;
typedef vex4<long float> vex4lf;
typedef const vex4<long float> vex4lcf;

typedef const vex4d vex4cd;
typedef vex4<long double> vex4ld;
typedef const vex4<long double> vex4lcd;

typedef const vex4s vex4cs;


typedef vex4i v4i;
typedef const vex4i v4ci;
typedef vex4<unsigned int> v4ui;
typedef vex4<short int> v4si;
typedef vex4<unsigned short int> v4usi;
typedef vex4<long int> v4li;
typedef vex4<long long int> v4lli;
typedef vex4<unsigned long int> v4uli;
typedef vex4<unsigned long long int> v4ulli;

typedef const vex4<unsigned int> v4uci;
typedef const vex4<short int> v4sci;
typedef const vex4<unsigned short int> v4usci;
typedef const vex4<long int> v4lci;
typedef const vex4<long long int> v4llci;
typedef const vex4<unsigned long int> v4ulci;
typedef const vex4<unsigned long long int> v4ullci;

typedef vex4b v4b;
typedef const vex4b v4cb;
typedef vex4<volatile bool> v4vb;
typedef const vex4<volatile bool> v4vcb;

typedef vex4<char> v4h;
typedef vex4<const char*> v4ch;

typedef vex4f v4f;
typedef const vex4f v4cf;
typedef vex4<long float> v4lf;
typedef const vex4<long float> v4lcf;

typedef vex4d v4d;
typedef const vex4d v4cd;
typedef vex4<long double> v4ld;
typedef const vex4<long double> v4lcd;

typedef vex4s v4s; 
typedef const vex4s v4cs;