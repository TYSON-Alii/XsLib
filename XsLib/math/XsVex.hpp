template <typename _T>
struct vex2x {
	_T x, y;
	vex2x<_T>() { this->x = 0; this->y = 0; };
	vex2x<_T>(_T v1) { this->x = v1; this->y = v1; };
	vex2x<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; };
	vex2x<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; };
	vex2x<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; };
	vex2x<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; };
	vex2x<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; };
	vex2x<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; };
	const char* type() { return typeid(_T).name(); };
	vex2x<_T> operator+ (vex2x<_T> __vev) { return vex2x<_T>(x + __vev.x, y + __vev.y); };
	vex2x<_T> operator- (vex2x<_T> __vev) { return vex2x<_T>(x - __vev.x, y - __vev.y); };
	vex2x<_T> operator* (vex2x<_T> __vev) { return vex2x<_T>(x * __vev.x, y * __vev.y); };
	vex2x<_T> operator/ (vex2x<_T> __vev) { return vex2x<_T>(x / __vev.x, y / __vev.y); };
	vex2x<_T> operator+ (_T __vev) { return vex2x<_T>(x + __vev, y + __vev); };
	vex2x<_T> operator- (_T __vev) { return vex2x<_T>(x - __vev, y - __vev); };
	vex2x<_T> operator* (_T __vev) { return vex2x<_T>(x * __vev, y * __vev); };
	vex2x<_T> operator/ (_T __vev) { return vex2x<_T>(x / __vev, y / __vev); };
	vex2x<_T> operator<<=(_T item) { return vex2x<_T>(x + item, y + item); };
	vex2x<_T> operator>>=(_T item) { return vex2x<_T>(x - item, y - item); };
	vex2x<_T> operator!() { return vex2x<_T>(x ? x = false : x = true, y ? y = false : y = true); };
	vex2x<_T> operator~() { return vex2x<_T>(y, x); };
	vex2x<_T> operator%(_T _v) { return vex2x<_T>(x / 100 * _v, y / 100 * _v); };
	vex2x<_T> operator%(vex2x<_T> _v) { return vex2x<_T>(x / 100 * _v.x, y / 100 * _v.y); };
	vex2x<_T> operator[](int _max) { return vex2x<_T>(_T(rand() % _max), _T(rand() % _max)); };
	vex2x<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex2x<_T>(std::ceil(x), std::ceil(y)); else if (_mode == XS_TRUNC) return vex2x<_T>(std::trunc(x), std::trunc(y)); else if (_mode == XS_FLOOR) return vex2x<_T>(std::floor(x), std::floor(y)); };
	bool operator==(vex2x<_T> _v) { if (x == _v.x && y == _v.y) return true; else return false; };
	bool operator!=(vex2x<_T> _v) { if (x != _v.x && y != _v.y) return true; else return false; };
	bool operator|(vex2x<_T> _v) { if (x == _v.x || y == _v.y) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; };
	void operator--() { this->x -= 1; this->y -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; };
	void operator+=(vex2x<_T> _num) { this->x += _num.x; this->y += _num.y; };
	void operator-=(vex2x<_T> _num) { this->x -= _num.x; this->y -= _num.y; };
	void operator*=(vex2x<_T> _num) { this->x *= _num.x; this->y *= _num.y; };
	void operator/=(vex2x<_T> _num) { this->x /= _num.x; this->y /= _num.y; };
	void operator<<(_T item) { this->x += item; this->y += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; };
	void operator<<(vex2x<_T> item) { this->x += item; this->y += item; };
	void operator>>(vex2x<_T> item) { this->x -= item; this->y -= item; };
};

