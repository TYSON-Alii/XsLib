template <typename _T>
struct vex5 {
	_T x, y, z, w, q;
	vex5<_T>() { x = 0; y = 0; z = 0; w = 0; q = 0; };
	vex5<_T>(_T v1, _T v2, _T v3, _T v4, _T v5) { x = v1; y = v2; z = v3; w = v4; q = v5; };
	vex5<_T>(_T v1, _T v2, _T v3, _T v4) { x = v1; y = v2; z = v3; w = v4; };
	vex5<_T>(_T v1, _T v2, _T v3) { x = v1; y = v2; z = v3; };
	vex5<_T>(_T v1, _T v2) { x = v1; y = v2; };
	vex5<_T>(_T v1) { x = v1; y = v1; z = v1; w = v1; };
	vex5<_T> operator+ (const vex5<_T>& __vev) { return vex5<_T>(x += __vev.x, y += __vev.y, z += __vev.z, w += __vev.w, q += __vev.q); };
	vex5<_T> operator- (const vex5<_T>& __vev) { return vex5<_T>(x -= __vev.x, y -= __vev.y, z -= __vev.z, w -= __vev.w, q -= __vev.q); };
	vex5<_T> operator* (const vex5<_T>& __vev) { return vex5<_T>(x *= __vev.x, y *= __vev.y, z *= __vev.z, w *= __vev.w, q *= __vev.q); };
	vex5<_T> operator/ (const vex5<_T>& __vev) { return vex5<_T>(x /= __vev.x, y /= __vev.y, z /= __vev.z, w /= __vev.w, q /= __vev.q); };

	vex5<_T> operator+ (const _T __vev) { return vex5<_T>(x += __vev, y += __vev, z += __vev, w += __vev, q += __vev); };
	vex5<_T> operator- (const _T __vev) { return vex5<_T>(x -= __vev, y -= __vev, z -= __vev, w -= __vev, q -= __vev); };
	vex5<_T> operator* (const _T __vev) { return vex5<_T>(x *= __vev, y *= __vev, z *= __vev, w *= __vev, q *= __vev); };
	vex5<_T> operator/ (const _T __vev) { return vex5<_T>(x /= __vev, y /= __vev, z /= __vev, w /= __vev, q /= __vev); };
	void operator= (const _T __vev) { x = __vev; y = __vev; z = __vev; w = __vev; q = __vev; };

