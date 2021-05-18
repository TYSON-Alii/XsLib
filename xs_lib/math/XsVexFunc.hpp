vex4f::vex4f() {
	x = y = z = w = 0;
};
vex4f::vex4f(float v1, float v2, float v3, float v4) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = v4;
};
vex4f::vex4f(float v1, float v2, float v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = 0;
};
vex4f::vex4f(float v1, float v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
	this->w = 0;
};
vex4f::vex4f(float v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
	this->w = v1;
};
void vex4f::operator=(const float __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
	this->w = __vev;
};
vex4f vex4f::operator+(const vex4f& __vev) {
	vex4f __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	__temp.w = this->w + __vev.w;
	return __temp;
};
vex4f vex4f::operator+(const float __vev) {
	vex4f __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	__temp.w = this->w + __vev;
	return __temp;
};
void vex4f::operator+=(const vex4f& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
	this->w += __vev.w;
};
vex4f vex4f::operator-(const vex4f& __vev) {
	vex4f __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	__temp.w = this->w - __vev.w;
	return __temp;
};
vex4f vex4f::operator-(const float __vev) {
	vex4f __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	__temp.w = this->w - __vev;
	return __temp;
};
void vex4f::operator-=(const vex4f& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
	this->w -= __vev.w;
};
vex4f vex4f::operator*(const vex4f& __vev) {
	vex4f __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	__temp.w = this->w * __vev.w;
	return __temp;
};
vex4f vex4f::operator*(const float __vev) {
	vex4f __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	__temp.w = this->w * __vev;
	return __temp;
};
void vex4f::operator*=(const vex4f& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
	this->w *= __vev.w;
};
vex4f vex4f::operator/(const vex4f& __vev) {
	vex4f __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	__temp.w = this->w / __vev.w;
	return __temp;
};
vex4f vex4f::operator/(const float __vev) {
	vex4f __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	__temp.w = this->w / __vev;
	return __temp;
};
void vex4f::operator/=(const vex4f& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
	this->w /= __vev.w;
};
void vex4f::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
	this->z = std::ceil(this->z);
	this->w = std::ceil(this->w);
}
void vex4f::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
	this->z = std::floor(this->z);
	this->w = std::floor(this->w);
}
void vex4f::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
	this->w = std::abs(this->w);
}
void vex4f::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
	this->w = std::sqrt(this->w);
}
void vex4f::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
	this->w = this->w / 100 * __vev;
}
void vex4f::pow_(int __vev) {
	const vex4f temp = vex4f(this->x, this->y, this->z, this->w);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
		this->w *= temp.w;
	}
}
void vex4f::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->w = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex4f::atan2_(vex4f __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
	this->w = std::atan2(this->w, __vev.w);
}
void vex4f::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
	this->w = std::atan(this->w);
}
void vex4f::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
	this->w = std::asin(this->w);
}
void vex4f::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
	this->w = std::acos(this->w);
}
void vex4f::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
	this->w = std::tan(this->w);
}
void vex4f::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
	this->w = std::sin(this->w);
}
void vex4f::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
	this->w = std::cos(this->w);
}
vex4f vex4f::ceil() {
	return vex4f(std::ceil(this->x), std::ceil(this->y), std::ceil(this->z), std::ceil(this->w));
};
vex4f vex4f::floor() {
	return vex4f(std::floor(this->x), std::floor(this->y), std::floor(this->z), std::floor(this->w));
};
vex4f vex4f::abs() {
	return vex4f(std::abs(this->x), std::abs(this->y), std::abs(this->z), std::abs(this->w));
};
vex4f vex4f::sqrt() {
	return vex4f(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z), std::sqrt(this->w));
};
vex4f vex4f::percent(float __vev) {
	return vex4f(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev, this->w / 100 * __vev);
};
vex4f vex4f::pow(int __vev) {
	const vex4f temp = vex4f(this->x, this->y, this->z, this->w);
	vex4f ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4f vex4f::rand(int __vev2, int __vev3) {
	return vex4f(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex4f vex4f::atan2(vex4f __vev) {
	return vex4f(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z), std::atan2(this->w, __vev.w));
};
vex4f vex4f::atan() {
	return vex4f(std::atan(this->x), std::atan(this->y), std::atan(this->z), std::atan(this->w));
};
vex4f vex4f::asin() {
	return vex4f(std::asin(this->x), std::asin(this->y), std::asin(this->z), std::asin(this->w));
};
vex4f vex4f::acos() {
	return vex4f(std::acos(this->x), std::acos(this->y), std::acos(this->z), std::acos(this->w));
};
vex4f vex4f::tan() {
	return vex4f(std::tan(this->x), std::tan(this->y), std::tan(this->z), std::tan(this->w));
};
vex4f vex4f::sin() {
	return vex4f(std::sin(this->x), std::sin(this->y), std::sin(this->z), std::sin(this->w));
};
vex4f vex4f::cos() {
	return vex4f(std::cos(this->x), std::cos(this->y), std::cos(this->z), std::cos(this->w));
};
bool vex4f::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL && this->w == NULL)
		return true;
	else
		return false;
};
vex4d::vex4d() {
	x = y = z = w = 0;
};
vex4d::vex4d(double v1, double v2, double v3, double v4) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = v4;
};
vex4d::vex4d(double v1, double v2, double v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = 0;
};
vex4d::vex4d(double v1, double v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
	this->w = 0;
};
vex4d::vex4d(double v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
	this->w = v1;
};
void vex4d::operator=(const double __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
	this->w = __vev;
};
vex4d vex4d::operator+(const vex4d& __vev) {
	vex4d __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	__temp.w = this->w + __vev.w;
	return __temp;
};
vex4d vex4d::operator+(const double __vev) {
	vex4d __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	__temp.w = this->w + __vev;
	return __temp;
};
void vex4d::operator+=(const vex4d& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
	this->w += __vev.w;
};
vex4d vex4d::operator-(const vex4d& __vev) {
	vex4d __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	__temp.w = this->w - __vev.w;
	return __temp;
};
vex4d vex4d::operator-(const double __vev) {
	vex4d __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	__temp.w = this->w - __vev;
	return __temp;
};
void vex4d::operator-=(const vex4d& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
	this->w -= __vev.w;
};
vex4d vex4d::operator*(const vex4d& __vev) {
	vex4d __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	__temp.w = this->w * __vev.w;
	return __temp;
};
vex4d vex4d::operator*(const double __vev) {
	vex4d __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	__temp.w = this->w * __vev;
	return __temp;
};
void vex4d::operator*=(const vex4d& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
	this->w *= __vev.w;
};
vex4d vex4d::operator/(const vex4d& __vev) {
	vex4d __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	__temp.w = this->w / __vev.w;
	return __temp;
};
vex4d vex4d::operator/(const double __vev) {
	vex4d __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	__temp.w = this->w / __vev;
	return __temp;
};
void vex4d::operator/=(const vex4d& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
	this->w /= __vev.w;
};
void vex4d::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
	this->z = std::ceil(this->z);
	this->w = std::ceil(this->w);
}
void vex4d::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
	this->z = std::floor(this->z);
	this->w = std::floor(this->w);
}
void vex4d::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
	this->w = std::abs(this->w);
}
void vex4d::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
	this->w = std::sqrt(this->w);
}
void vex4d::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
	this->w = this->w / 100 * __vev;
}
void vex4d::pow_(int __vev) {
	const vex4d temp = vex4d(this->x, this->y, this->z, this->w);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
		this->w *= temp.w;
	}
}
void vex4d::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->w = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex4d::atan2_(vex4d __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
	this->w = std::atan2(this->w, __vev.w);
}
void vex4d::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
	this->w = std::atan(this->w);
}
void vex4d::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
	this->w = std::asin(this->w);
}
void vex4d::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
	this->w = std::acos(this->w);
}
void vex4d::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
	this->w = std::tan(this->w);
}
void vex4d::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
	this->w = std::sin(this->w);
}
void vex4d::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
	this->w = std::cos(this->w);
}
vex4d vex4d::ceil() {
	return vex4d(std::ceil(this->x), std::ceil(this->y), std::ceil(this->z), std::ceil(this->w));
};
vex4d vex4d::floor() {
	return vex4d(std::floor(this->x), std::floor(this->y), std::floor(this->z), std::floor(this->w));
};
vex4d vex4d::abs() {
	return vex4d(std::abs(this->x), std::abs(this->y), std::abs(this->z), std::abs(this->w));
};
vex4d vex4d::sqrt() {
	return vex4d(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z), std::sqrt(this->w));
};
vex4d vex4d::percent(float __vev) {
	return vex4d(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev, this->w / 100 * __vev);
};
vex4d vex4d::pow(int __vev) {
	const vex4d temp = vex4d(this->x, this->y, this->z, this->w);
	vex4d ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4d vex4d::rand(int __vev2, int __vev3) {
	return vex4d(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex4d vex4d::atan2(vex4d __vev) {
	return vex4d(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z), std::atan2(this->w, __vev.w));
};
vex4d vex4d::atan() {
	return vex4d(std::atan(this->x), std::atan(this->y), std::atan(this->z), std::atan(this->w));
};
vex4d vex4d::asin() {
	return vex4d(std::asin(this->x), std::asin(this->y), std::asin(this->z), std::asin(this->w));
};
vex4d vex4d::acos() {
	return vex4d(std::acos(this->x), std::acos(this->y), std::acos(this->z), std::acos(this->w));
};
vex4d vex4d::tan() {
	return vex4d(std::tan(this->x), std::tan(this->y), std::tan(this->z), std::tan(this->w));
};
vex4d vex4d::sin() {
	return vex4d(std::sin(this->x), std::sin(this->y), std::sin(this->z), std::sin(this->w));
};
vex4d vex4d::cos() {
	return vex4d(std::cos(this->x), std::cos(this->y), std::cos(this->z), std::cos(this->w));
};
bool vex4d::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL && this->w == NULL)
		return true;
	else
		return false;
};
vex4i::vex4i() {
	x = y = z = w = 0;
};
vex4i::vex4i(int v1, int v2, int v3, int v4) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = v4;
};
vex4i::vex4i(int v1, int v2, int v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = 0;
};
vex4i::vex4i(int v1, int v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
	this->w = 0;
};
vex4i::vex4i(int v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
	this->w = v1;
};
void vex4i::operator=(const int __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
	this->w = __vev;
};
vex4i vex4i::operator+(const vex4i& __vev) {
	vex4i __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	__temp.w = this->w + __vev.w;
	return __temp;
};
vex4i vex4i::operator+(const int __vev) {
	vex4i __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	__temp.w = this->w + __vev;
	return __temp;
};
void vex4i::operator+=(const vex4i& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
	this->w += __vev.w;
};
vex4i vex4i::operator-(const vex4i& __vev) {
	vex4i __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	__temp.w = this->w - __vev.w;
	return __temp;
};
vex4i vex4i::operator-(const int __vev) {
	vex4i __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	__temp.w = this->w - __vev;
	return __temp;
};
void vex4i::operator-=(const vex4i& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
	this->w -= __vev.w;
};
vex4i vex4i::operator*(const vex4i& __vev) {
	vex4i __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	__temp.w = this->w * __vev.w;
	return __temp;
};
vex4i vex4i::operator*(const int __vev) {
	vex4i __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	__temp.w = this->w * __vev;
	return __temp;
};
void vex4i::operator*=(const vex4i& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
	this->w *= __vev.w;
};
vex4i vex4i::operator/(const vex4i& __vev) {
	vex4i __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	__temp.w = this->w / __vev.w;
	return __temp;
};
vex4i vex4i::operator/(const int __vev) {
	vex4i __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	__temp.w = this->w / __vev;
	return __temp;
};
void vex4i::operator/=(const vex4i& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
	this->w /= __vev.w;
};
void vex4i::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
	this->w = std::abs(this->w);
}
void vex4i::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
	this->w = std::sqrt(this->w);
}
void vex4i::percent_(int __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
	this->w = this->w / 100 * __vev;
}
void vex4i::pow_(int __vev) {
	const vex4i temp = vex4i(this->x, this->y, this->z, this->w);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
		this->w *= temp.w;
	}
}
void vex4i::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->w = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex4i::atan2_(vex4i __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
	this->w = std::atan2(this->w, __vev.w);
}
void vex4i::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
	this->w = std::atan(this->w);
}
void vex4i::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
	this->w = std::asin(this->w);
}
void vex4i::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
	this->w = std::acos(this->w);
}
void vex4i::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
	this->w = std::tan(this->w);
}
void vex4i::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
	this->w = std::sin(this->w);
}
void vex4i::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
	this->w = std::cos(this->w);
}
vex4i vex4i::abs() {
	return vex4i(std::abs(this->x), std::abs(this->y), std::abs(this->z), std::abs(this->w));
};
vex4i vex4i::sqrt() {
	return vex4i(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z), std::sqrt(this->w));
};
vex4i vex4i::percent(int __vev) {
	return vex4i(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev, this->w / 100 * __vev);
};
vex4i vex4i::pow(int __vev) {
	const vex4i temp = vex4i(this->x, this->y, this->z, this->w);
	vex4i ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4i vex4i::rand(int __vev2, int __vev3) {
	return vex4i(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex4i vex4i::atan2(vex4i __vev) {
	return vex4i(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z), std::atan2(this->w, __vev.w));
};
vex4i vex4i::atan() {
	return vex4i(std::atan(this->x), std::atan(this->y), std::atan(this->z), std::atan(this->w));
};
vex4i vex4i::asin() {
	return vex4i(std::asin(this->x), std::asin(this->y), std::asin(this->z), std::asin(this->w));
};
vex4i vex4i::acos() {
	return vex4i(std::acos(this->x), std::acos(this->y), std::acos(this->z), std::acos(this->w));
};
vex4i vex4i::tan() {
	return vex4i(std::tan(this->x), std::tan(this->y), std::tan(this->z), std::tan(this->w));
};
vex4i vex4i::sin() {
	return vex4i(std::sin(this->x), std::sin(this->y), std::sin(this->z), std::sin(this->w));
};
vex4i vex4i::cos() {
	return vex4i(std::cos(this->x), std::cos(this->y), std::cos(this->z), std::cos(this->w));
};
bool vex4i::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL && this->w == NULL)
		return true;
	else
		return false;
};
vex3f::vex3f() {
	x = y = z = 0;
};
vex3f::vex3f(float v1, float v2, float v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
};
vex3f::vex3f(float v1, float v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
};
vex3f::vex3f(float v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
};
void vex3f::operator=(const float __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
};
vex3f vex3f::operator+(const vex3f& __vev) {
	vex3f __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	return __temp;
};
vex3f vex3f::operator+(const float __vev) {
	vex3f __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	return __temp;
};
void vex3f::operator+=(const vex3f& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
};
vex3f vex3f::operator-(const vex3f& __vev) {
	vex3f __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	return __temp;
};
vex3f vex3f::operator-(const float __vev) {
	vex3f __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	return __temp;
};
void vex3f::operator-=(const vex3f& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
};
vex3f vex3f::operator*(const vex3f& __vev) {
	vex3f __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	return __temp;
};
vex3f vex3f::operator*(const float __vev) {
	vex3f __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	return __temp;
};
void vex3f::operator*=(const vex3f& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
};
vex3f vex3f::operator/(const vex3f& __vev) {
	vex3f __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	return __temp;
};
vex3f vex3f::operator/(const float __vev) {
	vex3f __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	return __temp;
};
void vex3f::operator/=(const vex3f& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
};
void vex3f::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
	this->z = std::ceil(this->z);
}
void vex3f::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
	this->z = std::floor(this->z);
}
void vex3f::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
}
void vex3f::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
}
void vex3f::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
}
void vex3f::pow_(int __vev) {
	const vex3f temp = vex3f(this->x, this->y, this->z);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
	}
}
void vex3f::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex3f::atan2_(vex3f __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
}
void vex3f::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
}
void vex3f::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
}
void vex3f::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
}
void vex3f::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
}
void vex3f::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
}
void vex3f::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
}
vex3f vex3f::ceil() {
	return vex3f(std::ceil(this->x), std::ceil(this->y), std::ceil(this->z));
};
vex3f vex3f::floor() {
	return vex3f(std::floor(this->x), std::floor(this->y), std::floor(this->z));
};
vex3f vex3f::abs() {
	return vex3f(std::fabs(this->x), std::fabs(this->y), std::fabs(this->z));
};
vex3f vex3f::sqrt() {
	return vex3f(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z));
};
vex3f vex3f::percent(float __vev) {
	return vex3f(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev);
};
vex3f vex3f::pow(int __vev) {
	const vex3f temp = vex3f(this->x, this->y, this->z);
	vex3f ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3f vex3f::rand(int __vev2, int __vev3) {
	return vex3f(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex3f vex3f::atan2(vex3f __vev) {
	return vex3f(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z));
};
vex3f vex3f::atan() {
	return vex3f(std::atan(this->x), std::atan(this->y), std::atan(this->z));
};
vex3f vex3f::asin() {
	return vex3f(std::asin(this->x), std::asin(this->y), std::asin(this->z));
};
vex3f vex3f::acos() {
	return vex3f(std::acos(this->x), std::acos(this->y), std::acos(this->z));
};
vex3f vex3f::tan() {
	return vex3f(std::tan(this->x), std::tan(this->y), std::tan(this->z));
};
vex3f vex3f::sin() {
	return vex3f(std::sin(this->x), std::sin(this->y), std::sin(this->z));
};
vex3f vex3f::cos() {
	return vex3f(std::cos(this->x), std::cos(this->y), std::cos(this->z));
};
bool vex3f::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL)
		return true;
	else
		return false;
};
vex3d::vex3d() {
	x = y = z = 0;
};
vex3d::vex3d(double v1, double v2, double v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
};
vex3d::vex3d(double v1, double v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
};
vex3d::vex3d(double v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
};
void vex3d::operator=(const double __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
};
vex3d vex3d::operator+(const vex3d& __vev) {
	vex3d __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	return __temp;
};
vex3d vex3d::operator+(const double __vev) {
	vex3d __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	return __temp;
};
void vex3d::operator+=(const vex3d& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
};
vex3d vex3d::operator-(const vex3d& __vev) {
	vex3d __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	return __temp;
};
vex3d vex3d::operator-(const double __vev) {
	vex3d __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	return __temp;
};
void vex3d::operator-=(const vex3d& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
};
vex3d vex3d::operator*(const vex3d& __vev) {
	vex3d __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	return __temp;
};
vex3d vex3d::operator*(const double __vev) {
	vex3d __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	return __temp;
};
void vex3d::operator*=(const vex3d& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
};
vex3d vex3d::operator/(const vex3d& __vev) {
	vex3d __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	return __temp;
};
vex3d vex3d::operator/(const double __vev) {
	vex3d __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	return __temp;
};
void vex3d::operator/=(const vex3d& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
};
void vex3d::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
	this->z = std::ceil(this->z);
}
void vex3d::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
	this->z = std::floor(this->z);
}
void vex3d::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
}
void vex3d::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
}
void vex3d::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
}
void vex3d::pow_(int __vev) {
	const vex3f temp = vex3f(this->x, this->y, this->z);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
	}
}
void vex3d::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex3d::atan2_(vex3d __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
}
void vex3d::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
}
void vex3d::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
}
void vex3d::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
}
void vex3d::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
}
void vex3d::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
}
void vex3d::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
}
vex3d vex3d::ceil() {
	return vex3d(std::ceil(this->x), std::ceil(this->y), std::ceil(this->z));
};
vex3d vex3d::floor() {
	return vex3d(std::floor(this->x), std::floor(this->y), std::floor(this->z));
};
vex3d vex3d::abs() {
	return vex3d(std::abs(this->x), std::abs(this->y), std::abs(this->z));
};
vex3d vex3d::sqrt() {
	return vex3d(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z));
};
vex3d vex3d::percent(float __vev) {
	return vex3d(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev);
};
vex3d vex3d::pow(int __vev) {
	const vex3d temp = vex3d(this->x, this->y, this->z);
	vex3d ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3d vex3d::rand(int __vev2, int __vev3) {
	return vex3d(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex3d vex3d::atan2(vex3d __vev) {
	return vex3d(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z));
};
vex3d vex3d::atan() {
	return vex3d(std::atan(this->x), std::atan(this->y), std::atan(this->z));
};
vex3d vex3d::asin() {
	return vex3d(std::asin(this->x), std::asin(this->y), std::asin(this->z));
};
vex3d vex3d::acos() {
	return vex3d(std::acos(this->x), std::acos(this->y), std::acos(this->z));
};
vex3d vex3d::tan() {
	return vex3d(std::tan(this->x), std::tan(this->y), std::tan(this->z));
};
vex3d vex3d::sin() {
	return vex3d(std::sin(this->x), std::sin(this->y), std::sin(this->z));
};
vex3d vex3d::cos() {
	return vex3d(std::cos(this->x), std::cos(this->y), std::cos(this->z));
};
bool vex3d::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL)
		return true;
	else
		return false;
};
vex3i::vex3i() {
	x = y = z = 0;
};
vex3i::vex3i(int v1, int v2, int v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
};
vex3i::vex3i(int v1, int v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
};
vex3i::vex3i(int v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
};
void vex3i::operator=(const int __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
};
vex3i vex3i::operator+(const vex3i& __vev) {
	vex3i __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	return __temp;
};
vex3i vex3i::operator+(const int __vev) {
	vex3i __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	return __temp;
};
void vex3i::operator+=(const vex3i& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
};
vex3i vex3i::operator-(const vex3i& __vev) {
	vex3i __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	__temp.z = this->z - __vev.z;
	return __temp;
};
vex3i vex3i::operator-(const int __vev) {
	vex3i __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	__temp.z = this->z - __vev;
	return __temp;
};
void vex3i::operator-=(const vex3i& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
	this->z -= __vev.z;
};
vex3i vex3i::operator*(const vex3i& __vev) {
	vex3i __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	__temp.z = this->z * __vev.z;
	return __temp;
};
vex3i vex3i::operator*(const int __vev) {
	vex3i __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	__temp.z = this->z * __vev;
	return __temp;
};
void vex3i::operator*=(const vex3i& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
	this->z *= __vev.z;
};
vex3i vex3i::operator/(const vex3i& __vev) {
	vex3i __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	__temp.z = this->z / __vev.z;
	return __temp;
};
vex3i vex3i::operator/(const int __vev) {
	vex3i __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	__temp.z = this->z / __vev;
	return __temp;
};
void vex3i::operator/=(const vex3i& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
	this->z /= __vev.z;
};
void vex3i::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
	this->z = std::abs(this->z);
}
void vex3i::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
	this->z = std::sqrt(this->z);
}
void vex3i::percent_(int __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
	this->z = this->z / 100 * __vev;
}
void vex3i::pow_(int __vev) {
	const vex3f temp = vex3f(this->x, this->y, this->z);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
		this->z *= temp.z;
	}
}
void vex3i::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->z = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex3i::atan2_(vex3i __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
	this->z = std::atan2(this->z, __vev.z);
}
void vex3i::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
	this->z = std::atan(this->z);
}
void vex3i::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
	this->z = std::asin(this->z);
}
void vex3i::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
	this->z = std::acos(this->z);
}
void vex3i::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
	this->z = std::tan(this->z);
}
void vex3i::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
	this->z = std::sin(this->z);
}
void vex3i::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
	this->z = std::cos(this->z);
}
vex3i vex3i::abs() {
	return vex3i(std::abs(this->x), std::abs(this->y), std::abs(this->z));
};
vex3i vex3i::sqrt() {
	return vex3i(std::sqrt(this->x), std::sqrt(this->y), std::sqrt(this->z));
};
vex3i vex3i::percent(int __vev) {
	return vex3i(this->x / 100 * __vev, this->y / 100 * __vev, this->z / 100 * __vev);
};
vex3i vex3i::pow(int __vev) {
	const vex3i temp = vex3i(this->x, this->y, this->z);
	vex3i ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3i vex3i::rand(int __vev2, int __vev3) {
	return vex3i(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex3i vex3i::atan2(vex3i __vev) {
	return vex3i(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y), std::atan2(this->z, __vev.z));
};
vex3i vex3i::atan() {
	return vex3i(std::atan(this->x), std::atan(this->y), std::atan(this->z));
};
vex3i vex3i::asin() {
	return vex3i(std::asin(this->x), std::asin(this->y), std::asin(this->z));
};
vex3i vex3i::acos() {
	return vex3i(std::acos(this->x), std::acos(this->y), std::acos(this->z));
};
vex3i vex3i::tan() {
	return vex3i(std::tan(this->x), std::tan(this->y), std::tan(this->z));
};
vex3i vex3i::sin() {
	return vex3i(std::sin(this->x), std::sin(this->y), std::sin(this->z));
};
vex3i vex3i::cos() {
	return vex3i(std::cos(this->x), std::cos(this->y), std::cos(this->z));
};
bool vex3i::isEmpty() {
	if (this->x == NULL && this->y == NULL && this->z == NULL)
		return true;
	else
		return false;
};
/*
// //////////////////////////// //
//								//
//		//		//////////		//
//		//		//				//
//		//		//				//
//		//		//				//
//		//////////////////		//
//				//		//		//
//				//		//		//
//				//		//		//
//		//////////		//		//
//								//
// //////////////////////////// //
*/
vex2f::vex2f() {
	x = y = 0;
};
vex2f::vex2f(float v1, float v2) {
	this->x = v1;
	this->y = v2;
};
vex2f::vex2f(float v1) {
	this->x = v1;
	this->y = v1;
};
void vex2f::operator=(float __vev) {
	this->x = __vev;
	this->y = __vev;
};
vex2f vex2f::operator+(vex2f __vev) {
	vex2f __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	return __temp;
};
vex2f vex2f::operator+(float __vev) {
	vex2f __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	return __temp;
};
void vex2f::operator+=(vex2f __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
};
void vex2f::operator+=(float __vev) {
	this->x += __vev;
	this->y += __vev;
};
void vex2f::operator++() {
	this->x += 1.0f;
	this->y += 1.0f;
};
vex2f vex2f::operator-(vex2f __vev) {
	vex2f __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	return __temp;
};
vex2f vex2f::operator-(float __vev) {
	vex2f __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	return __temp;
};
void vex2f::operator-=(vex2f __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
};
void vex2f::operator-=(float __vev) {
	this->x -= __vev;
	this->y -= __vev;
};
void vex2f::operator--() {
	this->x -= 1.0f;
	this->y -= 1.0f;
};
vex2f vex2f::operator*(vex2f __vev) {
	vex2f __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	return __temp;
};
void vex2f::operator*=(vex2f __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
};
void vex2f::operator*=(float __vev) {
	this->x *= __vev;
	this->y *= __vev;
};
vex2f vex2f::operator*(float __vev) {
	vex2f __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	return __temp;
};
vex2f vex2f::operator/(vex2f __vev) {
	vex2f __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	return __temp;
};
vex2f vex2f::operator/(float __vev) {
	vex2f __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	return __temp;
};
void vex2f::operator/=(vex2f __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
};
void vex2f::operator/=(float __vev) {
	this->x /= __vev;
	this->y /= __vev;
};
void vex2f::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
}
void vex2f::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
}
void vex2f::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
}
void vex2f::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
}
void vex2f::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
}
void vex2f::pow_(int __vev) {
	const vex2f temp = vex2f(this->x, this->y);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
	}
}
void vex2f::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex2f::atan2_(vex2f __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
}
void vex2f::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
}
void vex2f::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
}
void vex2f::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
}
void vex2f::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
}
void vex2f::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
}
void vex2f::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
}
vex2f vex2f::ceil() {
	return vex2f(std::ceil(this->x), std::ceil(this->y));
};
vex2f vex2f::floor() {
	return vex2f(std::floor(this->x), std::floor(this->y));
};
vex2f vex2f::abs() {
	return vex2f(std::abs(this->x), std::abs(this->y));
};
vex2f vex2f::sqrt() {
	return vex2f(std::sqrt(this->x), std::sqrt(this->y));
};
vex2f vex2f::percent(float __vev) {
	return vex2f(this->x / 100 * __vev, this->y / 100 * __vev);
};
vex2f vex2f::pow(int __vev) {
	const vex2f temp = vex2f(this->x, this->y);
	vex2f ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2f vex2f::rand(int __vev2, int __vev3) {
	return vex2f(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex2f vex2f::atan2(vex2f __vev) {
	return vex2f(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y));
};
vex2f vex2f::atan() {
	return vex2f(std::atan(this->x), std::atan(this->y));
};
vex2f vex2f::asin() {
	return vex2f(std::asin(this->x), std::asin(this->y));
};
vex2f vex2f::acos() {
	return vex2f(std::acos(this->x), std::acos(this->y));
};
vex2f vex2f::tan() {
	return vex2f(std::tan(this->x), std::tan(this->y));
};
vex2f vex2f::sin() {
	return vex2f(std::sin(this->x), std::sin(this->y));
};
vex2f vex2f::cos() {
	return vex2f(std::cos(this->x), std::cos(this->y));
};
bool vex2f::isEmpty() {
	if (this->x == NULL && this->y == NULL)
		return true;
	else
		return false;
};
vex2d::vex2d() {
	x = y = 0;
};
vex2d::vex2d(double v1, double v2) {
	this->x = v1;
	this->y = v2;
};
vex2d::vex2d(double v1) {
	this->x = v1;
	this->y = v1;
};
void vex2d::operator=(double __vev) {
	this->x = __vev;
	this->y = __vev;
};
vex2d vex2d::operator+(vex2d __vev) {
	vex2d __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	return __temp;
};
vex2d vex2d::operator+(double __vev) {
	vex2d __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	return __temp;
};
void vex2d::operator+=(vex2d __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
};
vex2d vex2d::operator-(vex2d __vev) {
	vex2d __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	return __temp;
};
vex2d vex2d::operator-(double __vev) {
	vex2d __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	return __temp;
};
void vex2d::operator-=(vex2d __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
};
vex2d vex2d::operator*(vex2d __vev) {
	vex2d __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	return __temp;
};
vex2d vex2d::operator*(double __vev) {
	vex2d __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	return __temp;
};
void vex2d::operator*=(vex2d __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
};
vex2d vex2d::operator/(vex2d __vev) {
	vex2d __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	return __temp;
};
vex2d vex2d::operator/(double __vev) {
	vex2d __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	return __temp;
};
void vex2d::operator/=(vex2d __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
};
void vex2d::ceil_() {
	this->x = std::ceil(this->x);
	this->y = std::ceil(this->y);
}
void vex2d::floor_() {
	this->x = std::floor(this->x);
	this->y = std::floor(this->y);
}
void vex2d::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
}
void vex2d::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
}
void vex2d::percent_(float __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
}
void vex2d::pow_(int __vev) {
	const vex2d temp = vex2d(this->x, this->y);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
	}
}
void vex2d::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex2d::atan2_(vex2d __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
}
void vex2d::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
}
void vex2d::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
}
void vex2d::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
}
void vex2d::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
}
void vex2d::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
}
void vex2d::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
}
vex2d vex2d::ceil() {
	return vex2d(std::ceil(this->x), std::ceil(this->y));
};
vex2d vex2d::floor() {
	return vex2d(std::floor(this->x), std::floor(this->y));
};
vex2d vex2d::abs() {
	return vex2d(std::abs(this->x), std::abs(this->y));
};
vex2d vex2d::sqrt() {
	return vex2d(std::sqrt(this->x), std::sqrt(this->y));
};
vex2d vex2d::percent(float __vev) {
	return vex2d(this->x / 100 * __vev, this->y / 100 * __vev);
};
vex2d vex2d::pow(int __vev) {
	const vex2d temp = vex2d(this->x, this->y);
	vex2d ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2d vex2d::rand(int __vev2, int __vev3) {
	return vex2d(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex2d vex2d::atan2(vex2d __vev) {
	return vex2d(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y));
};
vex2d vex2d::atan() {
	return vex2d(std::atan(this->x), std::atan(this->y));
};
vex2d vex2d::asin() {
	return vex2d(std::asin(this->x), std::asin(this->y));
};
vex2d vex2d::acos() {
	return vex2d(std::acos(this->x), std::acos(this->y));
};
vex2d vex2d::tan() {
	return vex2d(std::tan(this->x), std::tan(this->y));
};
vex2d vex2d::sin() {
	return vex2d(std::sin(this->x), std::sin(this->y));
};
vex2d vex2d::cos() {
	return vex2d(std::cos(this->x), std::cos(this->y));
};
bool vex2d::isEmpty() {
	if (this->x == NULL && this->y == NULL)
		return true;
	else
		return false;
};
vex2i::vex2i() {
	x = y = 0;
};
vex2i::vex2i(int v1, int v2) {
	this->x = v1;
	this->y = v2;
};
vex2i::vex2i(int v1) {
	this->x = v1;
	this->y = v1;
};
void vex2i::operator=(int __vev) {
	this->x = __vev;
	this->y = __vev;
};
vex2i vex2i::operator+(vex2i& __vev) {
	vex2i __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	return __temp;
};
vex2i vex2i::operator+(int __vev) {
	vex2i __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	return __temp;
};
void vex2i::operator+=(vex2i& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
};
vex2i vex2i::operator-(vex2i& __vev) {
	vex2i __temp;
	__temp.x = this->x - __vev.x;
	__temp.y = this->y - __vev.y;
	return __temp;
};
vex2i vex2i::operator-(int __vev) {
	vex2i __temp;
	__temp.x = this->x - __vev;
	__temp.y = this->y - __vev;
	return __temp;
};
void vex2i::operator-=(vex2i& __vev) {
	this->x -= __vev.x;
	this->y -= __vev.y;
};
vex2i vex2i::operator*(vex2i& __vev) {
	vex2i __temp;
	__temp.x = this->x * __vev.x;
	__temp.y = this->y * __vev.y;
	return __temp;
};
vex2i vex2i::operator*(int __vev) {
	vex2i __temp;
	__temp.x = this->x * __vev;
	__temp.y = this->y * __vev;
	return __temp;
};
void vex2i::operator*=(vex2i& __vev) {
	this->x *= __vev.x;
	this->y *= __vev.y;
};
vex2i vex2i::operator/(vex2i& __vev) {
	vex2i __temp;
	__temp.x = this->x / __vev.x;
	__temp.y = this->y / __vev.y;
	return __temp;
};
vex2i vex2i::operator/(int __vev) {
	vex2i __temp;
	__temp.x = this->x / __vev;
	__temp.y = this->y / __vev;
	return __temp;
};
void vex2i::operator/=(vex2i& __vev) {
	this->x /= __vev.x;
	this->y /= __vev.y;
};
vex2i vex2i::abs() {
	return vex2i(std::abs(this->x), std::abs(this->y));
};
vex2i vex2i::sqrt() {
	return vex2i(std::sqrt(this->x), std::sqrt(this->y));
};
vex2i vex2i::percent(int __vev) {
	return vex2i(this->x / 100 * __vev, this->y / 100 * __vev);
};
vex2i vex2i::pow(int __vev) {
	const vex2i temp = vex2i(this->x, this->y);
	vex2i ___asxa = temp;
	for (int __i = 0; __i < __vev; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2i vex2i::rand(int __vev2, int __vev3) {
	return vex2i(float(std::rand() % (__vev3 - __vev2) + __vev2), float(std::rand() % (__vev3 - __vev2) + __vev2));
};
vex2i vex2i::atan2(vex2i __vev) {
	return vex2i(std::atan2(this->x, __vev.x), std::atan2(this->y, __vev.y));
};
vex2i vex2i::atan() {
	return vex2i(std::atan(this->x), std::atan(this->y));
};
vex2i vex2i::asin() {
	return vex2i(std::asin(this->x), std::asin(this->y));
};
vex2i vex2i::acos() {
	return vex2i(std::acos(this->x), std::acos(this->y));
};
vex2i vex2i::tan() {
	return vex2i(std::tan(this->x), std::tan(this->y));
};
vex2i vex2i::sin() {
	return vex2i(std::sin(this->x), std::sin(this->y));
};
vex2i vex2i::cos() {
	return vex2i(std::cos(this->x), std::cos(this->y));
};
bool vex2i::isEmpty() {
	if (this->x == NULL && this->y == NULL)
		return true;
	else
		return false;
};
void vex2i::abs_() {
	this->x = std::abs(this->x);
	this->y = std::abs(this->y);
}
void vex2i::sqrt_() {
	this->x = std::sqrt(this->x);
	this->y = std::sqrt(this->y);
}
void vex2i::percent_(int __vev) {
	this->x = this->x / 100 * __vev;
	this->y = this->y / 100 * __vev;
}
void vex2i::pow_(int __vev) {
	const vex2d temp = vex2d(this->x, this->y);
	for (int __i = 0; __i < __vev; __i++) {
		this->x *= temp.x;
		this->y *= temp.y;
	}
}
void vex2i::rand_(int __vev2, int __vev3) {
	this->x = float(std::rand() % (__vev3 - __vev2) + __vev2);
	this->y = float(std::rand() % (__vev3 - __vev2) + __vev2);
}
void vex2i::atan2_(vex2i __vev) {
	this->x = std::atan2(this->x, __vev.x);
	this->y = std::atan2(this->y, __vev.y);
}
void vex2i::atan_() {
	this->x = std::atan(this->x);
	this->y = std::atan(this->y);
}
void vex2i::asin_() {
	this->x = std::asin(this->x);
	this->y = std::asin(this->y);
}
void vex2i::acos_() {
	this->x = std::acos(this->x);
	this->y = std::acos(this->y);
}
void vex2i::tan_() {
	this->x = std::tan(this->x);
	this->y = std::tan(this->y);
}
void vex2i::sin_() {
	this->x = std::sin(this->x);
	this->y = std::sin(this->y);
}
void vex2i::cos_() {
	this->x = std::cos(this->x);
	this->y = std::cos(this->y);
}
void vex2f::normalize() {
	if (this->x > this->y) {
		this->y /= this->x;
		this->x = 1;
	}
	else {
		this->x /= this->y;
		this->y = 1;
	};
}
void vex2d::normalize() {
	if (this->x > this->y) {
		this->y /= this->x;
		this->x = 1;
	}
	else {
		this->x /= this->y;
		this->y = 1;
	};
}
void vex2i::normalize() {
	if (this->x > this->y) {
		this->y /= this->x;
		this->x = 1;
	}
	else {
		this->x /= this->y;
		this->y = 1;
	};
}
void vex3f::normalize() {
	if (this->x > this->y && this->x > this->z) {
		this->y /= this->x;
		this->z /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z) {
		this->x /= this->y;
		this->z /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y) {
		this->x /= this->z;
		this->y /= this->z;
		this->z = 1;
	};
}
void vex3d::normalize() {
	if (this->x > this->y && this->x > this->z) {
		this->y /= this->x;
		this->z /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z) {
		this->x /= this->y;
		this->z /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y) {
		this->x /= this->z;
		this->y /= this->z;
		this->z = 1;
	};
}
void vex3i::normalize() {
	if (this->x > this->y && this->x > this->z) {
		this->y /= this->x;
		this->z /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z) {
		this->x /= this->y;
		this->z /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y) {
		this->x /= this->z;
		this->y /= this->z;
		this->z = 1;
	};
}
void vex4f::normalize() {
	if (this->x > this->y && this->x > this->z && this->x > this->w) {
		this->y /= this->x;
		this->z /= this->x;
		this->w /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z && this->x > this->w) {
		this->x /= this->y;
		this->z /= this->y;
		this->w /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y && this->x > this->w) {
		this->x /= this->z;
		this->y /= this->z;
		this->w /= this->z;
		this->z = 1;
	}
	else if (this->w > this->x && this->w > this->y && this->w > this->z) {
		this->x /= this->w;
		this->y /= this->w;
		this->z /= this->w;
		this->w = 1;
	};
}
void vex4d::normalize() {
	if (this->x > this->y && this->x > this->z && this->x > this->w) {
		this->y /= this->x;
		this->z /= this->x;
		this->w /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z && this->x > this->w) {
		this->x /= this->y;
		this->z /= this->y;
		this->w /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y && this->x > this->w) {
		this->x /= this->z;
		this->y /= this->z;
		this->w /= this->z;
		this->z = 1;
	}
	else if (this->w > this->x && this->w > this->y && this->w > this->z) {
		this->x /= this->w;
		this->y /= this->w;
		this->z /= this->w;
		this->w = 1;
	};
}
void vex4i::normalize() {
	if (this->x > this->y && this->x > this->z && this->x > this->w) {
		this->y /= this->x;
		this->z /= this->x;
		this->w /= this->x;
		this->x = 1;
	}
	else if (this->y > this->x && this->y > this->z && this->x > this->w) {
		this->x /= this->y;
		this->z /= this->y;
		this->w /= this->y;
		this->y = 1;
	}
	else if (this->z > this->x && this->z > this->y && this->x > this->w) {
		this->x /= this->z;
		this->y /= this->z;
		this->w /= this->z;
		this->z = 1;
	}
	else if (this->w > this->x && this->w > this->y && this->w > this->z) {
		this->x /= this->w;
		this->y /= this->w;
		this->z /= this->w;
		this->w = 1;
	};
}
vex2f vex2f::average() {
	return vex2f(this->x + this->y / 2);
};
vex2d vex2d::average() {
	return vex2d(this->x + this->y / 2);
};
vex2i vex2i::average() {
	return vex2i(this->x + this->y / 2);
};
vex3f vex3f::average() {
	return vex3f(this->x + this->y + this->z / 3);
};
vex3d vex3d::average() {
	return vex3d(this->x + this->y + this->z / 3);
};
vex3i vex3i::average() {
	return vex3i(this->x + this->y + this->z / 3);
};
vex4f vex4f::average() {
	return vex4f(this->x + this->y + this->z + this->w / 4);
};
vex4d vex4d::average() {
	return vex4d(this->x + this->y + this->z + this->w / 4);
};
vex4i vex4i::average() {
	return vex4i(this->x + this->y + this->z + this->w / 4);
};
void vex2f::average_() {
	this->x = this->x + this->y / 2;
	this->y = this->x + this->y / 2;
};
void vex2d::average_() {
	this->x = this->x + this->y / 2;
	this->y = this->x + this->y / 2;
};
void vex2i::average_() {
	this->x = this->x + this->y / 2;
	this->y = this->x + this->y / 2;
};
void vex3f::average_() {
	this->x = this->x + this->y + this->z / 3;
	this->y = this->x + this->y + this->z / 3;
	this->z = this->x + this->y + this->z / 3;
};
void vex3d::average_() {
	this->x = this->x + this->y + this->z / 3;
	this->y = this->x + this->y + this->z / 3;
	this->z = this->x + this->y + this->z / 3;
};
void vex3i::average_() {
	this->x = this->x + this->y + this->z / 3;
	this->y = this->x + this->y + this->z / 3;
	this->z = this->x + this->y + this->z / 3;
};
void vex4f::average_() {
	this->x = this->x + this->y + this->z + this->w / 4;
	this->y = this->x + this->y + this->z + this->w / 4;
	this->z = this->x + this->y + this->z + this->w / 4;
	this->w = this->x + this->y + this->z + this->w / 4;
};
void vex4d::average_() {
	this->x = this->x + this->y + this->z + this->w / 4;
	this->y = this->x + this->y + this->z + this->w / 4;
	this->z = this->x + this->y + this->z + this->w / 4;
	this->w = this->x + this->y + this->z + this->w / 4;
};
void vex4i::average_() {
	this->x = this->x + this->y + this->z + this->w / 4;
	this->y = this->x + this->y + this->z + this->w / 4;
	this->z = this->x + this->y + this->z + this->w / 4;
	this->w = this->x + this->y + this->z + this->w / 4;
};
bool vex2f::operator== (vex2f __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator== (float __vev) {
	if (this->x == __vev && this->y == __vev)
		return true;
	else
		return false;
};
bool vex2d::operator== (vex2d __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator== (double __vev) {
	if (this->x == __vev && this->y == __vev)
		return true;
	else
		return false;
};
bool vex2i::operator== (vex2i __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator== (int __vev) {
	if (this->x == __vev && this->y == __vev)
		return true;
	else
		return false;
};
bool vex2f::operator!= (vex2f __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator!= (float __vev) {
	if (this->x != __vev && this->y != __vev)
		return true;
	else
		return false;
};
bool vex2d::operator!= (vex2d __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator!= (double __vev) {
	if (this->x != __vev && this->y != __vev)
		return true;
	else
		return false;
};
bool vex2i::operator!= (vex2i __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator!= (int __vev) {
	if (this->x != __vev && this->y != __vev)
		return true;
	else
		return false;
};
bool vex2f::operator<= (vex2f __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator<= (float __vev) {
	if (this->x <= __vev && this->y <= __vev)
		return true;
	else
		return false;
};
bool vex2d::operator<= (vex2d __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator<= (double __vev) {
	if (this->x <= __vev && this->y <= __vev)
		return true;
	else
		return false;
};
bool vex2i::operator<= (vex2i __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator<= (int __vev) {
	if (this->x <= __vev && this->y <= __vev)
		return true;
	else
		return false;
};
bool vex2f::operator>= (vex2f __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator>= (float __vev) {
	if (this->x >= __vev && this->y >= __vev)
		return true;
	else
		return false;
};
bool vex2d::operator>= (vex2d __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator>= (double __vev) {
	if (this->x >= __vev && this->y >= __vev)
		return true;
	else
		return false;
};
bool vex2i::operator>= (vex2i __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator>= (int __vev) {
	if (this->x >= __vev && this->y >= __vev)
		return true;
	else
		return false;
};
bool vex2f::operator< (vex2f __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator< (float __vev) {
	if (this->x < __vev && this->y < __vev)
		return true;
	else
		return false;
};
bool vex2d::operator< (vex2d __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator< (double __vev) {
	if (this->x < __vev && this->y < __vev)
		return true;
	else
		return false;
};
bool vex2i::operator< (vex2i __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator< (int __vev) {
	if (this->x < __vev && this->y < __vev)
		return true;
	else
		return false;
};
bool vex2f::operator> (vex2f __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator> (float __vev) {
	if (this->x > __vev && this->y > __vev)
		return true;
	else
		return false;
};
bool vex2d::operator> (vex2d __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator> (double __vev) {
	if (this->x > __vev && this->y > __vev)
		return true;
	else
		return false;
};
bool vex2i::operator> (vex2i __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator> (int __vev) {
	if (this->x > __vev && this->y > __vev)
		return true;
	else
		return false;
};
bool vex3f::operator== (vex3f __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator== (float __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev)
		return true;
	else
		return false;
};
bool vex3d::operator== (vex3d __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator== (double __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev)
		return true;
	else
		return false;
};
bool vex3i::operator== (vex3i __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator== (int __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev)
		return true;
	else
		return false;
};
bool vex3f::operator!= (vex3f __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator!= (float __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev)
		return true;
	else
		return false;
};
bool vex3d::operator!= (vex3d __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator!= (double __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev)
		return true;
	else
		return false;
};
bool vex3i::operator!= (vex3i __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator!= (int __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev)
		return true;
	else
		return false;
};
bool vex3f::operator<= (vex3f __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator<= (float __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev)
		return true;
	else
		return false;
};
bool vex3d::operator<= (vex3d __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator<= (double __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev)
		return true;
	else
		return false;
};
bool vex3i::operator<= (vex3i __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator<= (int __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev)
		return true;
	else
		return false;
};
bool vex3f::operator>= (vex3f __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator>= (float __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev)
		return true;
	else
		return false;
};
bool vex3d::operator>= (vex3d __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator>= (double __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev)
		return true;
	else
		return false;
};
bool vex3i::operator>= (vex3i __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator>= (int __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev)
		return true;
	else
		return false;
};
bool vex3f::operator< (vex3f __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator< (float __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev)
		return true;
	else
		return false;
};
bool vex3d::operator< (vex3d __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator< (double __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev)
		return true;
	else
		return false;
};
bool vex3i::operator< (vex3i __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator< (int __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev)
		return true;
	else
		return false;
};
bool vex3f::operator> (vex3f __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z < __vev.z)
		return true;
	else
		return false;
};
bool vex3f::operator> (float __vev) {
	if (this->x > __vev && this->y > __vev && this->z < __vev)
		return true;
	else
		return false;
};
bool vex3d::operator> (vex3d __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z > __vev.z)
		return true;
	else
		return false;
};
bool vex3d::operator> (double __vev) {
	if (this->x > __vev && this->y > __vev && this->z > __vev)
		return true;
	else
		return false;
};
bool vex3i::operator> (vex3i __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z > __vev.z)
		return true;
	else
		return false;
};
bool vex3i::operator> (int __vev) {
	if (this->x > __vev && this->y > __vev && this->z > __vev)
		return true;
	else
		return false;
};
bool vex4f::operator== (vex4f __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z && this->w == __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator== (float __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev && this->w == __vev)
		return true;
	else
		return false;
};
bool vex4d::operator== (vex4d __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z && this->w == __vev.w)
		return true;
	else
		return false;
};
bool vex4d::operator== (double __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev && this->w == __vev)
		return true;
	else
		return false;
};
bool vex4i::operator== (vex4i __vev) {
	if (this->x == __vev.x && this->y == __vev.y && this->z == __vev.z && this->w == __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator== (int __vev) {
	if (this->x == __vev && this->y == __vev && this->z == __vev && this->w == __vev)
		return true;
	else
		return false;
};
bool vex4f::operator!= (vex4f __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z && this->w != __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator!= (float __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev && this->w != __vev)
		return true;
	else
		return false;
};
bool vex4d::operator!= (vex4d __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z && this->w != __vev.w)
		return true;
	else
		return false;
};
bool vex4d::operator!= (double __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev && this->w != __vev)
		return true;
	else
		return false;
};
bool vex4i::operator!= (vex4i __vev) {
	if (this->x != __vev.x && this->y != __vev.y && this->z != __vev.z && this->w != __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator!= (int __vev) {
	if (this->x != __vev && this->y != __vev && this->z != __vev && this->w != __vev)
		return true;
	else
		return false;
};
bool vex4f::operator<= (vex4f __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z && this->w <= __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator<= (float __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev && this->w <= __vev)
		return true;
	else
		return false;
};
bool vex4d::operator<= (vex4d __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z && this->w <= __vev.w)
		return true;
	else
		return false;
};
bool vex4d::operator<= (double __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev && this->w <= __vev)
		return true;
	else
		return false;
};
bool vex4i::operator<= (vex4i __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y && this->z <= __vev.z && this->w <= __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator<= (int __vev) {
	if (this->x <= __vev && this->y <= __vev && this->z <= __vev && this->w <= __vev)
		return true;
	else
		return false;
};
bool vex4f::operator>= (vex4f __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z && this->w >= __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator>= (float __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev && this->w >= __vev)
		return true;
	else
		return false;
};
bool vex4d::operator>= (vex4d __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z && this->w >= __vev.z)
		return true;
	else
		return false;
};
bool vex4d::operator>= (double __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev && this->w >= __vev)
		return true;
	else
		return false;
};
bool vex4i::operator>= (vex4i __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y && this->z >= __vev.z && this->w >= __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator>= (int __vev) {
	if (this->x >= __vev && this->y >= __vev && this->z >= __vev && this->w >= __vev)
		return true;
	else
		return false;
};
bool vex4f::operator< (vex4f __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z && this->w < __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator< (float __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev && this->w < __vev)
		return true;
	else
		return false;
};
bool vex4d::operator< (vex4d __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z && this->w < __vev.w)
		return true;
	else
		return false;
};
bool vex4d::operator< (double __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev && this->w < __vev)
		return true;
	else
		return false;
};
bool vex4i::operator< (vex4i __vev) {
	if (this->x < __vev.x && this->y < __vev.y && this->z < __vev.z && this->w < __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator< (int __vev) {
	if (this->x < __vev && this->y < __vev && this->z < __vev && this->w < __vev)
		return true;
	else
		return false;
};
bool vex4f::operator> (vex4f __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z < __vev.z && this->w > __vev.w)
		return true;
	else
		return false;
};
bool vex4f::operator> (float __vev) {
	if (this->x > __vev && this->y > __vev && this->z < __vev && this->w > __vev)
		return true;
	else
		return false;
};
bool vex4d::operator> (vex4d __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z > __vev.z && this->w > __vev.w)
		return true;
	else
		return false;
};
bool vex4d::operator> (double __vev) {
	if (this->x > __vev && this->y > __vev && this->z > __vev && this->w > __vev)
		return true;
	else
		return false;
};
bool vex4i::operator> (vex4i __vev) {
	if (this->x > __vev.x && this->y > __vev.y && this->z > __vev.z && this->w > __vev.w)
		return true;
	else
		return false;
};
bool vex4i::operator> (int __vev) {
	if (this->x > __vev && this->y > __vev && this->z > __vev && this->w > __vev)
		return true;
	else
		return false;
};
void vex2f::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
};
void vex2f::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
};
void vex2f::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
};
void vex2f::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
};
void vex2f::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
};
void vex2d::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
};
void vex2d::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
};
void vex2d::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
};
void vex2d::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
};
void vex2d::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
};
void vex2i::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
};
void vex2i::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
};
void vex2i::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
};
void vex3f::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
};
void vex3f::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
	this->z = std::round(this->z);
};
void vex3f::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
	this->z = std::trunc(this->z);
};
void vex3f::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
};
void vex3f::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
};
void vex3d::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
};
void vex3d::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
	this->z = std::round(this->z);
};
void vex3d::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
	this->z = std::trunc(this->z);
};
void vex3d::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
};
void vex3d::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
};
void vex3i::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
};
void vex3i::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
};
void vex3i::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
};
void vex4f::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
	this->w = std::log(this->w);
};
void vex4f::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
	this->z = std::round(this->z);
	this->w = std::round(this->w);
};
void vex4f::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
	this->z = std::trunc(this->z);
	this->w = std::trunc(this->w);
};
void vex4f::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
	this->w = std::exp(this->w);
};
void vex4f::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
	this->w = std::cbrt(this->w);
};
void vex4d::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
	this->w = std::log(this->w);
};
void vex4d::round_() {
	this->x = std::round(this->x);
	this->y = std::round(this->y);
	this->z = std::round(this->z);
	this->w = std::round(this->w);
};
void vex4d::trunc_() {
	this->x = std::trunc(this->x);
	this->y = std::trunc(this->y);
	this->z = std::trunc(this->z);
	this->w = std::trunc(this->w);
};
void vex4d::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
	this->w = std::exp(this->w);
};
void vex4d::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
	this->w = std::cbrt(this->w);
};
void vex4i::log_() {
	this->x = std::log(this->x);
	this->y = std::log(this->y);
	this->z = std::log(this->z);
	this->w = std::log(this->w);
};
void vex4i::exp_() {
	this->x = std::exp(this->x);
	this->y = std::exp(this->y);
	this->z = std::exp(this->z);
	this->w = std::exp(this->w);
};
void vex4i::cbrt_() {
	this->x = std::cbrt(this->x);
	this->y = std::cbrt(this->y);
	this->z = std::cbrt(this->z);
	this->w = std::cbrt(this->w);
};
vex2f vex2f::log() {
	return vex2f(std::log(this->x), std::log(this->y));
};
vex2f vex2f::round() {
	return vex2f(std::round(this->x), std::round(this->y));
};
vex2f vex2f::trunc() {
	return vex2f(std::trunc(this->x), std::trunc(this->y));
};
vex2f vex2f::exp() {
	return vex2f(std::exp(this->x), std::exp(this->y));
};
vex2f vex2f::cbrt() {
	return vex2f(std::cbrt(this->x), std::cbrt(this->y));
};
vex2d vex2d::log() {
	return vex2d(std::log(this->x), std::log(this->y));
};
vex2d vex2d::round() {
	return vex2d(std::round(this->x), std::round(this->y));
};
vex2d vex2d::trunc() {
	return vex2d(std::trunc(this->x), std::trunc(this->y));
};
vex2d vex2d::exp() {
	return vex2d(std::exp(this->x), std::exp(this->y));
};
vex2d vex2d::cbrt() {
	return vex2d(std::cbrt(this->x), std::cbrt(this->y));
};
vex2i vex2i::log() {
	return vex2i(std::log(this->x), std::log(this->y));
};
vex2i vex2i::exp() {
	return vex2i(std::exp(this->x), std::exp(this->y));
};
vex2i vex2i::cbrt() {
	return vex2i(std::cbrt(this->x), std::cbrt(this->y));
};
vex3f vex3f::log() {
	return vex3f(std::log(this->x), std::log(this->y), std::log(this->z));
};
vex3f vex3f::round() {
	return vex3f(std::round(this->x), std::round(this->y), std::round(this->z));
};
vex3f vex3f::trunc() {
	return vex3f(std::trunc(this->x), std::trunc(this->y), std::trunc(this->z));
};
vex3f vex3f::exp() {
	return vex3f(std::exp(this->x), std::exp(this->y), std::exp(this->z));
};
vex3f vex3f::cbrt() {
	return vex3f(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z));
};
vex3d vex3d::log() {
	return vex3d(std::log(this->x), std::log(this->y), std::log(this->z));
};
vex3d vex3d::round() {
	return vex3d(std::round(this->x), std::round(this->y), std::round(this->z));
};
vex3d vex3d::trunc() {
	return vex3d(std::trunc(this->x), std::trunc(this->y), std::trunc(this->z));
};
vex3d vex3d::exp() {
	return vex3d(std::exp(this->x), std::exp(this->y), std::exp(this->z));
};
vex3d vex3d::cbrt() {
	return vex3d(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z));
};
vex3i vex3i::log() {
	return vex3i(std::log(this->x), std::log(this->y), std::log(this->z));
};
vex3i vex3i::exp() {
	return vex3i(std::exp(this->x), std::exp(this->y), std::exp(this->z));
};
vex3i vex3i::cbrt() {
	return vex3i(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z));
};
vex4f vex4f::log() {
	return vex4f(std::log(this->x), std::log(this->y), std::log(this->z), std::log(this->w));
};
vex4f vex4f::round() {
	return vex4f(std::round(this->x), std::round(this->y), std::round(this->z), std::round(this->w));
};
vex4f vex4f::trunc() {
	return vex4f(std::trunc(this->x), std::trunc(this->y), std::trunc(this->w));
};
vex4f vex4f::exp() {
	return vex4f(std::exp(this->x), std::exp(this->y), std::exp(this->z), std::exp(this->w));
};
vex4f vex4f::cbrt() {
	return vex4f(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z), std::cbrt(this->w));
};
vex4d vex4d::log() {
	return vex4d(std::log(this->x), std::log(this->y), std::log(this->z), std::log(this->w));
};
vex4d vex4d::round() {
	return vex4d(std::round(this->x), std::round(this->y), std::round(this->z), std::round(this->w));
};
vex4d vex4d::trunc() {
	return vex4d(std::trunc(this->x), std::trunc(this->y), std::trunc(this->w));
};
vex4d vex4d::exp() {
	return vex4d(std::exp(this->x), std::exp(this->y), std::exp(this->z), std::exp(this->w));
};
vex4d vex4d::cbrt() {
	return vex4d(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z), std::cbrt(this->w));
};
vex4i vex4i::log() {
	return vex4i(std::log(this->x), std::log(this->y), std::log(this->z), std::log(this->w));
};
vex4i vex4i::exp() {
	return vex4i(std::exp(this->x), std::exp(this->y), std::exp(this->z), std::exp(this->w));
};
vex4i vex4i::cbrt() {
	return vex4i(std::cbrt(this->x), std::cbrt(this->y), std::cbrt(this->z), std::cbrt(this->w));
};