template <typename _T>
struct vex3x {
	_T x, y, z;
	vex3x<_T>() { this->x = 0; this->y = 0; this->z = 0; };
	vex3x<_T>(_T v1) { this->x = v1; this->y = v1; this->z = v1; };
	vex3x<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; this->z = 0; };
	vex3x<_T>(_T v1, _T v2, _T v3) { this->x = v1; this->y = v2; this->z = v3; };
	vex3x<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3x<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3x<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; };
	vex3x<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y;};
	vex3x<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y;};
	vex3x<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y;};
	vex3x<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y;};
	vex3x<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y;};
	vex3x<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex3x<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	const char* type() { return typeid(_T).name(); };
	vex3x<_T> operator+ (vex3x<_T> __vev) { return vex3x<_T>(x + __vev.x, y + __vev.y, z + __vev.z); };
	vex3x<_T> operator- (vex3x<_T> __vev) { return vex3x<_T>(x - __vev.x, y - __vev.y, z - __vev.z); };
	vex3x<_T> operator* (vex3x<_T> __vev) { return vex3x<_T>(x * __vev.x, y * __vev.y, z * __vev.z); };
	vex3x<_T> operator/ (vex3x<_T> __vev) { return vex3x<_T>(x / __vev.x, y / __vev.y, z / __vev.z); };
	vex3x<_T> operator+ (_T __vev) { return vex3x<_T>(x + __vev, y + __vev, z + __vev); };
	vex3x<_T> operator- (_T __vev) { return vex3x<_T>(x - __vev, y - __vev, z - __vev); };
	vex3x<_T> operator* (_T __vev) { return vex3x<_T>(x * __vev, y * __vev, z * __vev); };
	vex3x<_T> operator/ (_T __vev) { return vex3x<_T>(x / __vev, y / __vev, z / __vev); };
	vex3x<_T> operator<<=(_T item) { return vex3x<_T>(x + item, y + item, z + item); };
	vex3x<_T> operator>>=(_T item) { return vex3x<_T>(x - item, y - item, z - item); };
	vex3x<_T> operator!() { return vex3x<_T>(x ? x = false : x = true, y ? y = false : y = true, z ? z = false : z = true); };
	vex3x<_T> operator~() { return vex3x<_T>(z, y, x); };
	vex3x<_T> operator%(_T _v) { return vex3x<_T>(x / 100 * _v, y / 100 * _v, z / 100 * _v); };
	vex3x<_T> operator%(vex3x<_T> _v) { return vex3x<_T>(x / 100 * _v.x, y / 100 * _v.y, z / 100 * _v.z); };
	vex3x<_T> operator[](int _max) { return vex3x<_T>(_T(rand() % _max), _T(rand() % _max), _T(rand() % _max)); };
	vex3x<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex3x<_T>(std::ceil(x), std::ceil(y), std::ceil(z)); else if (_mode == XS_TRUNC) return vex3x<_T>(std::trunc(x), std::trunc(y), std::trunc(z)); else if (_mode == XS_FLOOR) return vex3x<_T>(std::floor(x), std::floor(y), std::floor(z)); };
	bool operator==(vex3x<_T> _v) { if (x == _v.x && y == _v.y && z == _v.z) return true; else return false; };
	bool operator!=(vex3x<_T> _v) { if (x != _v.x && y != _v.y && z != _v.z) return true; else return false; };
	bool operator|(vex3x<_T> _v) { if (x == _v.x || y == _v.y || z == _v.z) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v && z == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v && z != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v || z == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; this->z += 1; };
	void operator--() { this->x -= 1; this->y -= 1; this->z -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; this->z += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; this->z -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; this->z *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; this->z /= _num; };
	void operator+=(vex3x<_T> _num) { this->x += _num.x; this->y += _num.y; this->z += _num.z; };
	void operator-=(vex3x<_T> _num) { this->x -= _num.x; this->y -= _num.y; this->z -= _num.z; };
	void operator*=(vex3x<_T> _num) { this->x *= _num.x; this->y *= _num.y; this->z *= _num.z; };
	void operator/=(vex3x<_T> _num) { this->x /= _num.x; this->y /= _num.y; this->z /= _num.z; };
	void operator<<(_T item) { this->x += item; this->y += item; this->z += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; this->z -= item; };
	void operator<<(vex3x<_T> item) { this->x += item.x; this->y += item.y; this->z += item.z; };
	void operator>>(vex3x<_T> item) { this->x -= item.x; this->y -= item.y; this->z -= item.z; };
};