	void operator+= (const vex5<_T>& __vev) { x += __vev.x; y += __vev.y; z += __vev.z; w += __vev.w; q += __vev.q; };
	void operator-= (const vex5<_T>& __vev) { x -= __vev.x; y -= __vev.y; z -= __vev.z; w -= __vev.w; q -= __vev.q; };
	void operator*= (const vex5<_T>& __vev) { x *= __vev.x; y *= __vev.y; z *= __vev.z; w *= __vev.w; q *= __vev.q; };
	void operator/= (const vex5<_T>& __vev) { x /= __vev.x; y /= __vev.y; z /= __vev.z; w /= __vev.w; q /= __vev.q; };
	bool operator== (vex5<_T> __vev) {
		if (x == __vev.x && y == __vev.y && z == __vev.z && w == __vev.w && q == __vev.q)
			return true;
		return false;
	};
	bool operator== (_T __vev) {
		if (x == __vev && y == __vev && z == __vev && w == __vev && q == __vev)
			return true;
		return false;
	};
	bool operator!= (vex5<_T> __vev) {
		if (x != __vev.x && y != __vev.y && z != __vev.z && w != __vev.w && q != __vev.q)
			return true;
		return false;
	};
	bool operator!= (_T __vev) {
		if (x != __vev && y != __vev && z != __vev && w != __vev && q != __vev)
			return true;
		return false;
	};
	bool operator< (vex5<_T> __vev) {
		if (x < __vev.x && y < __vev.y && z < __vev.z && w < __vev.w && q < __vev.q)
			return true;
		return false;
	};
	bool operator< (_T __vev){
		if (x < __vev && y < __vev && z < __vev && w < __vev && q < __vev)
			return true;
		return false;
	};
	bool operator<= (vex5<_T> __vev) {
		if (x <= __vev.x && y <= __vev.y && z <= __vev.z && w <= __vev.w && q <= __vev.q)
			return true;
		return false;
	};
	bool operator<= (_T __vev) {
		if (x <= __vev && y <= __vev && z <= __vev && w <= __vev && q <= __vev)
			return true;
		return false;
	};
	bool operator> (vex5<_T> __vev) {
		if (x > __vev.x && y > __vev.y && z > __vev.z && w > __vev.w && q > __vev.q)
			return true;
		return false;
	};
	bool operator> (_T __vev) {
		if (x > __vev && y > __vev && z > __vev && w > __vev && q > __vev)
			return true;
		return false;
	};
	bool operator>= (vex5<_T> __vev) {
		if (x >= __vev.x && y >= __vev.y && z >= __vev.z && w >= __vev.w && q >= __vev.q)
			return true;
		return false;
	};
	bool operator>= (_T __vev) {
		if (x >= __vev && y >= __vev && z >= __vev && w >= __vev && q >= __vev)
			return true;
		return false;
	};
	vex5<_T> ceil() { return vex5<_T>(x = std::ceil(x), y = std::ceil(y), z = std::ceil(z), w = std::ceil(w), q = std::ceil(q)); };
	vex5<_T> floor() { return vex5<_T>(x = std::floor(x), y = std::floor(y), z = std::floor(z), w = std::floor(w), q = std::floor(q)); };
	vex5<_T> abs() { return vex5<_T>(x = std::abs(x), y = std::abs(y), z = std::abs(z), w = std::abs(w), q = std::abs(q)); };
	vex5<_T> sqrt() { return vex5<_T>(x = std::sqrt(x), y = std::sqrt(y), z = std::sqrt(z), w = std::sqrt(w), q = std::sqrt(q)); };
	vex5<_T> percent(_T __vev) { return vex5<_T>(x / 100 * __vev, y / 100 * __vev, z / 100 * __vev, w / 100 * __vev, q / 100 * __vev); };
	vex5<_T> pow(int __vev) { return vex5<_T>(x = powx(x, __vev), y = powx(y, __vev), z = powx(z, __vev), w = powx(w, __vev), q = powx(q, __vev)); };
	vex5<_T> rand(int __vev2, int __vev3) { return vex5<_T>(std::rand() % (__vev3 - __vev2) + __vev2, std::rand() % (__vev3 - __vev2) + __vev2, std::rand() % (__vev3 - __vev2) + __vev2, std::rand() % (__vev3 - __vev2) + __vev2, std::rand() % (__vev3 - __vev2) + __vev2); };
	vex5<_T> atan2(vex5<_T> __vev) { return vex5<_T>(std::atan2(x, __vev.x), std::atan2(y, __vev.y), std::atan2(z, __vev.z), std::atan2(w, __vev.w), std::atan2(q, __vev.q)); };
	vex5<_T> atan() { return vex5<_T>(x = std::atan(x), y = std::atan(y), z = std::atan(z), w = std::atan(w), q = std::atan(q)); };
	vex5<_T> asin() { return vex5<_T>(x = std::asin(x), y = std::asin(y), z = std::asin(z), w = std::asin(w), q = std::asin(q)); };
	vex5<_T> acos() { return vex5<_T>(x = std::acos(x), y = std::acos(y), z = std::acos(z), w = std::acos(w), q = std::acos(q)); };
	vex5<_T> tan() { return vex5<_T>(x = std::tan(x), y = std::tan(y), z = std::tan(z), w = std::tan(w), q = std::tan(q)); };
	vex5<_T> sin() { return vex5<_T>(x = std::sin(x), y = std::sin(y), z = std::sin(z), w = std::sin(w), q = std::sin(q)); };
	vex5<_T> cos() { return vex5<_T>(x = std::cos(x), y = std::cos(y), z = std::cos(z), w = std::cos(w), q = std::cos(q)); };
	_T average() { return (x + y + z + w + q) * 5; };
	vex5<_T> log() { return vex5<_T>(x = std::log(x), y = std::log(y), z = std::log(z), w = std::log(w), q = std::log(q)); };
	vex5<_T> round() { return vex5<_T>(x = std::round(x), y = std::round(y), z = std::round(z), w = std::round(w), q = std::round(q)); };
	vex5<_T> trunc() { return vex5<_T>(x = std::trunc(x), y = std::trunc(y), z = std::trunc(z), w = std::trunc(w), q = std::trunc(q)); };
	vex5<_T> exp() { return vex5<_T>(x = std::exp(x), y = std::exp(y), z = std::exp(z), w = std::exp(w), q = std::exp(q)); };
	vex5<_T> cbrt() { return vex5<_T>(x = std::cbrt(x), y = std::cbrt(y), z = std::cbrt(z), w = std::cbrt(w), q = std::cbrt(q)); };

	bool isEmpty() {
		if (x == NULL && y == NULL && z == NULL && w == NULL && q == NULL)
			return true;
		return false;
	};
};