/*
#ifdef XS_USE_GLM
vex2f::vex2f(glm::vec2 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2f::vex2f(glm::vec3 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2f::vex2f(glm::vec4 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2f vex2f::operator+(glm::vec2 __vev) {
	return vex2f(this->x +__vev.x, this->y + __vev.y);
};
vex2f vex2f::operator-(glm::vec2 __vev) {
	return vex2f(this->x - __vev.x, this->y - __vev.y);
};
vex2f vex2f::operator*(glm::vec2 __vev) {
	return vex2f(this->x * __vev.x, this->y * __vev.y);
};
vex2f vex2f::operator/(glm::vec2 __vev) {
	return vex2f(this->x / __vev.x, this->y / __vev.y);
};
void vex2f::operator+=(glm::vec2 __vev) {
	this->x += __vev.x;
	this->x += __vev.y;
};
void vex2f::operator-=(glm::vec2 __vev) {
	this->x -= __vev.x;
	this->x -= __vev.y;
};
void vex2f::operator*=(glm::vec2 __vev) {
	this->x *= __vev.x;
	this->x *= __vev.y;
};
void vex2f::operator/=(glm::vec2 __vev) {
	this->x /= __vev.x;
	this->x /= __vev.y;
};
bool vex2f::operator==(glm::vec2 __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator!=(glm::vec2 __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator<=(glm::vec2 __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator>=(glm::vec2 __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator<(glm::vec2 __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2f::operator>(glm::vec2 __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
vex2d::vex2d(glm::vec2 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2d::vex2d(glm::vec3 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2d::vex2d(glm::vec4 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2d vex2d::operator+(glm::vec2 __vev) {
	return vex2d(this->x + __vev.x, this->y + __vev.y);
};
vex2d vex2d::operator-(glm::vec2 __vev) {
	return vex2d(this->x - __vev.x, this->y - __vev.y);
};
vex2d vex2d::operator*(glm::vec2 __vev) {
	return vex2d(this->x * __vev.x, this->y * __vev.y);
};
vex2d vex2d::operator/(glm::vec2 __vev) {
	return vex2d(this->x / __vev.x, this->y / __vev.y);
};
void vex2d::operator+=(glm::vec2 __vev) {
	this->x += __vev.x;
	this->x += __vev.y;
};
void vex2d::operator-=(glm::vec2 __vev) {
	this->x -= __vev.x;
	this->x -= __vev.y;
};
void vex2d::operator*=(glm::vec2 __vev) {
	this->x *= __vev.x;
	this->x *= __vev.y;
};
void vex2d::operator/=(glm::vec2 __vev) {
	this->x /= __vev.x;
	this->x /= __vev.y;
};
bool vex2d::operator==(glm::vec2 __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator!=(glm::vec2 __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator<=(glm::vec2 __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator>=(glm::vec2 __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator<(glm::vec2 __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2d::operator>(glm::vec2 __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
// ////////////////////////////// //
vex2i::vex2i(glm::vec2 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2i::vex2i(glm::vec3 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2i::vex2i(glm::vec4 __vev) {
	x = __vev.x;
	y = __vev.y;
};
vex2i vex2i::operator+(glm::vec2 __vev) {
	return vex2i(this->x + __vev.x, this->y + __vev.y);
};
vex2i vex2i::operator-(glm::vec2 __vev) {
	return vex2i(this->x - __vev.x, this->y - __vev.y);
};
vex2i vex2i::operator*(glm::vec2 __vev) {
	return vex2i(this->x * __vev.x, this->y * __vev.y);
};
vex2i vex2i::operator/(glm::vec2 __vev) {
	return vex2i(this->x / __vev.x, this->y / __vev.y);
};
void vex2i::operator+=(glm::vec2 __vev) {
	this->x += __vev.x;
	this->x += __vev.y;
};
void vex2i::operator-=(glm::vec2 __vev) {
	this->x -= __vev.x;
	this->x -= __vev.y;
};
void vex2i::operator*=(glm::vec2 __vev) {
	this->x *= __vev.x;
	this->x *= __vev.y;
};
void vex2i::operator/=(glm::vec2 __vev) {
	this->x /= __vev.x;
	this->x /= __vev.y;
};
bool vex2i::operator==(glm::vec2 __vev) {
	if (this->x == __vev.x && this->y == __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator!=(glm::vec2 __vev) {
	if (this->x != __vev.x && this->y != __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator<=(glm::vec2 __vev) {
	if (this->x <= __vev.x && this->y <= __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator>=(glm::vec2 __vev) {
	if (this->x >= __vev.x && this->y >= __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator<(glm::vec2 __vev) {
	if (this->x < __vev.x && this->y < __vev.y)
		return true;
	else
		return false;
};
bool vex2i::operator>(glm::vec2 __vev) {
	if (this->x > __vev.x && this->y > __vev.y)
		return true;
	else
		return false;
};
#endif
*/