template <typename _T>
struct vex4x {
	_T x, y, z, w;
	vex4x<_T>() { this->x = 0; this->y = 0; this->z = 0; this->w = 0;};
	vex4x<_T>(_T v1) { this->x = v1; this->y = v1; this->z = v1;  this->z = v1; };
	vex4x<_T>(_T v1, _T v2) { this->x = v1; this->y = v2; this->z = 0;  this->z = 0;};
	vex4x<_T>(_T v1, _T v2, _T v3) { this->x = v1; this->y = v2; this->z = v3;  this->z = 0; };
	vex4x<_T>(_T v1, _T v2, _T v3, _T v4) { this->x = v1; this->y = v2; this->z = v3;  this->z = v4; };
	vex4x<_T>(_T vv[]) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4x<_T>(std::vector<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4x<_T>(std::deque<_T> vv) { this->x = vv[0]; this->y = vv[1]; this->y = vv[2]; this->y = vv[3]; };
	vex4x<_T>(vex2i vv) { this->x = vv.x; this->y = vv.y; };
	vex4x<_T>(vex2f vv) { this->x = vv.x; this->y = vv.y; };
	vex4x<_T>(vex2d vv) { this->x = vv.x; this->y = vv.y; };
	vex4x<_T>(vex2s vv) { this->x = vv.x; this->y = vv.y; };
	vex4x<_T>(vex2b vv) { this->x = vv.x; this->y = vv.y; };
	vex4x<_T>(vex3i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4x<_T>(vex3f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4x<_T>(vex3d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4x<_T>(vex3s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4x<_T>(vex3b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; };
	vex4x<_T>(vex4i vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4x<_T>(vex4f vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4x<_T>(vex4d vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4x<_T>(vex4s vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	vex4x<_T>(vex4b vv) { this->x = vv.x; this->y = vv.y; this->z = vv.z; this->w = vv.w; };
	const char* type() { return typeid(_T).name(); };
	vex4x<_T> operator+ (vex4x<_T> __vev) { return vex4x<_T>(x + __vev.x, y + __vev.y, z + __vev.z, w + __vev.w); };
	vex4x<_T> operator- (vex4x<_T> __vev) { return vex4x<_T>(x - __vev.x, y - __vev.y, z - __vev.z, w - __vev.w); };
	vex4x<_T> operator* (vex4x<_T> __vev) { return vex4x<_T>(x * __vev.x, y * __vev.y, z * __vev.z, w * __vev.w); };
	vex4x<_T> operator/ (vex4x<_T> __vev) { return vex4x<_T>(x / __vev.x, y / __vev.y, z / __vev.z, w / __vev.w); };
	vex4x<_T> operator+ (_T __vev) { return vex4x<_T>(x + __vev, y + __vev, z + __vev, w + __vev); };
	vex4x<_T> operator- (_T __vev) { return vex4x<_T>(x - __vev, y - __vev, z - __vev, w + __vev); };
	vex4x<_T> operator* (_T __vev) { return vex4x<_T>(x * __vev, y * __vev, z * __vev, w + __vev); };
	vex4x<_T> operator/ (_T __vev) { return vex4x<_T>(x / __vev, y / __vev, z / __vev, w + __vev); };
	vex4x<_T> operator<<=(_T item) { return vex4x<_T>(x + item, y + item, z + item, w + item); };
	vex4x<_T> operator>>=(_T item) { return vex4x<_T>(x - item, y - item, z - item, w - item); };
	vex4x<_T> operator!() { return vex4x<_T>(x ? x = false : x = true, y ? y = false : y = true, z ? z = false : z = true, w ? w = false : w = true); };
	vex4x<_T> operator~() { return vex4x<_T>(w, z, y, x); };
	vex4x<_T> operator%(_T _v) { return vex4x<_T>(x / 100 * _v, y / 100 * _v, z / 100 * _v, w / 100 * _v); };
	vex4x<_T> operator%(vex4x<_T> _v) { return vex4x<_T>(x / 100 * _v.x, y / 100 * _v.y, z / 100 * _v.z, w / 100 * _v.w); };
	vex4x<_T> operator[](int _max) { return vex4x<_T>(_T(rand() % _max), _T(rand() % _max), _T(rand() % _max), _T(rand() % _max)); };
	vex4x<_T> operator()(XsEnum _mode) { if (_mode == XS_CEIL) return vex4x<_T>(std::ceil(x), std::ceil(y), std::ceil(z), std::ceil(w)); else if (_mode == XS_TRUNC) return vex4x<_T>(std::trunc(x), std::trunc(y), std::trunc(z), std::trunc(w)); else if (_mode == XS_FLOOR) return vex4x<_T>(std::floor(x), std::floor(y), std::floor(z), std::floor(w)); };
	bool operator==(vex4x<_T> _v) { if (x == _v.x && y == _v.y && z == _v.z && w == _v.w) return true; else return false; };
	bool operator!=(vex4x<_T> _v) { if (x != _v.x && y != _v.y && z != _v.z && w != _v.w) return true; else return false; };
	bool operator|(vex4x<_T> _v) { if (x == _v.x || y == _v.y || z == _v.z || w == _v.w) return true; else return false; };
	bool operator==(_T _v) { if (x == _v && y == _v && z == _v && w == _v) return true; else return false; };
	bool operator!=(_T _v) { if (x != _v && y != _v && z != _v && w != _v) return true; else return false; };
	bool operator|(_T _v) { if (x == _v || y == _v || z == _v || w == _v) return true; else return false; };
	void operator++() { this->x += 1; this->y += 1; this->z += 1; this->w += 1; };
	void operator--() { this->x -= 1; this->y -= 1; this->z -= 1; this->w -= 1; };
	void operator+=(_T _num) { this->x += _num; this->y += _num; this->z += _num; this->w += _num; };
	void operator-=(_T _num) { this->x -= _num; this->y -= _num; this->z -= _num; this->w -= _num; };
	void operator*=(_T _num) { this->x *= _num; this->y *= _num; this->z *= _num; this->w *= _num; };
	void operator/=(_T _num) { this->x /= _num; this->y /= _num; this->z /= _num; this->w /= _num; };
	void operator+=(vex4x<_T> _num) { this->x += _num.x; this->y += _num.y; this->z += _num.z; this->w += _num.w; };
	void operator-=(vex4x<_T> _num) { this->x -= _num.x; this->y -= _num.y; this->z -= _num.z; this->w -= _num.w; };
	void operator*=(vex4x<_T> _num) { this->x *= _num.x; this->y *= _num.y; this->z *= _num.z; this->w *= _num.w; };
	void operator/=(vex4x<_T> _num) { this->x /= _num.x; this->y /= _num.y; this->z /= _num.z; this->w /= _num.w; };
	void operator<<(_T item) { this->x += item; this->y += item; this->z += item; this->w += item; };
	void operator>>(_T item) { this->x -= item; this->y -= item; this->z -= item; this->w -= item; };
	void operator<<(vex4x<_T> item) { this->x += item.x; this->y += item.y; this->z += item.z; this->w += item.w;};
	void operator>>(vex4x<_T> item) { this->x -= item.x; this->y -= item.y; this->z -= item.z; this->w -= item.w;};
};

// ///////////////////////////// //
typedef const vex2i vex2ci;
typedef vex2x<unsigned int> vex2ui;
typedef vex2x<short int> vex2si;
typedef vex2x<unsigned short int> vex2usi;
typedef vex2x<long int> vex2li;
typedef vex2x<long long int> vex2lli;
typedef vex2x<unsigned long int> vex2uli;
typedef vex2x<unsigned long long int> vex2ulli;

typedef const vex2x<unsigned int> vex2uci;
typedef const vex2x<short int> vex2sci;
typedef const vex2x<unsigned short int> vex2usci;
typedef const vex2x<long int> vex2lci;
typedef const vex2x<long long int> vex2llci;
typedef const vex2x<unsigned long int> vex2ulci;
typedef const vex2x<unsigned long long int> vex2ullci;

typedef const vex2b vex2cb;
typedef vex2x<volatile bool> vex2vb;
typedef const vex2x<volatile bool> vex2vcb;

typedef vex2x<char> vex2h;
typedef vex2x<const char*> vex2ch;

typedef const vex2f vex2cf;
typedef vex2x<long float> vex2lf;
typedef const vex2x<long float> vex2lcf;

typedef const vex2d vex2cd;
typedef vex2x<long double> vex2ld;
typedef const vex2x<long double> vex2lcd;

typedef const vex2s vex2cs;

// ///////////////////////////// //
typedef const vex3i vex3ci;
typedef vex3x<unsigned int> vex3ui;
typedef vex3x<short int> vex3si;
typedef vex3x<unsigned short int> vex3usi;
typedef vex3x<long int> vex3li;
typedef vex3x<long long int> vex3lli;
typedef vex3x<unsigned long int> vex3uli;
typedef vex3x<unsigned long long int> vex3ulli;

typedef const vex3x<unsigned int> vex3uci;
typedef const vex3x<short int> vex3sci;
typedef const vex3x<unsigned short int> vex3usci;
typedef const vex3x<long int> vex3lci;
typedef const vex3x<long long int> vex3llci;
typedef const vex3x<unsigned long int> vex3ulci;
typedef const vex3x<unsigned long long int> vex3ullci;

typedef const vex3b vex3cb;
typedef vex3x<volatile bool> vex3vb;
typedef const vex3x<volatile bool> vex3vcb;

typedef vex3x<char> vex3h;
typedef vex3x<const char*> vex3ch;

typedef const vex3f vex3cf;
typedef vex3x<long float> vex3lf;
typedef const vex3x<long float> vex3lcf;

typedef const vex3d vex3cd;
typedef vex3x<long double> vex3ld;
typedef const vex3x<long double> vex3lcd;

typedef const vex3s vex3cs;

// ///////////////////////////// //
typedef const vex4i vex4ci;
typedef vex4x<unsigned int> vex4ui;
typedef vex4x<short int> vex4si;
typedef vex4x<unsigned short int> vex4usi;
typedef vex4x<long int> vex4li;
typedef vex4x<long long int> vex4lli;
typedef vex4x<unsigned long int> vex4uli;
typedef vex4x<unsigned long long int> vex4ulli;

typedef const vex4x<unsigned int> vex4uci;
typedef const vex4x<short int> vex4sci;
typedef const vex4x<unsigned short int> vex4usci;
typedef const vex4x<long int> vex4lci;
typedef const vex4x<long long int> vex4llci;
typedef const vex4x<unsigned long int> vex4ulci;
typedef const vex4x<unsigned long long int> vex4ullci;

typedef const vex4b vex4cb;
typedef vex4x<volatile bool> vex4vb;
typedef const vex4x<volatile bool> vex4vcb;

typedef vex4x<char> vex4h;
typedef vex4x<const char*> vex4ch;

typedef const vex4f vex4cf;
typedef vex4x<long float> vex4lf;
typedef const vex4x<long float> vex4lcf;

typedef const vex4d vex4cd;
typedef vex4x<long double> vex4ld;
typedef const vex4x<long double> vex4lcd;

typedef const vex4s vex4cs;

// ///////////////////////////// //
typedef vex5<int> vex5i;
typedef const vex5<int> vex5ci;
typedef vex5<unsigned int> vex5ui;
typedef vex5<short int> vex5si;
typedef vex5<unsigned short int> vex5usi;
typedef vex5<long int> vex5li;
typedef vex5<long long int> vex5lli;
typedef vex5<unsigned long int> vex5uli;
typedef vex5<unsigned long long int> vex5ulli;

typedef const vex5<unsigned int> vex5uci;
typedef const vex5<short int> vex5sci;
typedef const vex5<unsigned short int> vex5usci;
typedef const vex5<long int> vex5lci;
typedef const vex5<long long int> vex5llci;
typedef const vex5<unsigned long int> vex5ulci;
typedef const vex5<unsigned long long int> vex5ullci;

typedef vex5<bool> vex5b;
typedef const vex5<bool> vex5cb;
typedef vex5<volatile bool> vex5vb;
typedef const vex5<volatile bool> vex5vcb;

typedef vex5<char> vex5h;
typedef vex5<const char*> vex5ch;

typedef vex5<float> vex5f;
typedef const vex5f vex5cf;
typedef vex5<long float> vex5lf;
typedef const vex5<long float> vex5lcf;

typedef vex5<double> vex5d;
typedef const vex5<double> vex5cd;
typedef vex5<long double> vex5ld;
typedef const vex5<long double> vex5lcd;

typedef vex5<std::string> vex5s;
typedef const vex5<std::string> vex5cs;