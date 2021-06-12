vex4f::vex4f() { x = y = z = w = 0; };
vex4f::vex4f(float v1, float v2, float v3, float v4) { x = v1; y = v2; z = v3; w = v4; };
vex4f::vex4f(float v1, float v2, float v3) { x = v1; y = v2; z = v3; };
vex4f::vex4f(float v1, float v2) { x = v1; y = v2; };
vex4f::vex4f(float v1) { x = v1; y = v1; z = v1; w = v1; };
void vex4f::operator=(float v) { x = v; y = v; z = v; w = v; };
vex4f vex4f::operator+(vex4f v) { return vex4f(x + v.x, y + v.y, z + v.z, w + v.w); };
vex4f vex4f::operator+(float v) { return vex4f(x + v, y + v, z + v, w + v); };
void vex4f::operator+=(vex4f v) { x += v.x; y += v.y; z += v.z; w += v.w; };
vex4f vex4f::operator-(vex4f v) { return vex4f(x - v.x, y - v.y, z - v.z, w - v.w); };
vex4f vex4f::operator-(float v) { return vex4f(x - v, y - v, z - v, w - v); };
void vex4f::operator-=(vex4f v) { x -= v.x; y -= v.y; z -= v.z; w -= v.w; };
vex4f vex4f::operator*(vex4f v) { return vex4f(x * v.x, y * v.y, z * v.z, w * v.w); };
vex4f vex4f::operator*(float v) { return vex4f(x * v, y * v, z * v, w * v); };
void vex4f::operator*=(vex4f v) { x *= v.x; y *= v.y; z *= v.z; w *= v.w; };
vex4f vex4f::operator/(vex4f v) { return vex4f(x / v.x, y / v.y, z / v.z, w / v.w); };
vex4f vex4f::operator/(float v) { return vex4f(x / v, y / v, z / v, w / v); };
void vex4f::operator/=(vex4f v) { x /= v.x; y /= v.y; z /= v.z; w /= v.w; };
void vex4f::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
	z = std::ceil(z);
	w = std::ceil(w);
}
void vex4f::floor_() {
	x = std::floor(x);
	y = std::floor(y);
	z = std::floor(z);
	w = std::floor(w);
}
void vex4f::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
	w = std::abs(w);
}
void vex4f::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
	w = std::sqrt(w);
}
void vex4f::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
	w = w / 100 * v;
}
void vex4f::pow_(int v) {
	const vex4f temp = vex4f(x, y, z, w);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
		w *= temp.w;
	}
}
void vex4f::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
	w = float(std::rand() % (v3 - v2) + v2);
}
void vex4f::atan2_(vex4f v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
	w = std::atan2(w, v.w);
}
void vex4f::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
	w = std::atan(w);
}
void vex4f::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
	w = std::asin(w);
}
void vex4f::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
	w = std::acos(w);
}
void vex4f::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
	w = std::tan(w);
}
void vex4f::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
	w = std::sin(w);
}
void vex4f::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
	w = std::cos(w);
}
vex4f vex4f::ceil() { return vex4f(std::ceil(x), std::ceil(y), std::ceil(z), std::ceil(w)); };
vex4f vex4f::floor() { return vex4f(std::floor(x), std::floor(y), std::floor(z), std::floor(w)); };
vex4f vex4f::abs() { return vex4f(std::abs(x), std::abs(y), std::abs(z), std::abs(w)); };
vex4f vex4f::sqrt() { return vex4f(std::sqrt(x), std::sqrt(y), std::sqrt(z), std::sqrt(w)); };
vex4f vex4f::percent(float v) { return vex4f(x / 100 * v, y / 100 * v, z / 100 * v, w / 100 * v); };
vex4f vex4f::pow(int v) {
	const vex4f temp = vex4f(x, y, z, w);
	vex4f ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4f vex4f::rand(int v2, int v3) { return vex4f(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2)); };
vex4f vex4f::atan2(vex4f v) { return vex4f(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z), std::atan2(w, v.w)); };
vex4f vex4f::atan() { return vex4f(std::atan(x), std::atan(y), std::atan(z), std::atan(w)); };
vex4f vex4f::asin() { return vex4f(std::asin(x), std::asin(y), std::asin(z), std::asin(w)); };
vex4f vex4f::acos() { return vex4f(std::acos(x), std::acos(y), std::acos(z), std::acos(w)); };
vex4f vex4f::tan() { return vex4f(std::tan(x), std::tan(y), std::tan(z), std::tan(w)); };
vex4f vex4f::sin() { return vex4f(std::sin(x), std::sin(y), std::sin(z), std::sin(w)); };
vex4f vex4f::cos() { return vex4f(std::cos(x), std::cos(y), std::cos(z), std::cos(w)); };
bool vex4f::isEmpty() {
	if (x == NULL && y == NULL && z == NULL && w == NULL)
		return true;
	else
		return false;
};
vex4d::vex4d() { x = y = z = w = 0; };
vex4d::vex4d(double v1, double v2, double v3, double v4) { x = v1; y = v2; z = v3; w = v4; };
vex4d::vex4d(double v1, double v2, double v3) { x = v1; y = v2; z = v3; };
vex4d::vex4d(double v1, double v2) { x = v1; y = v2; };
vex4d::vex4d(double v1) { x = v1; y = v1; z = v1; w = v1; };
void vex4d::operator=(double v) {
	x = v;
	y = v;
	z = v;
	w = v;
};
vex4d vex4d::operator+(vex4d v) { return vex4d(x + v.x, y + v.y, z + v.z, w + v.w); };
vex4d vex4d::operator+(double v) { return vex4d(x + v, y + v, z + v, w + v); };
void vex4d::operator+=(vex4d v) { x += v.x; y += v.y; z += v.z; w += v.w; };
vex4d vex4d::operator-(vex4d v) { return vex4d(x - v.x, y - v.y, z - v.z, w - v.w); };
vex4d vex4d::operator-(double v) { return vex4d(x - v, y - v, z - v, w - v); };
void vex4d::operator-=(vex4d v) { x -= v.x; y -= v.y; z -= v.z; w -= v.w; };
vex4d vex4d::operator*(vex4d v) { return vex4d(x * v.x, y * v.y, z * v.z, w * v.w); };
vex4d vex4d::operator*(double v) { return vex4d(x * v, y * v, z * v, w * v); };
void vex4d::operator*=(vex4d v) { x *= v.x; y *= v.y; z *= v.z; w *= v.w; };
vex4d vex4d::operator/(vex4d v) { return vex4d(x / v.x, y / v.y, z / v.z, w / v.w); };
vex4d vex4d::operator/(double v) { return vex4d(x / v, y / v, z / v, w / v); };
void vex4d::operator/=(vex4d v) { x /= v.x; y /= v.y; z /= v.z; w /= v.w; };
void vex4d::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
	z = std::ceil(z);
	w = std::ceil(w);
}
void vex4d::floor_() {
	x = std::floor(x);
	y = std::floor(y);
	z = std::floor(z);
	w = std::floor(w);
}
void vex4d::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
	w = std::abs(w);
}
void vex4d::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
	w = std::sqrt(w);
}
void vex4d::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
	w = w / 100 * v;
}
void vex4d::pow_(int v) {
	const vex4d temp = vex4d(x, y, z, w);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
		w *= temp.w;
	}
}
void vex4d::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
	w = float(std::rand() % (v3 - v2) + v2);
}
void vex4d::atan2_(vex4d v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
	w = std::atan2(w, v.w);
}
void vex4d::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
	w = std::atan(w);
}
void vex4d::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
	w = std::asin(w);
}
void vex4d::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
	w = std::acos(w);
}
void vex4d::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
	w = std::tan(w);
}
void vex4d::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
	w = std::sin(w);
}
void vex4d::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
	w = std::cos(w);
}
vex4d vex4d::ceil() {
	return vex4d(std::ceil(x), std::ceil(y), std::ceil(z), std::ceil(w));
};
vex4d vex4d::floor() {
	return vex4d(std::floor(x), std::floor(y), std::floor(z), std::floor(w));
};
vex4d vex4d::abs() {
	return vex4d(std::abs(x), std::abs(y), std::abs(z), std::abs(w));
};
vex4d vex4d::sqrt() {
	return vex4d(std::sqrt(x), std::sqrt(y), std::sqrt(z), std::sqrt(w));
};
vex4d vex4d::percent(float v) {
	return vex4d(x / 100 * v, y / 100 * v, z / 100 * v, w / 100 * v);
};
vex4d vex4d::pow(int v) {
	const vex4d temp = vex4d(x, y, z, w);
	vex4d ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4d vex4d::rand(int v2, int v3) {
	return vex4d(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex4d vex4d::atan2(vex4d v) {
	return vex4d(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z), std::atan2(w, v.w));
};
vex4d vex4d::atan() {
	return vex4d(std::atan(x), std::atan(y), std::atan(z), std::atan(w));
};
vex4d vex4d::asin() {
	return vex4d(std::asin(x), std::asin(y), std::asin(z), std::asin(w));
};
vex4d vex4d::acos() {
	return vex4d(std::acos(x), std::acos(y), std::acos(z), std::acos(w));
};
vex4d vex4d::tan() {
	return vex4d(std::tan(x), std::tan(y), std::tan(z), std::tan(w));
};
vex4d vex4d::sin() {
	return vex4d(std::sin(x), std::sin(y), std::sin(z), std::sin(w));
};
vex4d vex4d::cos() {
	return vex4d(std::cos(x), std::cos(y), std::cos(z), std::cos(w));
};
bool vex4d::isEmpty() {
	if (x == NULL && y == NULL && z == NULL && w == NULL)
		return true;
	else
		return false;
};
vex4i::vex4i() {
	x = y = z = w = 0;
};
vex4i::vex4i(int v1, int v2, int v3, int v4) {
	x = v1;
	y = v2;
	z = v3;
	w = v4;
};
vex4i::vex4i(int v1, int v2, int v3) {
	x = v1;
	y = v2;
	z = v3;
};
vex4i::vex4i(int v1, int v2) {
	x = v1;
	y = v2;
};
vex4i::vex4i(int v1) {
	x = v1;
	y = v1;
	z = v1;
	w = v1;
};
void vex4i::operator=(int v) {
	x = v;
	y = v;
	z = v;
	w = v;
};
vex4i vex4i::operator+(vex4i v) { return vex4i(x + v.x, y + v.y, z + v.z, w + v.w); };
vex4i vex4i::operator+(int v)  { return vex4i(x + v, y + v, z + v, w + v); };
void vex4i::operator+=(vex4i v) {x += v.x;y += v.y;z += v.z;w += v.w;};
vex4i vex4i::operator-(vex4i v) { return vex4i(x - v.x, y - v.y, z - v.z, w - v.w); };
vex4i vex4i::operator-(int v)  { return vex4i(x - v, y - v, z - v, w - v); };
void vex4i::operator-=(vex4i v) { x -= v.x; y -= v.y; z -= v.z; w -= v.w; };
vex4i vex4i::operator*(vex4i v) { return vex4i(x * v.x, y * v.y, z * v.z, w * v.w); };
vex4i vex4i::operator*(int v)  { return vex4i(x * v, y * v, z * v, w * v); };
void vex4i::operator*=(vex4i v) { x *= v.x; y *= v.y; z *= v.z; w *= v.w; };
vex4i vex4i::operator/(vex4i v) { return vex4i(x / v.x, y / v.y, z / v.z, w / v.w); };
vex4i vex4i::operator/(int v)  { return vex4i(x / v, y / v, z / v, w / v); };
void vex4i::operator/=(vex4i v) { x /= v.x; y /= v.y; z /= v.z; w /= v.w; };
void vex4i::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
	w = std::abs(w);
}
void vex4i::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
	w = std::sqrt(w);
}
void vex4i::percent_(int v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
	w = w / 100 * v;
}
void vex4i::pow_(int v) {
	const vex4i temp = vex4i(x, y, z, w);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
		w *= temp.w;
	}
}
void vex4i::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
	w = float(std::rand() % (v3 - v2) + v2);
}
void vex4i::atan2_(vex4i v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
	w = std::atan2(w, v.w);
}
void vex4i::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
	w = std::atan(w);
}
void vex4i::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
	w = std::asin(w);
}
void vex4i::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
	w = std::acos(w);
}
void vex4i::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
	w = std::tan(w);
}
void vex4i::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
	w = std::sin(w);
}
void vex4i::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
	w = std::cos(w);
}
vex4i vex4i::abs() {
	return vex4i(std::abs(x), std::abs(y), std::abs(z), std::abs(w));
};
vex4i vex4i::sqrt() {
	return vex4i(std::sqrt(x), std::sqrt(y), std::sqrt(z), std::sqrt(w));
};
vex4i vex4i::percent(int v) {
	return vex4i(x / 100 * v, y / 100 * v, z / 100 * v, w / 100 * v);
};
vex4i vex4i::pow(int v) {
	const vex4i temp = vex4i(x, y, z, w);
	vex4i ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
		___asxa.w *= temp.w;
	}
	return ___asxa;
};
vex4i vex4i::rand(int v2, int v3) {
	return vex4i(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex4i vex4i::atan2(vex4i v) {
	return vex4i(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z), std::atan2(w, v.w));
};
vex4i vex4i::atan() {
	return vex4i(std::atan(x), std::atan(y), std::atan(z), std::atan(w));
};
vex4i vex4i::asin() {
	return vex4i(std::asin(x), std::asin(y), std::asin(z), std::asin(w));
};
vex4i vex4i::acos() {
	return vex4i(std::acos(x), std::acos(y), std::acos(z), std::acos(w));
};
vex4i vex4i::tan() {
	return vex4i(std::tan(x), std::tan(y), std::tan(z), std::tan(w));
};
vex4i vex4i::sin() {
	return vex4i(std::sin(x), std::sin(y), std::sin(z), std::sin(w));
};
vex4i vex4i::cos() {
	return vex4i(std::cos(x), std::cos(y), std::cos(z), std::cos(w));
};
bool vex4i::isEmpty() {
	if (x == NULL && y == NULL && z == NULL && w == NULL)
		return true;
	else
		return false;
};
vex3f::vex3f() {
	x = y = z = 0;
};
vex3f::vex3f(float v1, float v2, float v3) {
	x = v1;
	y = v2;
	z = v3;
};
vex3f::vex3f(float v1, float v2) {
	x = v1;
	y = v2;
};
vex3f::vex3f(float v1) {
	x = v1;
	y = v1;
	z = v1;
};
void vex3f::operator=(float v) {
	x = v;
	y = v;
	z = v;
};
vex3f vex3f::operator+(vex3f v) { return vex3f(x + v.x, y + v.y, z + v.z); };
vex3f vex3f::operator+(float v) { return vex3f(x + v, y + v, z + v); };
void vex3f::operator+=(vex3f v) { x += v.x; y += v.y; z += v.z; };
vex3f vex3f::operator-(vex3f v) { return vex3f(x - v.x, y - v.y, z - v.z); };
vex3f vex3f::operator-(float v) { return vex3f(x - v, y - v, z - v); };
void vex3f::operator-=(vex3f v) { x -= v.x; y -= v.y; z -= v.z; };
vex3f vex3f::operator*(vex3f v) { return vex3f(x * v.x, y * v.y, z * v.z); };
vex3f vex3f::operator*(float v) { return vex3f(x * v, y * v, z * v); };
void vex3f::operator*=(vex3f v) { x *= v.x; y *= v.y; z *= v.z; };
vex3f vex3f::operator/(vex3f v) { return vex3f(x / v.x, y / v.y, z / v.z); };
vex3f vex3f::operator/(float v) { return vex3f(x / v, y / v, z / v); };
void vex3f::operator/=(vex3f v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3f::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
	z = std::ceil(z);
}
void vex3f::floor_() {
	x = std::floor(x);
	y = std::floor(y);
	z = std::floor(z);
}
void vex3f::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
}
void vex3f::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
}
void vex3f::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
}
void vex3f::pow_(int v) {
	const vex3f temp = vex3f(x, y, z);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
	}
}
void vex3f::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
}
void vex3f::atan2_(vex3f v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
}
void vex3f::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
}
void vex3f::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
}
void vex3f::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
}
void vex3f::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
}
void vex3f::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
}
void vex3f::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
}
vex3f vex3f::ceil() {
	return vex3f(std::ceil(x), std::ceil(y), std::ceil(z));
};
vex3f vex3f::floor() {
	return vex3f(std::floor(x), std::floor(y), std::floor(z));
};
vex3f vex3f::abs() {
	return vex3f(std::fabs(x), std::fabs(y), std::fabs(z));
};
vex3f vex3f::sqrt() {
	return vex3f(std::sqrt(x), std::sqrt(y), std::sqrt(z));
};
vex3f vex3f::percent(float v) {
	return vex3f(x / 100 * v, y / 100 * v, z / 100 * v);
};
vex3f vex3f::pow(int v) {
	const vex3f temp = vex3f(x, y, z);
	vex3f ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3f vex3f::rand(int v2, int v3) {
	return vex3f(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex3f vex3f::atan2(vex3f v) {
	return vex3f(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z));
};
vex3f vex3f::atan() {
	return vex3f(std::atan(x), std::atan(y), std::atan(z));
};
vex3f vex3f::asin() {
	return vex3f(std::asin(x), std::asin(y), std::asin(z));
};
vex3f vex3f::acos() {
	return vex3f(std::acos(x), std::acos(y), std::acos(z));
};
vex3f vex3f::tan() {
	return vex3f(std::tan(x), std::tan(y), std::tan(z));
};
vex3f vex3f::sin() {
	return vex3f(std::sin(x), std::sin(y), std::sin(z));
};
vex3f vex3f::cos() {
	return vex3f(std::cos(x), std::cos(y), std::cos(z));
};
bool vex3f::isEmpty() {
	if (x == NULL && y == NULL && z == NULL)
		return true;
	else
		return false;
};
vex3d::vex3d() {
	x = y = z = 0;
};
vex3d::vex3d(double v1, double v2, double v3) {
	x = v1;
	y = v2;
	z = v3;
};
vex3d::vex3d(double v1, double v2) {
	x = v1;
	y = v2;
};
vex3d::vex3d(double v1) {
	x = v1;
	y = v1;
	z = v1;
};
void vex3d::operator=(double v) {
	x = v;
	y = v;
	z = v;
};
vex3d vex3d::operator+(vex3d v) { return vex3d(x + v.x, y + v.y, z + v.z); };
vex3d vex3d::operator+(double v) { return vex3d(x + v, y + v, z + v); };
void vex3d::operator+=(vex3d v) { x += v.x; y += v.y; z += v.z; };
vex3d vex3d::operator-(vex3d v) { return vex3d(x - v.x, y - v.y, z - v.z); };
vex3d vex3d::operator-(double v) { return vex3d(x - v, y - v, z - v); };
void vex3d::operator-=(vex3d v) { x -= v.x; y -= v.y; z -= v.z; };
vex3d vex3d::operator*(vex3d v) { return vex3d(x * v.x, y * v.y, z * v.z); };
vex3d vex3d::operator*(double v) { return vex3d(x * v, y * v, z * v); };
void vex3d::operator*=(vex3d v) { x *= v.x; y *= v.y; z *= v.z; };
vex3d vex3d::operator/(vex3d v) { return vex3d(x / v.x, y / v.y, z / v.z); };
vex3d vex3d::operator/(double v) { return vex3d(x / v, y / v, z / v); };
void vex3d::operator/=(vex3d v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3d::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
	z = std::ceil(z);
}
void vex3d::floor_() {
	x = std::floor(x);
	y = std::floor(y);
	z = std::floor(z);
}
void vex3d::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
}
void vex3d::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
}
void vex3d::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
}
void vex3d::pow_(int v) {
	const vex3f temp = vex3f(x, y, z);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
	}
}
void vex3d::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
}
void vex3d::atan2_(vex3d v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
}
void vex3d::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
}
void vex3d::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
}
void vex3d::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
}
void vex3d::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
}
void vex3d::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
}
void vex3d::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
}
vex3d vex3d::ceil() {
	return vex3d(std::ceil(x), std::ceil(y), std::ceil(z));
};
vex3d vex3d::floor() {
	return vex3d(std::floor(x), std::floor(y), std::floor(z));
};
vex3d vex3d::abs() {
	return vex3d(std::abs(x), std::abs(y), std::abs(z));
};
vex3d vex3d::sqrt() {
	return vex3d(std::sqrt(x), std::sqrt(y), std::sqrt(z));
};
vex3d vex3d::percent(float v) {
	return vex3d(x / 100 * v, y / 100 * v, z / 100 * v);
};
vex3d vex3d::pow(int v) {
	const vex3d temp = vex3d(x, y, z);
	vex3d ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3d vex3d::rand(int v2, int v3) {
	return vex3d(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex3d vex3d::atan2(vex3d v) {
	return vex3d(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z));
};
vex3d vex3d::atan() {
	return vex3d(std::atan(x), std::atan(y), std::atan(z));
};
vex3d vex3d::asin() {
	return vex3d(std::asin(x), std::asin(y), std::asin(z));
};
vex3d vex3d::acos() {
	return vex3d(std::acos(x), std::acos(y), std::acos(z));
};
vex3d vex3d::tan() {
	return vex3d(std::tan(x), std::tan(y), std::tan(z));
};
vex3d vex3d::sin() {
	return vex3d(std::sin(x), std::sin(y), std::sin(z));
};
vex3d vex3d::cos() {
	return vex3d(std::cos(x), std::cos(y), std::cos(z));
};
bool vex3d::isEmpty() {
	if (x == NULL && y == NULL && z == NULL)
		return true;
	else
		return false;
};
vex3i::vex3i() {
	x = y = z = 0;
};
vex3i::vex3i(int v1, int v2, int v3) {
	x = v1;
	y = v2;
	z = v3;
};
vex3i::vex3i(int v1, int v2) {
	x = v1;
	y = v2;
};
vex3i::vex3i(int v1) {
	x = v1;
	y = v1;
	z = v1;
};
void vex3i::operator=(const int v) {
	x = v;
	y = v;
	z = v;
};
vex3i vex3i::operator+(vex3i v) { return vex3i(x + v.x, y + v.y, z + v.z); };
vex3i vex3i::operator+(int v) { return vex3i(x + v, y + v, z + v); };
void vex3i::operator+=(vex3i v) { x += v.x; y += v.y; z += v.z; };
vex3i vex3i::operator-(vex3i v) { return vex3i(x - v.x, y - v.y, z - v.z); };
vex3i vex3i::operator-(int v) { return vex3i(x - v, y - v, z - v); };
void vex3i::operator-=(vex3i v) { x -= v.x; y -= v.y; z -= v.z; };
vex3i vex3i::operator*(vex3i v) { return vex3i(x * v.x, y * v.y, z * v.z); };
vex3i vex3i::operator*(int v) { return vex3i(x * v, y * v, z * v); };
void vex3i::operator*=(vex3i v) { x *= v.x; y *= v.y; z *= v.z; };
vex3i vex3i::operator/(vex3i v) { return vex3i(x / v.x, y / v.y, z / v.z); };
vex3i vex3i::operator/(int v) { return vex3i(x / v, y / v, z / v); };
void vex3i::operator/=(vex3i v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3i::abs_() {
	x = std::abs(x);
	y = std::abs(y);
	z = std::abs(z);
}
void vex3i::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
	z = std::sqrt(z);
}
void vex3i::percent_(int v) {
	x = x / 100 * v;
	y = y / 100 * v;
	z = z / 100 * v;
}
void vex3i::pow_(int v) {
	const vex3f temp = vex3f(x, y, z);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
		z *= temp.z;
	}
}
void vex3i::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
	z = float(std::rand() % (v3 - v2) + v2);
}
void vex3i::atan2_(vex3i v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
	z = std::atan2(z, v.z);
}
void vex3i::atan_() {
	x = std::atan(x);
	y = std::atan(y);
	z = std::atan(z);
}
void vex3i::asin_() {
	x = std::asin(x);
	y = std::asin(y);
	z = std::asin(z);
}
void vex3i::acos_() {
	x = std::acos(x);
	y = std::acos(y);
	z = std::acos(z);
}
void vex3i::tan_() {
	x = std::tan(x);
	y = std::tan(y);
	z = std::tan(z);
}
void vex3i::sin_() {
	x = std::sin(x);
	y = std::sin(y);
	z = std::sin(z);
}
void vex3i::cos_() {
	x = std::cos(x);
	y = std::cos(y);
	z = std::cos(z);
}
vex3i vex3i::abs() {
	return vex3i(std::abs(x), std::abs(y), std::abs(z));
};
vex3i vex3i::sqrt() {
	return vex3i(std::sqrt(x), std::sqrt(y), std::sqrt(z));
};
vex3i vex3i::percent(int v) {
	return vex3i(x / 100 * v, y / 100 * v, z / 100 * v);
};
vex3i vex3i::pow(int v) {
	const vex3i temp = vex3i(x, y, z);
	vex3i ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
		___asxa.z *= temp.z;
	}
	return ___asxa;
};
vex3i vex3i::rand(int v2, int v3) {
	return vex3i(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex3i vex3i::atan2(vex3i v) {
	return vex3i(std::atan2(x, v.x), std::atan2(y, v.y), std::atan2(z, v.z));
};
vex3i vex3i::atan() {
	return vex3i(std::atan(x), std::atan(y), std::atan(z));
};
vex3i vex3i::asin() {
	return vex3i(std::asin(x), std::asin(y), std::asin(z));
};
vex3i vex3i::acos() {
	return vex3i(std::acos(x), std::acos(y), std::acos(z));
};
vex3i vex3i::tan() {
	return vex3i(std::tan(x), std::tan(y), std::tan(z));
};
vex3i vex3i::sin() {
	return vex3i(std::sin(x), std::sin(y), std::sin(z));
};
vex3i vex3i::cos() {
	return vex3i(std::cos(x), std::cos(y), std::cos(z));
};
bool vex3i::isEmpty() {
	if (x == NULL && y == NULL && z == NULL)
		return true;
	else
		return false;
};
vex2f::vex2f() {
	x = y = 0;
};
vex2f::vex2f(float v1, float v2) {
	x = v1;
	y = v2;
};
vex2f::vex2f(float v1) {
	x = v1;
	y = v1;
};
void vex2f::operator=(float v) {
	x = v;
	y = v;
};
vex2f vex2f::operator+(vex2f v) { return vex2f(x + v.x, y + v.y); };
vex2f vex2f::operator+(float v) { return vex2f(x + v, y + v); };
void vex2f::operator+=(vex2f v) { x += v.x; y += v.y; };
vex2f vex2f::operator-(vex2f v) { return vex2f(x - v.x, y - v.y); };
vex2f vex2f::operator-(float v) { return vex2f(x - v, y - v); };
void vex2f::operator-=(vex2f v) { x -= v.x; y -= v.y; };
vex2f vex2f::operator*(vex2f v) { return vex2f(x * v.x, y * v.y); };
vex2f vex2f::operator*(float v) { return vex2f(x * v, y * v); };
void vex2f::operator*=(vex2f v) { x *= v.x; y *= v.y; };
vex2f vex2f::operator/(vex2f v) { return vex2f(x / v.x, y / v.y); };
vex2f vex2f::operator/(float v) { return vex2f(x / v, y / v); };
void vex2f::operator/=(vex2f v) { x /= v.x; y /= v.y; };
void vex2f::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
}
void vex2f::floor_() {
	x = std::floor(x);
	y = std::floor(y);
}
void vex2f::abs_() {
	x = std::abs(x);
	y = std::abs(y);
}
void vex2f::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
}
void vex2f::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
}
void vex2f::pow_(int v) {
	const vex2f temp = vex2f(x, y);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
	}
}
void vex2f::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
}
void vex2f::atan2_(vex2f v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
}
void vex2f::atan_() {
	x = std::atan(x);
	y = std::atan(y);
}
void vex2f::asin_() {
	x = std::asin(x);
	y = std::asin(y);
}
void vex2f::acos_() {
	x = std::acos(x);
	y = std::acos(y);
}
void vex2f::tan_() {
	x = std::tan(x);
	y = std::tan(y);
}
void vex2f::sin_() {
	x = std::sin(x);
	y = std::sin(y);
}
void vex2f::cos_() {
	x = std::cos(x);
	y = std::cos(y);
}
vex2f vex2f::ceil() {
	return vex2f(std::ceil(x), std::ceil(y));
};
vex2f vex2f::floor() {
	return vex2f(std::floor(x), std::floor(y));
};
vex2f vex2f::abs() {
	return vex2f(std::abs(x), std::abs(y));
};
vex2f vex2f::sqrt() {
	return vex2f(std::sqrt(x), std::sqrt(y));
};
vex2f vex2f::percent(float v) {
	return vex2f(x / 100 * v, y / 100 * v);
};
vex2f vex2f::pow(int v) {
	const vex2f temp = vex2f(x, y);
	vex2f ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2f vex2f::rand(int v2, int v3) {
	return vex2f(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex2f vex2f::atan2(vex2f v) {
	return vex2f(std::atan2(x, v.x), std::atan2(y, v.y));
};
vex2f vex2f::atan() {
	return vex2f(std::atan(x), std::atan(y));
};
vex2f vex2f::asin() {
	return vex2f(std::asin(x), std::asin(y));
};
vex2f vex2f::acos() {
	return vex2f(std::acos(x), std::acos(y));
};
vex2f vex2f::tan() {
	return vex2f(std::tan(x), std::tan(y));
};
vex2f vex2f::sin() {
	return vex2f(std::sin(x), std::sin(y));
};
vex2f vex2f::cos() {
	return vex2f(std::cos(x), std::cos(y));
};
bool vex2f::isEmpty() {
	if (x == NULL && y == NULL)
		return true;
	else
		return false;
};
vex2d::vex2d() {
	x = y = 0;
};
vex2d::vex2d(double v1, double v2) {
	x = v1;
	y = v2;
};
vex2d::vex2d(double v1) {
	x = v1;
	y = v1;
};
void vex2d::operator=(double v) {
	x = v;
	y = v;
};
vex2d vex2d::operator+(vex2d v) { return vex2d(x + v.x, y + v.y); };
vex2d vex2d::operator+(double v) { return vex2d(x + v, y + v); };
void vex2d::operator+=(vex2d v) { x += v.x; y += v.y; };
vex2d vex2d::operator-(vex2d v) { return vex2d(x - v.x, y - v.y); };
vex2d vex2d::operator-(double v) { return vex2d(x - v, y - v); };
void vex2d::operator-=(vex2d v) { x -= v.x; y -= v.y; };
vex2d vex2d::operator*(vex2d v) { return vex2d(x * v.x, y * v.y); };
vex2d vex2d::operator*(double v) { return vex2d(x * v, y * v); };
void vex2d::operator*=(vex2d v) { x *= v.x; y *= v.y; };
vex2d vex2d::operator/(vex2d v) { return vex2d(x / v.x, y / v.y); };
vex2d vex2d::operator/(double v) { return vex2d(x / v, y / v); };
void vex2d::operator/=(vex2d v) { x /= v.x; y /= v.y; };
void vex2d::ceil_() {
	x = std::ceil(x);
	y = std::ceil(y);
}
void vex2d::floor_() {
	x = std::floor(x);
	y = std::floor(y);
}
void vex2d::abs_() {
	x = std::abs(x);
	y = std::abs(y);
}
void vex2d::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
}
void vex2d::percent_(float v) {
	x = x / 100 * v;
	y = y / 100 * v;
}
void vex2d::pow_(int v) {
	const vex2d temp = vex2d(x, y);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
	}
}
void vex2d::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
}
void vex2d::atan2_(vex2d v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
}
void vex2d::atan_() {
	x = std::atan(x);
	y = std::atan(y);
}
void vex2d::asin_() {
	x = std::asin(x);
	y = std::asin(y);
}
void vex2d::acos_() {
	x = std::acos(x);
	y = std::acos(y);
}
void vex2d::tan_() {
	x = std::tan(x);
	y = std::tan(y);
}
void vex2d::sin_() {
	x = std::sin(x);
	y = std::sin(y);
}
void vex2d::cos_() {
	x = std::cos(x);
	y = std::cos(y);
}
vex2d vex2d::ceil() {
	return vex2d(std::ceil(x), std::ceil(y));
};
vex2d vex2d::floor() {
	return vex2d(std::floor(x), std::floor(y));
};
vex2d vex2d::abs() {
	return vex2d(std::abs(x), std::abs(y));
};
vex2d vex2d::sqrt() {
	return vex2d(std::sqrt(x), std::sqrt(y));
};
vex2d vex2d::percent(float v) {
	return vex2d(x / 100 * v, y / 100 * v);
};
vex2d vex2d::pow(int v) {
	const vex2d temp = vex2d(x, y);
	vex2d ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2d vex2d::rand(int v2, int v3) {
	return vex2d(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex2d vex2d::atan2(vex2d v) {
	return vex2d(std::atan2(x, v.x), std::atan2(y, v.y));
};
vex2d vex2d::atan() {
	return vex2d(std::atan(x), std::atan(y));
};
vex2d vex2d::asin() {
	return vex2d(std::asin(x), std::asin(y));
};
vex2d vex2d::acos() {
	return vex2d(std::acos(x), std::acos(y));
};
vex2d vex2d::tan() {
	return vex2d(std::tan(x), std::tan(y));
};
vex2d vex2d::sin() {
	return vex2d(std::sin(x), std::sin(y));
};
vex2d vex2d::cos() {
	return vex2d(std::cos(x), std::cos(y));
};
bool vex2d::isEmpty() {
	if (x == NULL && y == NULL)
		return true;
	else
		return false;
};
vex2i::vex2i() {
	x = y = 0;
};
vex2i::vex2i(int v1, int v2) {
	x = v1;
	y = v2;
};
vex2i::vex2i(int v1) {
	x = v1;
	y = v1;
};
void vex2i::operator=(int v) {
	x = v;
	y = v;
};
vex2i vex2i::operator+(vex2i v) { return vex2i(x + v.x, y + v.y); };
vex2i vex2i::operator+(int v) { return vex2i(x + v, y + v); };
void vex2i::operator+=(vex2i v) { x += v.x; y += v.y; };
vex2i vex2i::operator-(vex2i v) { return vex2i(x - v.x, y - v.y); };
vex2i vex2i::operator-(int v) { return vex2i(x - v, y - v); };
void vex2i::operator-=(vex2i v) { x -= v.x; y -= v.y; };
vex2i vex2i::operator*(vex2i v) { return vex2i(x * v.x, y * v.y); };
vex2i vex2i::operator*(int v) { return vex2i(x * v, y * v); };
void vex2i::operator*=(vex2i v) { x *= v.x; y *= v.y; };
vex2i vex2i::operator/(vex2i v) { return vex2i(x / v.x, y / v.y); };
vex2i vex2i::operator/(int v) { return vex2i(x / v, y / v); };
void vex2i::operator/=(vex2i v) { x /= v.x; y /= v.y; };
vex2i vex2i::abs() {
	return vex2i(std::abs(x), std::abs(y));
};
vex2i vex2i::sqrt() {
	return vex2i(std::sqrt(x), std::sqrt(y));
};
vex2i vex2i::percent(int v) {
	return vex2i(x / 100 * v, y / 100 * v);
};
vex2i vex2i::pow(int v) {
	const vex2i temp = vex2i(x, y);
	vex2i ___asxa = temp;
	for (int __i = 0; __i < v; __i++) {
		___asxa.x *= temp.x;
		___asxa.y *= temp.y;
	}
	return ___asxa;
};
vex2i vex2i::rand(int v2, int v3) {
	return vex2i(float(std::rand() % (v3 - v2) + v2), float(std::rand() % (v3 - v2) + v2));
};
vex2i vex2i::atan2(vex2i v) {
	return vex2i(std::atan2(x, v.x), std::atan2(y, v.y));
};
vex2i vex2i::atan() {
	return vex2i(std::atan(x), std::atan(y));
};
vex2i vex2i::asin() {
	return vex2i(std::asin(x), std::asin(y));
};
vex2i vex2i::acos() {
	return vex2i(std::acos(x), std::acos(y));
};
vex2i vex2i::tan() {
	return vex2i(std::tan(x), std::tan(y));
};
vex2i vex2i::sin() {
	return vex2i(std::sin(x), std::sin(y));
};
vex2i vex2i::cos() {
	return vex2i(std::cos(x), std::cos(y));
};
bool vex2i::isEmpty() {
	if (x == NULL && y == NULL)
		return true;
	else
		return false;
};
void vex2i::abs_() {
	x = std::abs(x);
	y = std::abs(y);
}
void vex2i::sqrt_() {
	x = std::sqrt(x);
	y = std::sqrt(y);
}
void vex2i::percent_(int v) {
	x = x / 100 * v;
	y = y / 100 * v;
}
void vex2i::pow_(int v) {
	const vex2d temp = vex2d(x, y);
	for (int __i = 0; __i < v; __i++) {
		x *= temp.x;
		y *= temp.y;
	}
}
void vex2i::rand_(int v2, int v3) {
	x = float(std::rand() % (v3 - v2) + v2);
	y = float(std::rand() % (v3 - v2) + v2);
}
void vex2i::atan2_(vex2i v) {
	x = std::atan2(x, v.x);
	y = std::atan2(y, v.y);
}
void vex2i::atan_() {
	x = std::atan(x);
	y = std::atan(y);
}
void vex2i::asin_() {
	x = std::asin(x);
	y = std::asin(y);
}
void vex2i::acos_() {
	x = std::acos(x);
	y = std::acos(y);
}
void vex2i::tan_() {
	x = std::tan(x);
	y = std::tan(y);
}
void vex2i::sin_() {
	x = std::sin(x);
	y = std::sin(y);
}
void vex2i::cos_() {
	x = std::cos(x);
	y = std::cos(y);
}
void vex2f::normalize() {
	if (x > y) {
		y /= x;
		x = 1;
	}
	else {
		x /= y;
		y = 1;
	};
}
void vex2d::normalize() {
	if (x > y) {
		y /= x;
		x = 1;
	}
	else {
		x /= y;
		y = 1;
	};
}
void vex2i::normalize() {
	if (x > y) {
		y /= x;
		x = 1;
	}
	else {
		x /= y;
		y = 1;
	};
}
void vex3f::normalize() {
	if (x > y && x > z) {
		y /= x;
		z /= x;
		x = 1;
	}
	else if (y > x && y > z) {
		x /= y;
		z /= y;
		y = 1;
	}
	else if (z > x && z > y) {
		x /= z;
		y /= z;
		z = 1;
	};
}
void vex3d::normalize() {
	if (x > y && x > z) {
		y /= x;
		z /= x;
		x = 1;
	}
	else if (y > x && y > z) {
		x /= y;
		z /= y;
		y = 1;
	}
	else if (z > x && z > y) {
		x /= z;
		y /= z;
		z = 1;
	};
}
void vex3i::normalize() {
	if (x > y && x > z) {
		y /= x;
		z /= x;
		x = 1;
	}
	else if (y > x && y > z) {
		x /= y;
		z /= y;
		y = 1;
	}
	else if (z > x && z > y) {
		x /= z;
		y /= z;
		z = 1;
	};
}
void vex4f::normalize() {
	if (x > y && x > z && x > w) {
		y /= x;
		z /= x;
		w /= x;
		x = 1;
	}
	else if (y > x && y > z && x > w) {
		x /= y;
		z /= y;
		w /= y;
		y = 1;
	}
	else if (z > x && z > y && x > w) {
		x /= z;
		y /= z;
		w /= z;
		z = 1;
	}
	else if (w > x && w > y && w > z) {
		x /= w;
		y /= w;
		z /= w;
		w = 1;
	};
}
void vex4d::normalize() {
	if (x > y && x > z && x > w) {
		y /= x;
		z /= x;
		w /= x;
		x = 1;
	}
	else if (y > x && y > z && x > w) {
		x /= y;
		z /= y;
		w /= y;
		y = 1;
	}
	else if (z > x && z > y && x > w) {
		x /= z;
		y /= z;
		w /= z;
		z = 1;
	}
	else if (w > x && w > y && w > z) {
		x /= w;
		y /= w;
		z /= w;
		w = 1;
	};
}
void vex4i::normalize() {
	if (x > y && x > z && x > w) {
		y /= x;
		z /= x;
		w /= x;
		x = 1;
	}
	else if (y > x && y > z && x > w) {
		x /= y;
		z /= y;
		w /= y;
		y = 1;
	}
	else if (z > x && z > y && x > w) {
		x /= z;
		y /= z;
		w /= z;
		z = 1;
	}
	else if (w > x && w > y && w > z) {
		x /= w;
		y /= w;
		z /= w;
		w = 1;
	};
}
vex2f vex2f::average() {
	return vex2f(x + y / 2);
};
vex2d vex2d::average() {
	return vex2d(x + y / 2);
};
vex2i vex2i::average() {
	return vex2i(x + y / 2);
};
vex3f vex3f::average() {
	return vex3f(x + y + z / 3);
};
vex3d vex3d::average() {
	return vex3d(x + y + z / 3);
};
vex3i vex3i::average() {
	return vex3i(x + y + z / 3);
};
vex4f vex4f::average() {
	return vex4f(x + y + z + w / 4);
};
vex4d vex4d::average() {
	return vex4d(x + y + z + w / 4);
};
vex4i vex4i::average() {
	return vex4i(x + y + z + w / 4);
};
void vex2f::average_() {
	x = x + y / 2;
	y = x + y / 2;
};
void vex2d::average_() {
	x = x + y / 2;
	y = x + y / 2;
};
void vex2i::average_() {
	x = x + y / 2;
	y = x + y / 2;
};
void vex3f::average_() {
	x = x + y + z / 3;
	y = x + y + z / 3;
	z = x + y + z / 3;
};
void vex3d::average_() {
	x = x + y + z / 3;
	y = x + y + z / 3;
	z = x + y + z / 3;
};
void vex3i::average_() {
	x = x + y + z / 3;
	y = x + y + z / 3;
	z = x + y + z / 3;
};
void vex4f::average_() {
	x = x + y + z + w / 4;
	y = x + y + z + w / 4;
	z = x + y + z + w / 4;
	w = x + y + z + w / 4;
};
void vex4d::average_() {
	x = x + y + z + w / 4;
	y = x + y + z + w / 4;
	z = x + y + z + w / 4;
	w = x + y + z + w / 4;
};
void vex4i::average_() {
	x = x + y + z + w / 4;
	y = x + y + z + w / 4;
	z = x + y + z + w / 4;
	w = x + y + z + w / 4;
};
bool vex2f::operator== (vex2f v) {
	if (x == v.x && y == v.y)
		return true;
	else
		return false;
};
bool vex2f::operator== (float v) {
	if (x == v && y == v)
		return true;
	else
		return false;
};
bool vex2d::operator== (vex2d v) {
	if (x == v.x && y == v.y)
		return true;
	else
		return false;
};
bool vex2d::operator== (double v) {
	if (x == v && y == v)
		return true;
	else
		return false;
};
bool vex2i::operator== (vex2i v) {
	if (x == v.x && y == v.y)
		return true;
	else
		return false;
};
bool vex2i::operator== (int v) {
	if (x == v && y == v)
		return true;
	else
		return false;
};
bool vex2f::operator!= (vex2f v) {
	if (x != v.x && y != v.y)
		return true;
	else
		return false;
};
bool vex2f::operator!= (float v) {
	if (x != v && y != v)
		return true;
	else
		return false;
};
bool vex2d::operator!= (vex2d v) {
	if (x != v.x && y != v.y)
		return true;
	else
		return false;
};
bool vex2d::operator!= (double v) {
	if (x != v && y != v)
		return true;
	else
		return false;
};
bool vex2i::operator!= (vex2i v) {
	if (x != v.x && y != v.y)
		return true;
	else
		return false;
};
bool vex2i::operator!= (int v) {
	if (x != v && y != v)
		return true;
	else
		return false;
};
bool vex2f::operator<= (vex2f v) {
	if (x <= v.x && y <= v.y)
		return true;
	else
		return false;
};
bool vex2f::operator<= (float v) {
	if (x <= v && y <= v)
		return true;
	else
		return false;
};
bool vex2d::operator<= (vex2d v) {
	if (x <= v.x && y <= v.y)
		return true;
	else
		return false;
};
bool vex2d::operator<= (double v) {
	if (x <= v && y <= v)
		return true;
	else
		return false;
};
bool vex2i::operator<= (vex2i v) {
	if (x <= v.x && y <= v.y)
		return true;
	else
		return false;
};
bool vex2i::operator<= (int v) {
	if (x <= v && y <= v)
		return true;
	else
		return false;
};
bool vex2f::operator>= (vex2f v) {
	if (x >= v.x && y >= v.y)
		return true;
	else
		return false;
};
bool vex2f::operator>= (float v) {
	if (x >= v && y >= v)
		return true;
	else
		return false;
};
bool vex2d::operator>= (vex2d v) {
	if (x >= v.x && y >= v.y)
		return true;
	else
		return false;
};
bool vex2d::operator>= (double v) {
	if (x >= v && y >= v)
		return true;
	else
		return false;
};
bool vex2i::operator>= (vex2i v) {
	if (x >= v.x && y >= v.y)
		return true;
	else
		return false;
};
bool vex2i::operator>= (int v) {
	if (x >= v && y >= v)
		return true;
	else
		return false;
};
bool vex2f::operator< (vex2f v) {
	if (x < v.x && y < v.y)
		return true;
	else
		return false;
};
bool vex2f::operator< (float v) {
	if (x < v && y < v)
		return true;
	else
		return false;
};
bool vex2d::operator< (vex2d v) {
	if (x < v.x && y < v.y)
		return true;
	else
		return false;
};
bool vex2d::operator< (double v) {
	if (x < v && y < v)
		return true;
	else
		return false;
};
bool vex2i::operator< (vex2i v) {
	if (x < v.x && y < v.y)
		return true;
	else
		return false;
};
bool vex2i::operator< (int v) {
	if (x < v && y < v)
		return true;
	else
		return false;
};
bool vex2f::operator> (vex2f v) {
	if (x > v.x && y > v.y)
		return true;
	else
		return false;
};
bool vex2f::operator> (float v) {
	if (x > v && y > v)
		return true;
	else
		return false;
};
bool vex2d::operator> (vex2d v) {
	if (x > v.x && y > v.y)
		return true;
	else
		return false;
};
bool vex2d::operator> (double v) {
	if (x > v && y > v)
		return true;
	else
		return false;
};
bool vex2i::operator> (vex2i v) {
	if (x > v.x && y > v.y)
		return true;
	else
		return false;
};
bool vex2i::operator> (int v) {
	if (x > v && y > v)
		return true;
	else
		return false;
};
bool vex3f::operator== (vex3f v) {
	if (x == v.x && y == v.y && z == v.z)
		return true;
	else
		return false;
};
bool vex3f::operator== (float v) {
	if (x == v && y == v && z == v)
		return true;
	else
		return false;
};
bool vex3d::operator== (vex3d v) {
	if (x == v.x && y == v.y && z == v.z)
		return true;
	else
		return false;
};
bool vex3d::operator== (double v) {
	if (x == v && y == v && z == v)
		return true;
	else
		return false;
};
bool vex3i::operator== (vex3i v) {
	if (x == v.x && y == v.y && z == v.z)
		return true;
	else
		return false;
};
bool vex3i::operator== (int v) {
	if (x == v && y == v && z == v)
		return true;
	else
		return false;
};
bool vex3f::operator!= (vex3f v) {
	if (x != v.x && y != v.y && z != v.z)
		return true;
	else
		return false;
};
bool vex3f::operator!= (float v) {
	if (x != v && y != v && z != v)
		return true;
	else
		return false;
};
bool vex3d::operator!= (vex3d v) {
	if (x != v.x && y != v.y && z != v.z)
		return true;
	else
		return false;
};
bool vex3d::operator!= (double v) {
	if (x != v && y != v && z != v)
		return true;
	else
		return false;
};
bool vex3i::operator!= (vex3i v) {
	if (x != v.x && y != v.y && z != v.z)
		return true;
	else
		return false;
};
bool vex3i::operator!= (int v) {
	if (x != v && y != v && z != v)
		return true;
	else
		return false;
};
bool vex3f::operator<= (vex3f v) {
	if (x <= v.x && y <= v.y && z <= v.z)
		return true;
	else
		return false;
};
bool vex3f::operator<= (float v) {
	if (x <= v && y <= v && z <= v)
		return true;
	else
		return false;
};
bool vex3d::operator<= (vex3d v) {
	if (x <= v.x && y <= v.y && z <= v.z)
		return true;
	else
		return false;
};
bool vex3d::operator<= (double v) {
	if (x <= v && y <= v && z <= v)
		return true;
	else
		return false;
};
bool vex3i::operator<= (vex3i v) {
	if (x <= v.x && y <= v.y && z <= v.z)
		return true;
	else
		return false;
};
bool vex3i::operator<= (int v) {
	if (x <= v && y <= v && z <= v)
		return true;
	else
		return false;
};
bool vex3f::operator>= (vex3f v) {
	if (x >= v.x && y >= v.y && z >= v.z)
		return true;
	else
		return false;
};
bool vex3f::operator>= (float v) {
	if (x >= v && y >= v && z >= v)
		return true;
	else
		return false;
};
bool vex3d::operator>= (vex3d v) {
	if (x >= v.x && y >= v.y && z >= v.z)
		return true;
	else
		return false;
};
bool vex3d::operator>= (double v) {
	if (x >= v && y >= v && z >= v)
		return true;
	else
		return false;
};
bool vex3i::operator>= (vex3i v) {
	if (x >= v.x && y >= v.y && z >= v.z)
		return true;
	else
		return false;
};
bool vex3i::operator>= (int v) {
	if (x >= v && y >= v && z >= v)
		return true;
	else
		return false;
};
bool vex3f::operator< (vex3f v) {
	if (x < v.x && y < v.y && z < v.z)
		return true;
	else
		return false;
};
bool vex3f::operator< (float v) {
	if (x < v && y < v && z < v)
		return true;
	else
		return false;
};
bool vex3d::operator< (vex3d v) {
	if (x < v.x && y < v.y && z < v.z)
		return true;
	else
		return false;
};
bool vex3d::operator< (double v) {
	if (x < v && y < v && z < v)
		return true;
	else
		return false;
};
bool vex3i::operator< (vex3i v) {
	if (x < v.x && y < v.y && z < v.z)
		return true;
	else
		return false;
};
bool vex3i::operator< (int v) {
	if (x < v && y < v && z < v)
		return true;
	else
		return false;
};
bool vex3f::operator> (vex3f v) {
	if (x > v.x && y > v.y && z < v.z)
		return true;
	else
		return false;
};
bool vex3f::operator> (float v) {
	if (x > v && y > v && z < v)
		return true;
	else
		return false;
};
bool vex3d::operator> (vex3d v) {
	if (x > v.x && y > v.y && z > v.z)
		return true;
	else
		return false;
};
bool vex3d::operator> (double v) {
	if (x > v && y > v && z > v)
		return true;
	else
		return false;
};
bool vex3i::operator> (vex3i v) {
	if (x > v.x && y > v.y && z > v.z)
		return true;
	else
		return false;
};
bool vex3i::operator> (int v) {
	if (x > v && y > v && z > v)
		return true;
	else
		return false;
};
bool vex4f::operator== (vex4f v) {
	if (x == v.x && y == v.y && z == v.z && w == v.w)
		return true;
	else
		return false;
};
bool vex4f::operator== (float v) {
	if (x == v && y == v && z == v && w == v)
		return true;
	else
		return false;
};
bool vex4d::operator== (vex4d v) {
	if (x == v.x && y == v.y && z == v.z && w == v.w)
		return true;
	else
		return false;
};
bool vex4d::operator== (double v) {
	if (x == v && y == v && z == v && w == v)
		return true;
	else
		return false;
};
bool vex4i::operator== (vex4i v) {
	if (x == v.x && y == v.y && z == v.z && w == v.w)
		return true;
	else
		return false;
};
bool vex4i::operator== (int v) {
	if (x == v && y == v && z == v && w == v)
		return true;
	else
		return false;
};
bool vex4f::operator!= (vex4f v) {
	if (x != v.x && y != v.y && z != v.z && w != v.w)
		return true;
	else
		return false;
};
bool vex4f::operator!= (float v) {
	if (x != v && y != v && z != v && w != v)
		return true;
	else
		return false;
};
bool vex4d::operator!= (vex4d v) {
	if (x != v.x && y != v.y && z != v.z && w != v.w)
		return true;
	else
		return false;
};
bool vex4d::operator!= (double v) {
	if (x != v && y != v && z != v && w != v)
		return true;
	else
		return false;
};
bool vex4i::operator!= (vex4i v) {
	if (x != v.x && y != v.y && z != v.z && w != v.w)
		return true;
	else
		return false;
};
bool vex4i::operator!= (int v) {
	if (x != v && y != v && z != v && w != v)
		return true;
	else
		return false;
};
bool vex4f::operator<= (vex4f v) {
	if (x <= v.x && y <= v.y && z <= v.z && w <= v.w)
		return true;
	else
		return false;
};
bool vex4f::operator<= (float v) {
	if (x <= v && y <= v && z <= v && w <= v)
		return true;
	else
		return false;
};
bool vex4d::operator<= (vex4d v) {
	if (x <= v.x && y <= v.y && z <= v.z && w <= v.w)
		return true;
	else
		return false;
};
bool vex4d::operator<= (double v) {
	if (x <= v && y <= v && z <= v && w <= v)
		return true;
	else
		return false;
};
bool vex4i::operator<= (vex4i v) {
	if (x <= v.x && y <= v.y && z <= v.z && w <= v.w)
		return true;
	else
		return false;
};
bool vex4i::operator<= (int v) {
	if (x <= v && y <= v && z <= v && w <= v)
		return true;
	else
		return false;
};
bool vex4f::operator>= (vex4f v) {
	if (x >= v.x && y >= v.y && z >= v.z && w >= v.w)
		return true;
	else
		return false;
};
bool vex4f::operator>= (float v) {
	if (x >= v && y >= v && z >= v && w >= v)
		return true;
	else
		return false;
};
bool vex4d::operator>= (vex4d v) {
	if (x >= v.x && y >= v.y && z >= v.z && w >= v.z)
		return true;
	else
		return false;
};
bool vex4d::operator>= (double v) {
	if (x >= v && y >= v && z >= v && w >= v)
		return true;
	else
		return false;
};
bool vex4i::operator>= (vex4i v) {
	if (x >= v.x && y >= v.y && z >= v.z && w >= v.w)
		return true;
	else
		return false;
};
bool vex4i::operator>= (int v) {
	if (x >= v && y >= v && z >= v && w >= v)
		return true;
	else
		return false;
};
bool vex4f::operator< (vex4f v) {
	if (x < v.x && y < v.y && z < v.z && w < v.w)
		return true;
	else
		return false;
};
bool vex4f::operator< (float v) {
	if (x < v && y < v && z < v && w < v)
		return true;
	else
		return false;
};
bool vex4d::operator< (vex4d v) {
	if (x < v.x && y < v.y && z < v.z && w < v.w)
		return true;
	else
		return false;
};
bool vex4d::operator< (double v) {
	if (x < v && y < v && z < v && w < v)
		return true;
	else
		return false;
};
bool vex4i::operator< (vex4i v) {
	if (x < v.x && y < v.y && z < v.z && w < v.w)
		return true;
	else
		return false;
};
bool vex4i::operator< (int v) {
	if (x < v && y < v && z < v && w < v)
		return true;
	else
		return false;
};
bool vex4f::operator> (vex4f v) {
	if (x > v.x && y > v.y && z < v.z && w > v.w)
		return true;
	else
		return false;
};
bool vex4f::operator> (float v) {
	if (x > v && y > v && z < v && w > v)
		return true;
	else
		return false;
};
bool vex4d::operator> (vex4d v) {
	if (x > v.x && y > v.y && z > v.z && w > v.w)
		return true;
	else
		return false;
};
bool vex4d::operator> (double v) {
	if (x > v && y > v && z > v && w > v)
		return true;
	else
		return false;
};
bool vex4i::operator> (vex4i v) {
	if (x > v.x && y > v.y && z > v.z && w > v.w)
		return true;
	else
		return false;
};
bool vex4i::operator> (int v) {
	if (x > v && y > v && z > v && w > v)
		return true;
	else
		return false;
};
void vex2f::log_() {
	x = std::log(x);
	y = std::log(y);
};
void vex2f::round_() {
	x = std::round(x);
	y = std::round(y);
};
void vex2f::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
};
void vex2f::exp_() {
	x = std::exp(x);
	y = std::exp(y);
};
void vex2f::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
};
void vex2d::log_() {
	x = std::log(x);
	y = std::log(y);
};
void vex2d::round_() {
	x = std::round(x);
	y = std::round(y);
};
void vex2d::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
};
void vex2d::exp_() {
	x = std::exp(x);
	y = std::exp(y);
};
void vex2d::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
};
void vex2i::log_() {
	x = std::log(x);
	y = std::log(y);
};
void vex2i::exp_() {
	x = std::exp(x);
	y = std::exp(y);
};
void vex2i::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
};
void vex3f::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
};
void vex3f::round_() {
	x = std::round(x);
	y = std::round(y);
	z = std::round(z);
};
void vex3f::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
	z = std::trunc(z);
};
void vex3f::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
};
void vex3f::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
};
void vex3d::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
};
void vex3d::round_() {
	x = std::round(x);
	y = std::round(y);
	z = std::round(z);
};
void vex3d::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
	z = std::trunc(z);
};
void vex3d::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
};
void vex3d::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
};
void vex3i::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
};
void vex3i::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
};
void vex3i::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
};
void vex4f::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
	w = std::log(w);
};
void vex4f::round_() {
	x = std::round(x);
	y = std::round(y);
	z = std::round(z);
	w = std::round(w);
};
void vex4f::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
	z = std::trunc(z);
	w = std::trunc(w);
};
void vex4f::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
	w = std::exp(w);
};
void vex4f::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
	w = std::cbrt(w);
};
void vex4d::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
	w = std::log(w);
};
void vex4d::round_() {
	x = std::round(x);
	y = std::round(y);
	z = std::round(z);
	w = std::round(w);
};
void vex4d::trunc_() {
	x = std::trunc(x);
	y = std::trunc(y);
	z = std::trunc(z);
	w = std::trunc(w);
};
void vex4d::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
	w = std::exp(w);
};
void vex4d::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
	w = std::cbrt(w);
};
void vex4i::log_() {
	x = std::log(x);
	y = std::log(y);
	z = std::log(z);
	w = std::log(w);
};
void vex4i::exp_() {
	x = std::exp(x);
	y = std::exp(y);
	z = std::exp(z);
	w = std::exp(w);
};
void vex4i::cbrt_() {
	x = std::cbrt(x);
	y = std::cbrt(y);
	z = std::cbrt(z);
	w = std::cbrt(w);
};
vex2f vex2f::log() {
	return vex2f(std::log(x), std::log(y));
};
vex2f vex2f::round() {
	return vex2f(std::round(x), std::round(y));
};
vex2f vex2f::trunc() {
	return vex2f(std::trunc(x), std::trunc(y));
};
vex2f vex2f::exp() {
	return vex2f(std::exp(x), std::exp(y));
};
vex2f vex2f::cbrt() {
	return vex2f(std::cbrt(x), std::cbrt(y));
};
vex2d vex2d::log() {
	return vex2d(std::log(x), std::log(y));
};
vex2d vex2d::round() {
	return vex2d(std::round(x), std::round(y));
};
vex2d vex2d::trunc() {
	return vex2d(std::trunc(x), std::trunc(y));
};
vex2d vex2d::exp() {
	return vex2d(std::exp(x), std::exp(y));
};
vex2d vex2d::cbrt() {
	return vex2d(std::cbrt(x), std::cbrt(y));
};
vex2i vex2i::log() {
	return vex2i(std::log(x), std::log(y));
};
vex2i vex2i::exp() {
	return vex2i(std::exp(x), std::exp(y));
};
vex2i vex2i::cbrt() {
	return vex2i(std::cbrt(x), std::cbrt(y));
};
vex3f vex3f::log() {
	return vex3f(std::log(x), std::log(y), std::log(z));
};
vex3f vex3f::round() {
	return vex3f(std::round(x), std::round(y), std::round(z));
};
vex3f vex3f::trunc() {
	return vex3f(std::trunc(x), std::trunc(y), std::trunc(z));
};
vex3f vex3f::exp() {
	return vex3f(std::exp(x), std::exp(y), std::exp(z));
};
vex3f vex3f::cbrt() {
	return vex3f(std::cbrt(x), std::cbrt(y), std::cbrt(z));
};
vex3d vex3d::log() {
	return vex3d(std::log(x), std::log(y), std::log(z));
};
vex3d vex3d::round() {
	return vex3d(std::round(x), std::round(y), std::round(z));
};
vex3d vex3d::trunc() {
	return vex3d(std::trunc(x), std::trunc(y), std::trunc(z));
};
vex3d vex3d::exp() {
	return vex3d(std::exp(x), std::exp(y), std::exp(z));
};
vex3d vex3d::cbrt() {
	return vex3d(std::cbrt(x), std::cbrt(y), std::cbrt(z));
};
vex3i vex3i::log() {
	return vex3i(std::log(x), std::log(y), std::log(z));
};
vex3i vex3i::exp() {
	return vex3i(std::exp(x), std::exp(y), std::exp(z));
};
vex3i vex3i::cbrt() {
	return vex3i(std::cbrt(x), std::cbrt(y), std::cbrt(z));
};
vex4f vex4f::log() {
	return vex4f(std::log(x), std::log(y), std::log(z), std::log(w));
};
vex4f vex4f::round() {
	return vex4f(std::round(x), std::round(y), std::round(z), std::round(w));
};
vex4f vex4f::trunc() {
	return vex4f(std::trunc(x), std::trunc(y), std::trunc(w));
};
vex4f vex4f::exp() {
	return vex4f(std::exp(x), std::exp(y), std::exp(z), std::exp(w));
};
vex4f vex4f::cbrt() {
	return vex4f(std::cbrt(x), std::cbrt(y), std::cbrt(z), std::cbrt(w));
};
vex4d vex4d::log() {
	return vex4d(std::log(x), std::log(y), std::log(z), std::log(w));
};
vex4d vex4d::round() {
	return vex4d(std::round(x), std::round(y), std::round(z), std::round(w));
};
vex4d vex4d::trunc() {
	return vex4d(std::trunc(x), std::trunc(y), std::trunc(w));
};
vex4d vex4d::exp() {
	return vex4d(std::exp(x), std::exp(y), std::exp(z), std::exp(w));
};
vex4d vex4d::cbrt() {
	return vex4d(std::cbrt(x), std::cbrt(y), std::cbrt(z), std::cbrt(w));
};
vex4i vex4i::log() {
	return vex4i(std::log(x), std::log(y), std::log(z), std::log(w));
};
vex4i vex4i::exp() {
	return vex4i(std::exp(x), std::exp(y), std::exp(z), std::exp(w));
};
vex4i vex4i::cbrt() {
	return vex4i(std::cbrt(x), std::cbrt(y), std::cbrt(z), std::cbrt(w));
};

vex4f::vex4f(vex2d v) { x = float(v.x); y = float(v.y); };
vex4f::vex4f(vex2i v) { x = float(v.x); y = float(v.y); };
vex4f::vex4f(vex2f v) { x = v.x; y = v.y; };
vex4f::vex4f(vex3d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
vex4f::vex4f(vex3i v) { x = float(v.x); y = float(v.y); z = float(v.z); };
vex4f::vex4f(vex3f v) { x = v.x; y = v.y; z = v.z; };
vex4f::vex4f(vex4d v) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v.w); };
vex4f::vex4f(vex4i v) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v.w); };

vex4d::vex4d(vex2f v) { x = double(v.x); y = double(v.y); };
vex4d::vex4d(vex2i v) { x = double(v.x); y = double(v.y); };
vex4d::vex4d(vex2d v) { x = v.x; y = v.y; };
vex4d::vex4d(vex3f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
vex4d::vex4d(vex3i v) { x = double(v.x); y = double(v.y); z = double(v.z); };
vex4d::vex4d(vex3d v) { x = v.x; y = v.y; z = v.z; };
vex4d::vex4d(vex4f v) { x = double(v.x); y = double(v.y); z = double(v.z); double(v.w); };
vex4d::vex4d(vex4i v) { x = double(v.x); y = double(v.y); z = double(v.z); double(v.w); };

vex4i::vex4i(vex2d v) { x = int(v.x); y = int(v.y); };
vex4i::vex4i(vex2f v) { x = int(v.x); y = int(v.y); };
vex4i::vex4i(vex2i v) { x = v.x; y = v.y; };
vex4i::vex4i(vex3d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
vex4i::vex4i(vex3f v) { x = int(v.x); y = int(v.y); z = int(v.z); };
vex4i::vex4i(vex3i v) { x = v.x; y = v.y; z = int(v.z); };
vex4i::vex4i(vex4d v) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v.w); };
vex4i::vex4i(vex4f v) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v.w); };

vex3f::vex3f(vex2d v) { x = float(v.x); y = float(v.y); };
vex3f::vex3f(vex2i v) { x = float(v.x); y = float(v.y); };
vex3f::vex3f(vex2f v) { x = v.x; y = v.y; };
vex3f::vex3f(vex3d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
vex3f::vex3f(vex3i v) { x = float(v.x); y = float(v.y); z = float(v.z); };
vex3f::vex3f(vex4f v) { x = v.x; y = v.y; z = float(v.z); };
vex3f::vex3f(vex4d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
vex3f::vex3f(vex4i v) { x = float(v.x); y = float(v.y); z = float(v.z); };

vex3d::vex3d(vex2f v) { x = double(v.x); y = double(v.y); };
vex3d::vex3d(vex2i v) { x = double(v.x); y = double(v.y); };
vex3d::vex3d(vex2d v) { x = v.x; y = v.y; };
vex3d::vex3d(vex3f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
vex3d::vex3d(vex3i v) { x = double(v.x); y = double(v.y); z = double(v.z); };
vex3d::vex3d(vex4d v) { x = v.x; y = v.y; z = v.z; };
vex3d::vex3d(vex4f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
vex3d::vex3d(vex4i v) { x = double(v.x); y = double(v.y); z = double(v.z); };

vex3i::vex3i(vex2d v) { x = int(v.x); y = int(v.y); };
vex3i::vex3i(vex2f v) { x = int(v.x); y = int(v.y); };
vex3i::vex3i(vex2i v) { x = v.x; y = v.y; };
vex3i::vex3i(vex3d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
vex3i::vex3i(vex3f v) { x = int(v.x); y = int(v.y); z = int(v.z); };
vex3i::vex3i(vex4i v) { x = v.x; y = v.y; z = v.z; };
vex3i::vex3i(vex4d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
vex3i::vex3i(vex4f v) { x = int(v.x); y = int(v.y); z = int(v.z); };

vex2f::vex2f(vex2d v) { x = float(v.x); y = float(v.y); };
vex2f::vex2f(vex2i v) { x = float(v.x); y = float(v.y); };
vex2f::vex2f(vex3f v) { x = v.x; y = v.y; };
vex2f::vex2f(vex3d v) { x = float(v.x); y = float(v.y); };
vex2f::vex2f(vex3i v) { x = float(v.x); y = float(v.y); };
vex2f::vex2f(vex4f v) { x = v.x; y = v.y; };
vex2f::vex2f(vex4d v) { x = float(v.x); y = float(v.y); };
vex2f::vex2f(vex4i v) { x = float(v.x); y = float(v.y); };

vex2d::vex2d(vex2f v) { x = double(v.x); y = double(v.y); };
vex2d::vex2d(vex2i v) { x = double(v.x); y = double(v.y); };
vex2d::vex2d(vex3d v) { x = v.x; y = v.y; };
vex2d::vex2d(vex3f v) { x = double(v.x); y = double(v.y); };
vex2d::vex2d(vex3i v) { x = double(v.x); y = double(v.y); };
vex2d::vex2d(vex4d v) { x = v.x; y = v.y; };
vex2d::vex2d(vex4f v) { x = double(v.x); y = double(v.y); };
vex2d::vex2d(vex4i v) { x = double(v.x); y = double(v.y); };

vex2i::vex2i(vex2d v) { x = int(v.x); y = int(v.y); };
vex2i::vex2i(vex2f v) { x = int(v.x); y = int(v.y); };
vex2i::vex2i(vex3i v) { x = v.x; y = v.y; };
vex2i::vex2i(vex3d v) { x = int(v.x); y = int(v.y); };
vex2i::vex2i(vex3f v) { x = int(v.x); y = int(v.y); };
vex2i::vex2i(vex4i v) { x = v.x; y = v.y; };
vex2i::vex2i(vex4d v) { x = int(v.x); y = int(v.y); };
vex2i::vex2i(vex4f v) { x = int(v.x); y = int(v.y); };


void vex4f::operator= (vex2d v) { x = float(v.x); y = float(v.y); };
void vex4f::operator= (vex2i v) { x = float(v.x); y = float(v.y); };
void vex4f::operator= (vex2f v) { x = v.x; y = v.y; };
void vex4f::operator= (vex3d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
void vex4f::operator= (vex3i v) { x = float(v.x); y = float(v.y); z = float(v.z); };
void vex4f::operator= (vex3f v) { x = v.x; y = v.y; z = v.z; };
void vex4f::operator= (vex4d v) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v.w); };
void vex4f::operator= (vex4i v) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v.w); };

void vex4d::operator= (vex2f v) { x = double(v.x); y = double(v.y); };
void vex4d::operator= (vex2i v) { x = double(v.x); y = double(v.y); };
void vex4d::operator= (vex2d v) { x = v.x; y = v.y; };
void vex4d::operator= (vex3f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
void vex4d::operator= (vex3i v) { x = double(v.x); y = double(v.y); z = double(v.z); };
void vex4d::operator= (vex3d v) { x = v.x; y = v.y; z = v.z; };
void vex4d::operator= (vex4f v) { x = double(v.x); y = double(v.y); z = double(v.z); w = double(v.w); };
void vex4d::operator= (vex4i v) { x = double(v.x); y = double(v.y); z = double(v.z); w = double(v.w); };

void vex4i::operator= (vex2d v) { x = int(v.x); y = int(v.y); };
void vex4i::operator= (vex2f v) { x = int(v.x); y = int(v.y); };
void vex4i::operator= (vex2i v) { x = v.x; y = v.y; };
void vex4i::operator= (vex3d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
void vex4i::operator= (vex3f v) { x = int(v.x); y = int(v.y); z = int(v.z); };
void vex4i::operator= (vex3i v) { x = v.x; y = v.y; z = v.z; };
void vex4i::operator= (vex4d v) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v.w); };
void vex4i::operator= (vex4f v) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v.w); };


void vex3f::operator= (vex2d v) { x = float(v.x); y = float(v.y); };
void vex3f::operator= (vex2i v) { x = float(v.x); y = float(v.y); };
void vex3f::operator= (vex2f v) { x = v.x; y = v.y; };
void vex3f::operator= (vex3d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
void vex3f::operator= (vex3i v) { x = float(v.x); y = float(v.y); z = float(v.z); };
void vex3f::operator= (vex4f v) { x = v.x; y = v.y; z = v.z; };
void vex3f::operator= (vex4d v) { x = float(v.x); y = float(v.y); z = float(v.z); };
void vex3f::operator= (vex4i v) { x = float(v.x); y = float(v.y); z = float(v.z); };

void vex3d::operator= (vex2f v) { x = double(v.x); y = double(v.y); };
void vex3d::operator= (vex2i v) { x = double(v.x); y = double(v.y); };
void vex3d::operator= (vex2d v) { x = v.x; y = v.y; };
void vex3d::operator= (vex3f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
void vex3d::operator= (vex3i v) { x = double(v.x); y = double(v.y); z = double(v.z); };
void vex3d::operator= (vex4d v) { x = v.x; y = v.y; z = v.z; };
void vex3d::operator= (vex4f v) { x = double(v.x); y = double(v.y); z = double(v.z); };
void vex3d::operator= (vex4i v) { x = double(v.x); y = double(v.y); z = double(v.z); };

void vex3i::operator= (vex2d v) { x = int(v.x); y = int(v.y); };
void vex3i::operator= (vex2f v) { x = int(v.x); y = int(v.y); };
void vex3i::operator= (vex2i v) { x = v.x; y = v.y; };
void vex3i::operator= (vex3d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
void vex3i::operator= (vex3f v) { x = int(v.x); y = int(v.y); z = int(v.z); };
void vex3i::operator= (vex4i v) { x = v.x; y = v.y; z = v.z; };
void vex3i::operator= (vex4d v) { x = int(v.x); y = int(v.y); z = int(v.z); };
void vex3i::operator= (vex4f v) { x = int(v.x); y = int(v.y); z = int(v.z); };


void vex2f::operator= (vex2d v) { x = float(v.x); y = float(v.y); };
void vex2f::operator= (vex2i v) { x = float(v.x); y = float(v.y); };
void vex2f::operator= (vex3f v) { x = v.x; y = v.y; };
void vex2f::operator= (vex3d v) { x = float(v.x); y = float(v.y); };
void vex2f::operator= (vex3i v) { x = float(v.x); y = float(v.y); };
void vex2f::operator= (vex4f v) { x = v.x; y = v.y; };
void vex2f::operator= (vex4d v) { x = float(v.x); y = float(v.y); };
void vex2f::operator= (vex4i v) { x = float(v.x); y = float(v.y); };

void vex2d::operator= (vex2f v) { x = double(v.x); y = double(v.y); };
void vex2d::operator= (vex2i v) { x = double(v.x); y = double(v.y); };
void vex2d::operator= (vex3d v) { x = v.x; y = v.y; };
void vex2d::operator= (vex3f v) { x = double(v.x); y = double(v.y); };
void vex2d::operator= (vex3i v) { x = double(v.x); y = double(v.y); };
void vex2d::operator= (vex4d v) { x = v.x; y = v.y; };
void vex2d::operator= (vex4f v) { x = double(v.x); y = double(v.y); };
void vex2d::operator= (vex4i v) { x = double(v.x); y = double(v.y); };

void vex2i::operator= (vex2d v) { x = int(v.x); y = int(v.y); };
void vex2i::operator= (vex2f v) { x = int(v.x); y = int(v.y); };
void vex2i::operator= (vex3i v) { x = v.x; y = v.y; };
void vex2i::operator= (vex3d v) { x = int(v.x); y = int(v.y); };
void vex2i::operator= (vex3f v) { x = int(v.x); y = int(v.y); };
void vex2i::operator= (vex4i v) { x = v.x; y = v.y; };
void vex2i::operator= (vex4d v) { x = int(v.x); y = int(v.y); };
void vex2i::operator= (vex4f v) { x = int(v.x); y = int(v.y); };

// /////////////////////////// //

vex4f::vex4f(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex4f::vex4f(vex2f v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4f::vex4f(float v2, vex2f v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4f::vex4f(float v1, float v2, vex2f v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4f::vex4f(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex4f::vex4f(vex2f v, vex2f v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4f::vex4f(vex2f v, double v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2f v, double v1, double v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(double v2, vex2f v, double v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(double v1, double v2, vex2f v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(double v1, vex2f v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex2f v, int v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2f v, int v1, int v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(int v2, vex2f v, int v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(int v1, int v2, vex2f v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(int v1, vex2f v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex2d v, float v1) { x = v.x; y = v.y; z = v1; };
vex4f::vex4f(vex2d v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4f::vex4f(float v2, vex2d v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4f::vex4f(float v1, float v2, vex2d v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4f::vex4f(float v1, vex2d v) { x = v1; y = v.x; z = v.y; };
vex4f::vex4f(vex2d v, vex2d v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4f::vex4f(vex2d v, double v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2d v, double v1, double v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(double v2, vex2d v, double v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(double v1, double v2, vex2d v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(double v1, vex2d v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex2d v, int v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2d v, int v1, int v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(int v2, vex2d v, int v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(int v1, int v2, vex2d v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(int v1, vex2d v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex2i v, float v1) { x = v.x; y = v.y; z = v1; };
vex4f::vex4f(vex2i v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4f::vex4f(float v2, vex2i v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4f::vex4f(float v1, float v2, vex2i v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4f::vex4f(float v1, vex2i v) { x = v1; y = v.x; z = v.y; };
vex4f::vex4f(vex2i v, vex2i v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4f::vex4f(vex2i v, double v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2i v, double v1, double v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(double v2, vex2i v, double v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(double v1, double v2, vex2i v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(double v1, vex2i v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex2i v, int v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex4f::vex4f(vex2i v, int v1, int v2) { x = float(v.x); y = float(v.y); z = float(v1); w = float(v2); };
vex4f::vex4f(int v2, vex2i v, int v1) { x = float(v2); y = float(v.x); z = float(v.y); w = float(v1); };
vex4f::vex4f(int v1, int v2, vex2i v) { x = float(v1); y = float(v2); z = float(v.x); w = float(v.y); };
vex4f::vex4f(int v1, vex2i v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex4f::vex4f(vex3f v, float v1) { x = v.x; y = v.y; z = v.z; w = v1; };
vex4f::vex4f(float v1, vex3f v) { x = v1; y = v.x; z = v.y; w = v.z; };
vex4f::vex4f(vex3d v, float v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = v1; };
vex4f::vex4f(float v1, vex3d v) { x = v1; y = float(v.x); z = float(v.y); w = float(v.z); };
vex4f::vex4f(vex3i v, float v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = v1; };
vex4f::vex4f(float v1, vex3i v) { x = v1; y = float(v.x); z = float(v.y); w = float(v.z); };
vex4f::vex4f(vex3f v, double v1) { x = v.x; y = v.y; z = v.z; w = float(v1); };
vex4f::vex4f(double v1, vex3f v) { x = v1; y = v.x; z = v.y; w = float(v.z); };
vex4f::vex4f(vex3d v, double v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v1); };
vex4f::vex4f(double v1, vex3d v) { x = float(v1); y = float(v.x); z = float(v.y); w = float(v.z); };
vex4f::vex4f(vex3i v, double v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = v1; };
vex4f::vex4f(double v1, vex3i v) { x = float(v1); y = float(v.x); z = float(v.y); w = float(v.z); };
vex4f::vex4f(vex3f v, int v1) { x = v.x; y = v.y; z = v.z; w = float(v1); };
vex4f::vex4f(int v1, vex3f v) { x = v1; y = v.x; z = v.y; w = float(v.z); };
vex4f::vex4f(vex3d v, int v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = float(v1); };
vex4f::vex4f(int v1, vex3d v) { x = float(v1); y = float(v.x); z = float(v.y); w = float(v.z); };
vex4f::vex4f(vex3i v, int v1) { x = float(v.x); y = float(v.y); z = float(v.z); w = v1; };
vex4f::vex4f(int v1, vex3i v) { x = float(v1); y = float(v.x); z = float(v.y); w = float(v.z); };

// /////////////////////////// //

vex4d::vex4d(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex4d::vex4d(vex2f v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4d::vex4d(float v2, vex2f v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4d::vex4d(float v1, float v2, vex2f v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4d::vex4d(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex4d::vex4d(vex2f v, vex2f v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4d::vex4d(vex2f v, double v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2f v, double v1, double v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(double v2, vex2f v, double v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(double v1, double v2, vex2f v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(double v1, vex2f v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex2f v, int v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2f v, int v1, int v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(int v2, vex2f v, int v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(int v1, int v2, vex2f v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(int v1, vex2f v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex2d v, float v1) { x = v.x; y = v.y; z = v1; };
vex4d::vex4d(vex2d v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4d::vex4d(float v2, vex2d v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4d::vex4d(float v1, float v2, vex2d v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4d::vex4d(float v1, vex2d v) { x = v1; y = v.x; z = v.y; };
vex4d::vex4d(vex2d v, vex2d v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4d::vex4d(vex2d v, double v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2d v, double v1, double v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(double v2, vex2d v, double v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(double v1, double v2, vex2d v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(double v1, vex2d v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex2d v, int v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2d v, int v1, int v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(int v2, vex2d v, int v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(int v1, int v2, vex2d v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(int v1, vex2d v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex2i v, float v1) { x = v.x; y = v.y; z = v1; };
vex4d::vex4d(vex2i v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4d::vex4d(float v2, vex2i v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4d::vex4d(float v1, float v2, vex2i v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4d::vex4d(float v1, vex2i v) { x = v1; y = v.x; z = v.y; };
vex4d::vex4d(vex2i v, vex2i v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4d::vex4d(vex2i v, double v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2i v, double v1, double v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(double v2, vex2i v, double v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(double v1, double v2, vex2i v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(double v1, vex2i v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex2i v, int v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex4d::vex4d(vex2i v, int v1, int v2) { x = double(v.x); y = double(v.y); z = double(v1); w = double(v2); };
vex4d::vex4d(int v2, vex2i v, int v1) { x = double(v2); y = double(v.x); z = double(v.y); w = double(v1); };
vex4d::vex4d(int v1, int v2, vex2i v) { x = double(v1); y = double(v2); z = double(v.x); w = double(v.y); };
vex4d::vex4d(int v1, vex2i v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex4d::vex4d(vex3f v, float v1) { x = v.x; y = v.y; z = v.z; w = v1; };
vex4d::vex4d(float v1, vex3f v) { x = v1; y = v.x; z = v.y; w = v.z; };
vex4d::vex4d(vex3d v, float v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = v1; };
vex4d::vex4d(float v1, vex3d v) { x = v1; y = double(v.x); z = double(v.y); w = double(v.z); };
vex4d::vex4d(vex3i v, float v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = v1; };
vex4d::vex4d(float v1, vex3i v) { x = v1; y = double(v.x); z = double(v.y); w = double(v.z); };
vex4d::vex4d(vex3f v, double v1) { x = v.x; y = v.y; z = v.z; w = double(v1); };
vex4d::vex4d(double v1, vex3f v) { x = v1; y = v.x; z = v.y; w = double(v.z); };
vex4d::vex4d(vex3d v, double v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = double(v1); };
vex4d::vex4d(double v1, vex3d v) { x = double(v1); y = double(v.x); z = double(v.y); w = double(v.z); };
vex4d::vex4d(vex3i v, double v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = v1; };
vex4d::vex4d(double v1, vex3i v) { x = double(v1); y = double(v.x); z = double(v.y); w = double(v.z); };
vex4d::vex4d(vex3f v, int v1) { x = v.x; y = v.y; z = v.z; w = double(v1); };
vex4d::vex4d(int v1, vex3f v) { x = v1; y = v.x; z = v.y; w = double(v.z); };
vex4d::vex4d(vex3d v, int v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = double(v1); };
vex4d::vex4d(int v1, vex3d v) { x = double(v1); y = double(v.x); z = double(v.y); w = double(v.z); };
vex4d::vex4d(vex3i v, int v1) { x = double(v.x); y = double(v.y); z = double(v.z); w = v1; };
vex4d::vex4d(int v1, vex3i v) { x = double(v1); y = double(v.x); z = double(v.y); w = double(v.z); };

// /////////////////////////// //

vex4i::vex4i(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex4i::vex4i(vex2f v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4i::vex4i(float v2, vex2f v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4i::vex4i(float v1, float v2, vex2f v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4i::vex4i(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex4i::vex4i(vex2f v, vex2f v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4i::vex4i(vex2f v, double v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2f v, double v1, double v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(double v2, vex2f v, double v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(double v1, double v2, vex2f v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(double v1, vex2f v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex2f v, int v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2f v, int v1, int v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(int v2, vex2f v, int v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(int v1, int v2, vex2f v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(int v1, vex2f v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex2d v, float v1) { x = v.x; y = v.y; z = v1; };
vex4i::vex4i(vex2d v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4i::vex4i(float v2, vex2d v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4i::vex4i(float v1, float v2, vex2d v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4i::vex4i(float v1, vex2d v) { x = v1; y = v.x; z = v.y; };
vex4i::vex4i(vex2d v, vex2d v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4i::vex4i(vex2d v, double v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2d v, double v1, double v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(double v2, vex2d v, double v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(double v1, double v2, vex2d v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(double v1, vex2d v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex2d v, int v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2d v, int v1, int v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(int v2, vex2d v, int v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(int v1, int v2, vex2d v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(int v1, vex2d v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex2i v, float v1) { x = v.x; y = v.y; z = v1; };
vex4i::vex4i(vex2i v, float v1, float v2) { x = v.x; y = v.y; z = v1; w = v2; };
vex4i::vex4i(float v2, vex2i v, float v1) { x = v2; y = v.x; z = v.y; w = v1; };
vex4i::vex4i(float v1, float v2, vex2i v) { x = v1; y = v2; z = v.x; w = v.y; };
vex4i::vex4i(float v1, vex2i v) { x = v1; y = v.x; z = v.y; };
vex4i::vex4i(vex2i v, vex2i v1) { x = v.x; y = v.y; z = v1.x; w = v1.y; };
vex4i::vex4i(vex2i v, double v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2i v, double v1, double v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(double v2, vex2i v, double v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(double v1, double v2, vex2i v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(double v1, vex2i v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex2i v, int v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex4i::vex4i(vex2i v, int v1, int v2) { x = int(v.x); y = int(v.y); z = int(v1); w = int(v2); };
vex4i::vex4i(int v2, vex2i v, int v1) { x = int(v2); y = int(v.x); z = int(v.y); w = int(v1); };
vex4i::vex4i(int v1, int v2, vex2i v) { x = int(v1); y = int(v2); z = int(v.x); w = int(v.y); };
vex4i::vex4i(int v1, vex2i v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex4i::vex4i(vex3f v, float v1) { x = v.x; y = v.y; z = v.z; w = v1; };
vex4i::vex4i(float v1, vex3f v) { x = v1; y = v.x; z = v.y; w = v.z; };
vex4i::vex4i(vex3d v, float v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = v1; };
vex4i::vex4i(float v1, vex3d v) { x = v1; y = int(v.x); z = int(v.y); w = int(v.z); };
vex4i::vex4i(vex3i v, float v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = v1; };
vex4i::vex4i(float v1, vex3i v) { x = v1; y = int(v.x); z = int(v.y); w = int(v.z); };
vex4i::vex4i(vex3f v, double v1) { x = v.x; y = v.y; z = v.z; w = int(v1); };
vex4i::vex4i(double v1, vex3f v) { x = v1; y = v.x; z = v.y; w = int(v.z); };
vex4i::vex4i(vex3d v, double v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v1); };
vex4i::vex4i(double v1, vex3d v) { x = int(v1); y = int(v.x); z = int(v.y); w = int(v.z); };
vex4i::vex4i(vex3i v, double v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = v1; };
vex4i::vex4i(double v1, vex3i v) { x = int(v1); y = int(v.x); z = int(v.y); w = int(v.z); };
vex4i::vex4i(vex3f v, int v1) { x = v.x; y = v.y; z = v.z; w = int(v1); };
vex4i::vex4i(int v1, vex3f v) { x = v1; y = v.x; z = v.y; w = int(v.z); };
vex4i::vex4i(vex3d v, int v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = int(v1); };
vex4i::vex4i(int v1, vex3d v) { x = int(v1); y = int(v.x); z = int(v.y); w = int(v.z); };
vex4i::vex4i(vex3i v, int v1) { x = int(v.x); y = int(v.y); z = int(v.z); w = v1; };
vex4i::vex4i(int v1, vex3i v) { x = int(v1); y = int(v.x); z = int(v.y); w = int(v.z); };


// /////////////////////////// //

vex3f::vex3f(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex3f::vex3f(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3f::vex3f(vex2d v, float v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(float v1, vex2d v) { x = v1; y = float(v.x); z = float(v.y); };
vex3f::vex3f(vex2i v, float v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(float v1, vex2i v) { x = v1; y = float(v.x); z = float(v.y); };
vex3f::vex3f(vex2f v, double v1) { x = v.x; y = v.y; z = v1; };
vex3f::vex3f(double v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3f::vex3f(vex2d v, double v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(double v1, vex2d v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex3f::vex3f(vex2i v, double v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(double v1, vex2i v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex3f::vex3f(vex2f v, int v1) { x = v.x; y = v.y; z = v1; };
vex3f::vex3f(int v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3f::vex3f(vex2d v, int v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(int v1, vex2d v) { x = float(v1); y = float(v.x); z = float(v.y); };
vex3f::vex3f(vex2i v, int v1) { x = float(v.x); y = float(v.y); z = float(v1); };
vex3f::vex3f(int v1, vex2i v) { x = float(v1); y = float(v.x); z = float(v.y); };

// /////////////////////////// //

vex3d::vex3d(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex3d::vex3d(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3d::vex3d(vex2d v, float v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(float v1, vex2d v) { x = v1; y = double(v.x); z = double(v.y); };
vex3d::vex3d(vex2i v, float v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(float v1, vex2i v) { x = v1; y = double(v.x); z = double(v.y); };
vex3d::vex3d(vex2f v, double v1) { x = v.x; y = v.y; z = v1; };
vex3d::vex3d(double v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3d::vex3d(vex2d v, double v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(double v1, vex2d v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex3d::vex3d(vex2i v, double v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(double v1, vex2i v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex3d::vex3d(vex2f v, int v1) { x = v.x; y = v.y; z = v1; };
vex3d::vex3d(int v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3d::vex3d(vex2d v, int v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(int v1, vex2d v) { x = double(v1); y = double(v.x); z = double(v.y); };
vex3d::vex3d(vex2i v, int v1) { x = double(v.x); y = double(v.y); z = double(v1); };
vex3d::vex3d(int v1, vex2i v) { x = double(v1); y = double(v.x); z = double(v.y); };

// /////////////////////////// //

vex3i::vex3i(vex2f v, float v1) { x = v.x; y = v.y; z = v1; };
vex3i::vex3i(float v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3i::vex3i(vex2d v, float v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(float v1, vex2d v) { x = v1; y = int(v.x); z = int(v.y); };
vex3i::vex3i(vex2i v, float v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(float v1, vex2i v) { x = v1; y = int(v.x); z = int(v.y); };
vex3i::vex3i(vex2f v, double v1) { x = v.x; y = v.y; z = v1; };
vex3i::vex3i(double v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3i::vex3i(vex2d v, double v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(double v1, vex2d v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex3i::vex3i(vex2i v, double v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(double v1, vex2i v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex3i::vex3i(vex2f v, int v1) { x = v.x; y = v.y; z = v1; };
vex3i::vex3i(int v1, vex2f v) { x = v1; y = v.x; z = v.y; };
vex3i::vex3i(vex2d v, int v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(int v1, vex2d v) { x = int(v1); y = int(v.x); z = int(v.y); };
vex3i::vex3i(vex2i v, int v1) { x = int(v.x); y = int(v.y); z = int(v1); };
vex3i::vex3i(int v1, vex2i v) { x = int(v1); y = int(v.x); z = int(v.y); };

// ///////////////////////// //


vex4f vex4f::operator+ (vex4d v) { return vex4f(x + float(v.x), y + float(v.y), z + float(v.z), w + float(v.w)); };
vex4f vex4f::operator- (vex4d v) { return vex4f(x - float(v.x), y - float(v.y), z - float(v.z), w - float(v.w)); };
vex4f vex4f::operator* (vex4d v) { return vex4f(x * float(v.x), y * float(v.y), z * float(v.z), w * float(v.w)); };
vex4f vex4f::operator/ (vex4d v) { return vex4f(x / float(v.x), y / float(v.y), z / float(v.z), w / float(v.w)); };
vex4f vex4f::operator+ (vex4i v) { return vex4f(x + float(v.x), y + float(v.y), z + float(v.z), w + float(v.w)); };
vex4f vex4f::operator- (vex4i v) { return vex4f(x - float(v.x), y - float(v.y), z - float(v.z), w - float(v.w)); };
vex4f vex4f::operator* (vex4i v) { return vex4f(x * float(v.x), y * float(v.y), z * float(v.z), w * float(v.w)); };
vex4f vex4f::operator/ (vex4i v) { return vex4f(x / float(v.x), y / float(v.y), z / float(v.z), w / float(v.w)); };
vex4f vex4f::operator+ (vex3f v) { return vex4f(x + v.x, y + v.y, z + v.z, w); };
vex4f vex4f::operator- (vex3f v) { return vex4f(x - v.x, y - v.y, z - v.z, w); };
vex4f vex4f::operator* (vex3f v) { return vex4f(x * v.x, y * v.y, z * v.z, w); };
vex4f vex4f::operator/ (vex3f v) { return vex4f(x / v.x, y / v.y, z / v.z, w); };
vex4f vex4f::operator+ (vex3i v) { return vex4f(x + float(v.x), y + float(v.y), z + float(v.z), w); };
vex4f vex4f::operator- (vex3i v) { return vex4f(x - float(v.x), y - float(v.y), z - float(v.z), w); };
vex4f vex4f::operator* (vex3i v) { return vex4f(x * float(v.x), y * float(v.y), z * float(v.z), w); };
vex4f vex4f::operator/ (vex3i v) { return vex4f(x / float(v.x), y / float(v.y), z / float(v.z), w); };
vex4f vex4f::operator+ (vex3d v) { return vex4f(x + float(v.x), y + float(v.y), z + float(v.z), w); };
vex4f vex4f::operator- (vex3d v) { return vex4f(x - float(v.x), y - float(v.y), z - float(v.z), w); };
vex4f vex4f::operator* (vex3d v) { return vex4f(x * float(v.x), y * float(v.y), z * float(v.z), w); };
vex4f vex4f::operator/ (vex3d v) { return vex4f(x / float(v.x), y / float(v.y), z / float(v.z), w); };
vex4f vex4f::operator+ (vex2f v) { return vex4f(x + v.x, y + v.y, z, w); };
vex4f vex4f::operator- (vex2f v) { return vex4f(x - v.x, y - v.y, z, w); };
vex4f vex4f::operator* (vex2f v) { return vex4f(x * v.x, y * v.y, z, w); };
vex4f vex4f::operator/ (vex2f v) { return vex4f(x / v.x, y / v.y, z, w); };
vex4f vex4f::operator+ (vex2i v) { return vex4f(x + float(v.x), y + float(v.y), z, w); };
vex4f vex4f::operator- (vex2i v) { return vex4f(x - float(v.x), y - float(v.y), z, w); };
vex4f vex4f::operator* (vex2i v) { return vex4f(x * float(v.x), y * float(v.y), z, w); };
vex4f vex4f::operator/ (vex2i v) { return vex4f(x / float(v.x), y / float(v.y), z, w); };
vex4f vex4f::operator+ (vex2d v) { return vex4f(x + float(v.x), y + float(v.y), z, w); };
vex4f vex4f::operator- (vex2d v) { return vex4f(x - float(v.x), y - float(v.y), z, w); };
vex4f vex4f::operator* (vex2d v) { return vex4f(x * float(v.x), y * float(v.y), z, w); };
vex4f vex4f::operator/ (vex2d v) { return vex4f(x / float(v.x), y / float(v.y), z, w); };


vex4d vex4d::operator+ (vex4f v) { return vex4d(x + double(v.x), y + double(v.y), z + double(v.z), w + double(v.w)); };
vex4d vex4d::operator- (vex4f v) { return vex4d(x - double(v.x), y - double(v.y), z - double(v.z), w - double(v.w)); };
vex4d vex4d::operator* (vex4f v) { return vex4d(x * double(v.x), y * double(v.y), z * double(v.z), w * double(v.w)); };
vex4d vex4d::operator/ (vex4f v) { return vex4d(x / double(v.x), y / double(v.y), z / double(v.z), w / double(v.w)); };
vex4d vex4d::operator+ (vex4i v) { return vex4d(x + double(v.x), y + double(v.y), z + double(v.z), w + double(v.w)); };
vex4d vex4d::operator- (vex4i v) { return vex4d(x - double(v.x), y - double(v.y), z - double(v.z), w - double(v.w)); };
vex4d vex4d::operator* (vex4i v) { return vex4d(x * double(v.x), y * double(v.y), z * double(v.z), w * double(v.w)); };
vex4d vex4d::operator/ (vex4i v) { return vex4d(x / double(v.x), y / double(v.y), z / double(v.z), w / double(v.w)); };
vex4d vex4d::operator+ (vex3f v) { return vex4d(x + v.x, y + v.y, z + v.z, w); };
vex4d vex4d::operator- (vex3f v) { return vex4d(x - v.x, y - v.y, z - v.z, w); };
vex4d vex4d::operator* (vex3f v) { return vex4d(x * v.x, y * v.y, z * v.z, w); };
vex4d vex4d::operator/ (vex3f v) { return vex4d(x / v.x, y / v.y, z / v.z, w); };
vex4d vex4d::operator+ (vex3i v) { return vex4d(x + double(v.x), y + double(v.y), z + double(v.z), w); };
vex4d vex4d::operator- (vex3i v) { return vex4d(x - double(v.x), y - double(v.y), z - double(v.z), w); };
vex4d vex4d::operator* (vex3i v) { return vex4d(x * double(v.x), y * double(v.y), z * double(v.z), w); };
vex4d vex4d::operator/ (vex3i v) { return vex4d(x / double(v.x), y / double(v.y), z / double(v.z), w); };
vex4d vex4d::operator+ (vex3d v) { return vex4d(x + double(v.x), y + double(v.y), z + double(v.z), w); };
vex4d vex4d::operator- (vex3d v) { return vex4d(x - double(v.x), y - double(v.y), z - double(v.z), w); };
vex4d vex4d::operator* (vex3d v) { return vex4d(x * double(v.x), y * double(v.y), z * double(v.z), w); };
vex4d vex4d::operator/ (vex3d v) { return vex4d(x / double(v.x), y / double(v.y), z / double(v.z), w); };
vex4d vex4d::operator+ (vex2f v) { return vex4d(x + v.x, y + v.y, z, w); };
vex4d vex4d::operator- (vex2f v) { return vex4d(x - v.x, y - v.y, z, w); };
vex4d vex4d::operator* (vex2f v) { return vex4d(x * v.x, y * v.y, z, w); };
vex4d vex4d::operator/ (vex2f v) { return vex4d(x / v.x, y / v.y, z, w); };
vex4d vex4d::operator+ (vex2i v) { return vex4d(x + double(v.x), y + double(v.y), z, w); };
vex4d vex4d::operator- (vex2i v) { return vex4d(x - double(v.x), y - double(v.y), z, w); };
vex4d vex4d::operator* (vex2i v) { return vex4d(x * double(v.x), y * double(v.y), z, w); };
vex4d vex4d::operator/ (vex2i v) { return vex4d(x / double(v.x), y / double(v.y), z, w); };
vex4d vex4d::operator+ (vex2d v) { return vex4d(x + double(v.x), y + double(v.y), z, w); };
vex4d vex4d::operator- (vex2d v) { return vex4d(x - double(v.x), y - double(v.y), z, w); };
vex4d vex4d::operator* (vex2d v) { return vex4d(x * double(v.x), y * double(v.y), z, w); };
vex4d vex4d::operator/ (vex2d v) { return vex4d(x / double(v.x), y / double(v.y), z, w); };


vex4i vex4i::operator+ (vex4d v) { return vex4i(x + int(v.x), y + int(v.y), z + int(v.z), w + int(v.w)); };
vex4i vex4i::operator- (vex4d v) { return vex4i(x - int(v.x), y - int(v.y), z - int(v.z), w - int(v.w)); };
vex4i vex4i::operator* (vex4d v) { return vex4i(x * int(v.x), y * int(v.y), z * int(v.z), w * int(v.w)); };
vex4i vex4i::operator/ (vex4d v) { return vex4i(x / int(v.x), y / int(v.y), z / int(v.z), w / int(v.w)); };
vex4i vex4i::operator+ (vex4f v) { return vex4i(x + int(v.x), y + int(v.y), z + int(v.z), w + int(v.w)); };
vex4i vex4i::operator- (vex4f v) { return vex4i(x - int(v.x), y - int(v.y), z - int(v.z), w - int(v.w)); };
vex4i vex4i::operator* (vex4f v) { return vex4i(x * int(v.x), y * int(v.y), z * int(v.z), w * int(v.w)); };
vex4i vex4i::operator/ (vex4f v) { return vex4i(x / int(v.x), y / int(v.y), z / int(v.z), w / int(v.w)); };
vex4i vex4i::operator+ (vex3f v) { return vex4i(x + v.x, y + v.y, z + v.z, w); };
vex4i vex4i::operator- (vex3f v) { return vex4i(x - v.x, y - v.y, z - v.z, w); };
vex4i vex4i::operator* (vex3f v) { return vex4i(x * v.x, y * v.y, z * v.z, w); };
vex4i vex4i::operator/ (vex3f v) { return vex4i(x / v.x, y / v.y, z / v.z, w); };
vex4i vex4i::operator+ (vex3i v) { return vex4i(x + int(v.x), y + int(v.y), z + int(v.z), w); };
vex4i vex4i::operator- (vex3i v) { return vex4i(x - int(v.x), y - int(v.y), z - int(v.z), w); };
vex4i vex4i::operator* (vex3i v) { return vex4i(x * int(v.x), y * int(v.y), z * int(v.z), w); };
vex4i vex4i::operator/ (vex3i v) { return vex4i(x / int(v.x), y / int(v.y), z / int(v.z), w); };
vex4i vex4i::operator+ (vex3d v) { return vex4i(x + int(v.x), y + int(v.y), z + int(v.z), w); };
vex4i vex4i::operator- (vex3d v) { return vex4i(x - int(v.x), y - int(v.y), z - int(v.z), w); };
vex4i vex4i::operator* (vex3d v) { return vex4i(x * int(v.x), y * int(v.y), z * int(v.z), w); };
vex4i vex4i::operator/ (vex3d v) { return vex4i(x / int(v.x), y / int(v.y), z / int(v.z), w); };
vex4i vex4i::operator+ (vex2f v) { return vex4i(x + v.x, y + v.y, z, w); };
vex4i vex4i::operator- (vex2f v) { return vex4i(x - v.x, y - v.y, z, w); };
vex4i vex4i::operator* (vex2f v) { return vex4i(x * v.x, y * v.y, z, w); };
vex4i vex4i::operator/ (vex2f v) { return vex4i(x / v.x, y / v.y, z, w); };
vex4i vex4i::operator+ (vex2i v) { return vex4i(x + int(v.x), y + int(v.y), z, w); };
vex4i vex4i::operator- (vex2i v) { return vex4i(x - int(v.x), y - int(v.y), z, w); };
vex4i vex4i::operator* (vex2i v) { return vex4i(x * int(v.x), y * int(v.y), z, w); };
vex4i vex4i::operator/ (vex2i v) { return vex4i(x / int(v.x), y / int(v.y), z, w); };
vex4i vex4i::operator+ (vex2d v) { return vex4i(x + int(v.x), y + int(v.y), z, w); };
vex4i vex4i::operator- (vex2d v) { return vex4i(x - int(v.x), y - int(v.y), z, w); };
vex4i vex4i::operator* (vex2d v) { return vex4i(x * int(v.x), y * int(v.y), z, w); };
vex4i vex4i::operator/ (vex2d v) { return vex4i(x / int(v.x), y / int(v.y), z, w); };


vex3f vex3f::operator+ (vex4d v) { return vex3f(x + float(v.x), y + float(v.y), z + float(v.z)); };
vex3f vex3f::operator- (vex4d v) { return vex3f(x - float(v.x), y - float(v.y), z - float(v.z)); };
vex3f vex3f::operator* (vex4d v) { return vex3f(x * float(v.x), y * float(v.y), z * float(v.z)); };
vex3f vex3f::operator/ (vex4d v) { return vex3f(x / float(v.x), y / float(v.y), z / float(v.z)); };
vex3f vex3f::operator+ (vex4i v) { return vex3f(x + float(v.x), y + float(v.y), z + float(v.z)); };
vex3f vex3f::operator- (vex4i v) { return vex3f(x - float(v.x), y - float(v.y), z - float(v.z)); };
vex3f vex3f::operator* (vex4i v) { return vex3f(x * float(v.x), y * float(v.y), z * float(v.z)); };
vex3f vex3f::operator/ (vex4i v) { return vex3f(x / float(v.x), y / float(v.y), z / float(v.z)); };
vex3f vex3f::operator+ (vex4f v) { return vex3f(x + v.x, y + v.y, z + v.z); };
vex3f vex3f::operator- (vex4f v) { return vex3f(x - v.x, y - v.y, z - v.z); };
vex3f vex3f::operator* (vex4f v) { return vex3f(x * v.x, y * v.y, z * v.z); };
vex3f vex3f::operator/ (vex4f v) { return vex3f(x / v.x, y / v.y, z / v.z); };
vex3f vex3f::operator+ (vex3i v) { return vex3f(x + float(v.x), y + float(v.y), z + float(v.z)); };
vex3f vex3f::operator- (vex3i v) { return vex3f(x - float(v.x), y - float(v.y), z - float(v.z)); };
vex3f vex3f::operator* (vex3i v) { return vex3f(x * float(v.x), y * float(v.y), z * float(v.z)); };
vex3f vex3f::operator/ (vex3i v) { return vex3f(x / float(v.x), y / float(v.y), z / float(v.z)); };
vex3f vex3f::operator+ (vex3d v) { return vex3f(x + float(v.x), y + float(v.y), z + float(v.z)); };
vex3f vex3f::operator- (vex3d v) { return vex3f(x - float(v.x), y - float(v.y), z - float(v.z)); };
vex3f vex3f::operator* (vex3d v) { return vex3f(x * float(v.x), y * float(v.y), z * float(v.z)); };
vex3f vex3f::operator/ (vex3d v) { return vex3f(x / float(v.x), y / float(v.y), z / float(v.z)); };
vex3f vex3f::operator+ (vex2f v) { return vex3f(x + v.x, y + v.y, z); };
vex3f vex3f::operator- (vex2f v) { return vex3f(x - v.x, y - v.y, z); };
vex3f vex3f::operator* (vex2f v) { return vex3f(x * v.x, y * v.y, z); };
vex3f vex3f::operator/ (vex2f v) { return vex3f(x / v.x, y / v.y, z); };
vex3f vex3f::operator+ (vex2i v) { return vex3f(x + float(v.x), y + float(v.y), z); };
vex3f vex3f::operator- (vex2i v) { return vex3f(x - float(v.x), y - float(v.y), z); };
vex3f vex3f::operator* (vex2i v) { return vex3f(x * float(v.x), y * float(v.y), z); };
vex3f vex3f::operator/ (vex2i v) { return vex3f(x / float(v.x), y / float(v.y), z); };
vex3f vex3f::operator+ (vex2d v) { return vex3f(x + float(v.x), y + float(v.y), z); };
vex3f vex3f::operator- (vex2d v) { return vex3f(x - float(v.x), y - float(v.y), z); };
vex3f vex3f::operator* (vex2d v) { return vex3f(x * float(v.x), y * float(v.y), z); };
vex3f vex3f::operator/ (vex2d v) { return vex3f(x / float(v.x), y / float(v.y), z); };

vex3d vex3d::operator+ (vex4f v) { return vex3d(x + double(v.x), y + double(v.y), z + double(v.z)); };
vex3d vex3d::operator- (vex4f v) { return vex3d(x - double(v.x), y - double(v.y), z - double(v.z)); };
vex3d vex3d::operator* (vex4f v) { return vex3d(x * double(v.x), y * double(v.y), z * double(v.z)); };
vex3d vex3d::operator/ (vex4f v) { return vex3d(x / double(v.x), y / double(v.y), z / double(v.z)); };
vex3d vex3d::operator+ (vex4i v) { return vex3d(x + double(v.x), y + double(v.y), z + double(v.z)); };
vex3d vex3d::operator- (vex4i v) { return vex3d(x - double(v.x), y - double(v.y), z - double(v.z)); };
vex3d vex3d::operator* (vex4i v) { return vex3d(x * double(v.x), y * double(v.y), z * double(v.z)); };
vex3d vex3d::operator/ (vex4i v) { return vex3d(x / double(v.x), y / double(v.y), z / double(v.z)); };
vex3d vex3d::operator+ (vex4d v) { return vex3d(x + v.x, y + v.y, z + v.z); };
vex3d vex3d::operator- (vex4d v) { return vex3d(x - v.x, y - v.y, z - v.z); };
vex3d vex3d::operator* (vex4d v) { return vex3d(x * v.x, y * v.y, z * v.z); };
vex3d vex3d::operator/ (vex4d v) { return vex3d(x / v.x, y / v.y, z / v.z); };
vex3d vex3d::operator+ (vex3i v) { return vex3d(x + double(v.x), y + double(v.y), z + double(v.z)); };
vex3d vex3d::operator- (vex3i v) { return vex3d(x - double(v.x), y - double(v.y), z - double(v.z)); };
vex3d vex3d::operator* (vex3i v) { return vex3d(x * double(v.x), y * double(v.y), z * double(v.z)); };
vex3d vex3d::operator/ (vex3i v) { return vex3d(x / double(v.x), y / double(v.y), z / double(v.z)); };
vex3d vex3d::operator+ (vex3f v) { return vex3d(x + double(v.x), y + double(v.y), z + double(v.z)); };
vex3d vex3d::operator- (vex3f v) { return vex3d(x - double(v.x), y - double(v.y), z - double(v.z)); };
vex3d vex3d::operator* (vex3f v) { return vex3d(x * double(v.x), y * double(v.y), z * double(v.z)); };
vex3d vex3d::operator/ (vex3f v) { return vex3d(x / double(v.x), y / double(v.y), z / double(v.z)); };
vex3d vex3d::operator+ (vex2d v) { return vex3d(x + v.x, y + v.y, z); };
vex3d vex3d::operator- (vex2d v) { return vex3d(x - v.x, y - v.y, z); };
vex3d vex3d::operator* (vex2d v) { return vex3d(x * v.x, y * v.y, z); };
vex3d vex3d::operator/ (vex2d v) { return vex3d(x / v.x, y / v.y, z); };
vex3d vex3d::operator+ (vex2i v) { return vex3d(x + double(v.x), y + double(v.y), z); };
vex3d vex3d::operator- (vex2i v) { return vex3d(x - double(v.x), y - double(v.y), z); };
vex3d vex3d::operator* (vex2i v) { return vex3d(x * double(v.x), y * double(v.y), z); };
vex3d vex3d::operator/ (vex2i v) { return vex3d(x / double(v.x), y / double(v.y), z); };
vex3d vex3d::operator+ (vex2f v) { return vex3d(x + double(v.x), y + double(v.y), z); };
vex3d vex3d::operator- (vex2f v) { return vex3d(x - double(v.x), y - double(v.y), z); };
vex3d vex3d::operator* (vex2f v) { return vex3d(x * double(v.x), y * double(v.y), z); };
vex3d vex3d::operator/ (vex2f v) { return vex3d(x / double(v.x), y / double(v.y), z); };

vex3i vex3i::operator+ (vex4d v) { return vex3i(x + int(v.x), y + int(v.y), z + int(v.z)); };
vex3i vex3i::operator- (vex4d v) { return vex3i(x - int(v.x), y - int(v.y), z - int(v.z)); };
vex3i vex3i::operator* (vex4d v) { return vex3i(x * int(v.x), y * int(v.y), z * int(v.z)); };
vex3i vex3i::operator/ (vex4d v) { return vex3i(x / int(v.x), y / int(v.y), z / int(v.z)); };
vex3i vex3i::operator+ (vex4f v) { return vex3i(x + int(v.x), y + int(v.y), z + int(v.z)); };
vex3i vex3i::operator- (vex4f v) { return vex3i(x - int(v.x), y - int(v.y), z - int(v.z)); };
vex3i vex3i::operator* (vex4f v) { return vex3i(x * int(v.x), y * int(v.y), z * int(v.z)); };
vex3i vex3i::operator/ (vex4f v) { return vex3i(x / int(v.x), y / int(v.y), z / int(v.z)); };
vex3i vex3i::operator+ (vex4i v) { return vex3i(x + v.x, y + v.y, z + v.z); };
vex3i vex3i::operator- (vex4i v) { return vex3i(x - v.x, y - v.y, z - v.z); };
vex3i vex3i::operator* (vex4i v) { return vex3i(x * v.x, y * v.y, z * v.z); };
vex3i vex3i::operator/ (vex4i v) { return vex3i(x / v.x, y / v.y, z / v.z); };
vex3i vex3i::operator+ (vex3f v) { return vex3i(x + int(v.x), y + int(v.y), z + int(v.z)); };
vex3i vex3i::operator- (vex3f v) { return vex3i(x - int(v.x), y - int(v.y), z - int(v.z)); };
vex3i vex3i::operator* (vex3f v) { return vex3i(x * int(v.x), y * int(v.y), z * int(v.z)); };
vex3i vex3i::operator/ (vex3f v) { return vex3i(x / int(v.x), y / int(v.y), z / int(v.z)); };
vex3i vex3i::operator+ (vex3d v) { return vex3i(x + int(v.x), y + int(v.y), z + int(v.z)); };
vex3i vex3i::operator- (vex3d v) { return vex3i(x - int(v.x), y - int(v.y), z - int(v.z)); };
vex3i vex3i::operator* (vex3d v) { return vex3i(x * int(v.x), y * int(v.y), z * int(v.z)); };
vex3i vex3i::operator/ (vex3d v) { return vex3i(x / int(v.x), y / int(v.y), z / int(v.z)); };
vex3i vex3i::operator+ (vex2i v) { return vex3i(x + v.x, y + v.y, z); };
vex3i vex3i::operator- (vex2i v) { return vex3i(x - v.x, y - v.y, z); };
vex3i vex3i::operator* (vex2i v) { return vex3i(x * v.x, y * v.y, z); };
vex3i vex3i::operator/ (vex2i v) { return vex3i(x / v.x, y / v.y, z); };
vex3i vex3i::operator+ (vex2f v) { return vex3i(x + int(v.x), y + int(v.y), z); };
vex3i vex3i::operator- (vex2f v) { return vex3i(x - int(v.x), y - int(v.y), z); };
vex3i vex3i::operator* (vex2f v) { return vex3i(x * int(v.x), y * int(v.y), z); };
vex3i vex3i::operator/ (vex2f v) { return vex3i(x / int(v.x), y / int(v.y), z); };
vex3i vex3i::operator+ (vex2d v) { return vex3i(x + int(v.x), y + int(v.y), z); };
vex3i vex3i::operator- (vex2d v) { return vex3i(x - int(v.x), y - int(v.y), z); };
vex3i vex3i::operator* (vex2d v) { return vex3i(x * int(v.x), y * int(v.y), z); };
vex3i vex3i::operator/ (vex2d v) { return vex3i(x / int(v.x), y / int(v.y), z); };


vex2f vex2f::operator+ (vex4d v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex4d v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex4d v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex4d v) { return vex2f(x / float(v.x), y / float(v.y)); };
vex2f vex2f::operator+ (vex4i v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex4i v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex4i v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex4i v) { return vex2f(x / float(v.x), y / float(v.y)); };
vex2f vex2f::operator+ (vex4f v) { return vex2f(x + v.x, y + v.y); };
vex2f vex2f::operator- (vex4f v) { return vex2f(x - v.x, y - v.y); };
vex2f vex2f::operator* (vex4f v) { return vex2f(x * v.x, y * v.y); };
vex2f vex2f::operator/ (vex4f v) { return vex2f(x / v.x, y / v.y); };
vex2f vex2f::operator+ (vex3i v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex3i v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex3i v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex3i v) { return vex2f(x / float(v.x), y / float(v.y)); };
vex2f vex2f::operator+ (vex3d v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex3d v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex3d v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex3d v) { return vex2f(x / float(v.x), y / float(v.y)); };
vex2f vex2f::operator+ (vex3f v) { return vex2f(x + v.x, y + v.y); };
vex2f vex2f::operator- (vex3f v) { return vex2f(x - v.x, y - v.y); };
vex2f vex2f::operator* (vex3f v) { return vex2f(x * v.x, y * v.y); };
vex2f vex2f::operator/ (vex3f v) { return vex2f(x / v.x, y / v.y); };
vex2f vex2f::operator+ (vex2i v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex2i v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex2i v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex2i v) { return vex2f(x / float(v.x), y / float(v.y)); };
vex2f vex2f::operator+ (vex2d v) { return vex2f(x + float(v.x), y + float(v.y)); };
vex2f vex2f::operator- (vex2d v) { return vex2f(x - float(v.x), y - float(v.y)); };
vex2f vex2f::operator* (vex2d v) { return vex2f(x * float(v.x), y * float(v.y)); };
vex2f vex2f::operator/ (vex2d v) { return vex2f(x / float(v.x), y / float(v.y)); };

vex2d vex2d::operator+ (vex4f v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex4f v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex4f v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex4f v) { return vex2d(x / double(v.x), y / double(v.y)); };
vex2d vex2d::operator+ (vex4i v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex4i v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex4i v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex4i v) { return vex2d(x / double(v.x), y / double(v.y)); };
vex2d vex2d::operator+ (vex4d v) { return vex2d(x + v.x, y + v.y); };
vex2d vex2d::operator- (vex4d v) { return vex2d(x - v.x, y - v.y); };
vex2d vex2d::operator* (vex4d v) { return vex2d(x * v.x, y * v.y); };
vex2d vex2d::operator/ (vex4d v) { return vex2d(x / v.x, y / v.y); };
vex2d vex2d::operator+ (vex3i v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex3i v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex3i v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex3i v) { return vex2d(x / double(v.x), y / double(v.y)); };
vex2d vex2d::operator+ (vex3f v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex3f v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex3f v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex3f v) { return vex2d(x / double(v.x), y / double(v.y)); };
vex2d vex2d::operator+ (vex3d v) { return vex2d(x + v.x, y + v.y); };
vex2d vex2d::operator- (vex3d v) { return vex2d(x - v.x, y - v.y); };
vex2d vex2d::operator* (vex3d v) { return vex2d(x * v.x, y * v.y); };
vex2d vex2d::operator/ (vex3d v) { return vex2d(x / v.x, y / v.y); };
vex2d vex2d::operator+ (vex2i v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex2i v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex2i v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex2i v) { return vex2d(x / double(v.x), y / double(v.y)); };
vex2d vex2d::operator+ (vex2f v) { return vex2d(x + double(v.x), y + double(v.y)); };
vex2d vex2d::operator- (vex2f v) { return vex2d(x - double(v.x), y - double(v.y)); };
vex2d vex2d::operator* (vex2f v) { return vex2d(x * double(v.x), y * double(v.y)); };
vex2d vex2d::operator/ (vex2f v) { return vex2d(x / double(v.x), y / double(v.y)); };

vex2i vex2i::operator+ (vex4d v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex4d v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex4d v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex4d v) { return vex2i(x / int(v.x), y / int(v.y)); };
vex2i vex2i::operator+ (vex4f v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex4f v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex4f v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex4f v) { return vex2i(x / int(v.x), y / int(v.y)); };
vex2i vex2i::operator+ (vex4i v) { return vex2i(x + v.x, y + v.y); };
vex2i vex2i::operator- (vex4i v) { return vex2i(x - v.x, y - v.y); };
vex2i vex2i::operator* (vex4i v) { return vex2i(x * v.x, y * v.y); };
vex2i vex2i::operator/ (vex4i v) { return vex2i(x / v.x, y / v.y); };
vex2i vex2i::operator+ (vex3f v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex3f v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex3f v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex3f v) { return vex2i(x / int(v.x), y / int(v.y)); };
vex2i vex2i::operator+ (vex3d v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex3d v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex3d v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex3d v) { return vex2i(x / int(v.x), y / int(v.y)); };
vex2i vex2i::operator+ (vex3i v) { return vex2i(x + v.x, y + v.y); };
vex2i vex2i::operator- (vex3i v) { return vex2i(x - v.x, y - v.y); };
vex2i vex2i::operator* (vex3i v) { return vex2i(x * v.x, y * v.y); };
vex2i vex2i::operator/ (vex3i v) { return vex2i(x / v.x, y / v.y); };
vex2i vex2i::operator+ (vex2f v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex2f v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex2f v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex2f v) { return vex2i(x / int(v.x), y / int(v.y)); };
vex2i vex2i::operator+ (vex2d v) { return vex2i(x + int(v.x), y + int(v.y)); };
vex2i vex2i::operator- (vex2d v) { return vex2i(x - int(v.x), y - int(v.y)); };
vex2i vex2i::operator* (vex2d v) { return vex2i(x * int(v.x), y * int(v.y)); };
vex2i vex2i::operator/ (vex2d v) { return vex2i(x / int(v.x), y / int(v.y)); };


void vex4f::operator+= (vex4d v) { x += float(v.x); y += float(v.y); z += float(v.z); w += float(v.w); };
void vex4f::operator-= (vex4d v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); w -= float(v.w); };
void vex4f::operator*= (vex4d v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); w *= float(v.w); };
void vex4f::operator/= (vex4d v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); w /= float(v.w); };
void vex4f::operator+= (vex4i v) { x += float(v.x); y += float(v.y); z += float(v.z); w += float(v.w); };
void vex4f::operator-= (vex4i v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); w -= float(v.w); };
void vex4f::operator*= (vex4i v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); w *= float(v.w); };
void vex4f::operator/= (vex4i v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); w /= float(v.w); };
void vex4f::operator+= (vex3f v) { x += v.x; y += v.y; z += v.z; };
void vex4f::operator-= (vex3f v) { x -= v.x; y -= v.y; z -= v.z; };
void vex4f::operator*= (vex3f v) { x *= v.x; y *= v.y; z *= v.z; };
void vex4f::operator/= (vex3f v) { x /= v.x; y /= v.y; z /= v.z; };
void vex4f::operator+= (vex3i v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex4f::operator-= (vex3i v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex4f::operator*= (vex3i v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex4f::operator/= (vex3i v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex4f::operator+= (vex3d v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex4f::operator-= (vex3d v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex4f::operator*= (vex3d v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex4f::operator/= (vex3d v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex4f::operator+= (vex2f v) { x += v.x; y += v.y; };
void vex4f::operator-= (vex2f v) { x -= v.x; y -= v.y; };
void vex4f::operator*= (vex2f v) { x *= v.x; y *= v.y; };
void vex4f::operator/= (vex2f v) { x /= v.x; y /= v.y; };
void vex4f::operator+= (vex2i v) { x += float(v.x); y += float(v.y); };
void vex4f::operator-= (vex2i v) { x -= float(v.x); y -= float(v.y); };
void vex4f::operator*= (vex2i v) { x *= float(v.x); y *= float(v.y); };
void vex4f::operator/= (vex2i v) { x /= float(v.x); y /= float(v.y); };
void vex4f::operator+= (vex2d v) { x += float(v.x); y += float(v.y); };
void vex4f::operator-= (vex2d v) { x -= float(v.x); y -= float(v.y); };
void vex4f::operator*= (vex2d v) { x *= float(v.x); y *= float(v.y); };
void vex4f::operator/= (vex2d v) { x /= float(v.x); y /= float(v.y); };

void vex4d::operator+= (vex4f v) { x += double(v.x); y += double(v.y); z += double(v.z); w += double(v.w); };
void vex4d::operator-= (vex4f v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); w -= double(v.w); };
void vex4d::operator*= (vex4f v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); w *= double(v.w); };
void vex4d::operator/= (vex4f v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); w /= double(v.w); };
void vex4d::operator+= (vex4i v) { x += double(v.x); y += double(v.y); z += double(v.z); w += double(v.w); };
void vex4d::operator-= (vex4i v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); w -= double(v.w); };
void vex4d::operator*= (vex4i v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); w *= double(v.w); };
void vex4d::operator/= (vex4i v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); w /= double(v.w); };
void vex4d::operator+= (vex3d v) { x += v.x; y += v.y; z += v.z; };
void vex4d::operator-= (vex3d v) { x -= v.x; y -= v.y; z -= v.z; };
void vex4d::operator*= (vex3d v) { x *= v.x; y *= v.y; z *= v.z; };
void vex4d::operator/= (vex3d v) { x /= v.x; y /= v.y; z /= v.z; };
void vex4d::operator+= (vex3i v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex4d::operator-= (vex3i v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex4d::operator*= (vex3i v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex4d::operator/= (vex3i v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex4d::operator+= (vex3f v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex4d::operator-= (vex3f v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex4d::operator*= (vex3f v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex4d::operator/= (vex3f v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex4d::operator+= (vex2d v) { x += v.x; y += v.y; };
void vex4d::operator-= (vex2d v) { x -= v.x; y -= v.y; };
void vex4d::operator*= (vex2d v) { x *= v.x; y *= v.y; };
void vex4d::operator/= (vex2d v) { x /= v.x; y /= v.y; };
void vex4d::operator+= (vex2i v) { x += double(v.x); y += double(v.y); };
void vex4d::operator-= (vex2i v) { x -= double(v.x); y -= double(v.y); };
void vex4d::operator*= (vex2i v) { x *= double(v.x); y *= double(v.y); };
void vex4d::operator/= (vex2i v) { x /= double(v.x); y /= double(v.y); };
void vex4d::operator+= (vex2f v) { x += double(v.x); y += double(v.y); };
void vex4d::operator-= (vex2f v) { x -= double(v.x); y -= double(v.y); };
void vex4d::operator*= (vex2f v) { x *= double(v.x); y *= double(v.y); };
void vex4d::operator/= (vex2f v) { x /= double(v.x); y /= double(v.y); };

void vex4i::operator+= (vex4d v) { x += int(v.x); y += int(v.y); z += int(v.z); w += int(v.w); };
void vex4i::operator-= (vex4d v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); w -= int(v.w); };
void vex4i::operator*= (vex4d v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); w *= int(v.w); };
void vex4i::operator/= (vex4d v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); w /= int(v.w); };
void vex4i::operator+= (vex4f v) { x += int(v.x); y += int(v.y); z += int(v.z); w += int(v.w); };
void vex4i::operator-= (vex4f v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); w -= int(v.w); };
void vex4i::operator*= (vex4f v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); w *= int(v.w); };
void vex4i::operator/= (vex4f v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); w /= int(v.w); };
void vex4i::operator+= (vex3i v) { x += v.x; y += v.y; z += v.z; };
void vex4i::operator-= (vex3i v) { x -= v.x; y -= v.y; z -= v.z; };
void vex4i::operator*= (vex3i v) { x *= v.x; y *= v.y; z *= v.z; };
void vex4i::operator/= (vex3i v) { x /= v.x; y /= v.y; z /= v.z; };
void vex4i::operator+= (vex3d v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex4i::operator-= (vex3d v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex4i::operator*= (vex3d v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex4i::operator/= (vex3d v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex4i::operator+= (vex3f v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex4i::operator-= (vex3f v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex4i::operator*= (vex3f v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex4i::operator/= (vex3f v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex4i::operator+= (vex2i v) { x += v.x; y += v.y; };
void vex4i::operator-= (vex2i v) { x -= v.x; y -= v.y; };
void vex4i::operator*= (vex2i v) { x *= v.x; y *= v.y; };
void vex4i::operator/= (vex2i v) { x /= v.x; y /= v.y; };
void vex4i::operator+= (vex2d v) { x += int(v.x); y += int(v.y); };
void vex4i::operator-= (vex2d v) { x -= int(v.x); y -= int(v.y); };
void vex4i::operator*= (vex2d v) { x *= int(v.x); y *= int(v.y); };
void vex4i::operator/= (vex2d v) { x /= int(v.x); y /= int(v.y); };
void vex4i::operator+= (vex2f v) { x += int(v.x); y += int(v.y); };
void vex4i::operator-= (vex2f v) { x -= int(v.x); y -= int(v.y); };
void vex4i::operator*= (vex2f v) { x *= int(v.x); y *= int(v.y); };
void vex4i::operator/= (vex2f v) { x /= int(v.x); y /= int(v.y); };

void vex3f::operator+= (vex4d v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex3f::operator-= (vex4d v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex3f::operator*= (vex4d v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex3f::operator/= (vex4d v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex3f::operator+= (vex4i v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex3f::operator-= (vex4i v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex3f::operator*= (vex4i v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex3f::operator/= (vex4i v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex3f::operator+= (vex4f v) { x += v.x; y += v.y; z += v.z; };
void vex3f::operator-= (vex4f v) { x -= v.x; y -= v.y; z -= v.z; };
void vex3f::operator*= (vex4f v) { x *= v.x; y *= v.y; z *= v.z; };
void vex3f::operator/= (vex4f v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3f::operator+= (vex3i v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex3f::operator-= (vex3i v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex3f::operator*= (vex3i v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex3f::operator/= (vex3i v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex3f::operator+= (vex3d v) { x += float(v.x); y += float(v.y); z += float(v.z); };
void vex3f::operator-= (vex3d v) { x -= float(v.x); y -= float(v.y); z -= float(v.z); };
void vex3f::operator*= (vex3d v) { x *= float(v.x); y *= float(v.y); z *= float(v.z); };
void vex3f::operator/= (vex3d v) { x /= float(v.x); y /= float(v.y); z /= float(v.z); };
void vex3f::operator+= (vex2f v) { x += v.x; y += v.y; };
void vex3f::operator-= (vex2f v) { x -= v.x; y -= v.y; };
void vex3f::operator*= (vex2f v) { x *= v.x; y *= v.y; };
void vex3f::operator/= (vex2f v) { x /= v.x; y /= v.y; };
void vex3f::operator+= (vex2i v) { x += float(v.x); y += float(v.y); };
void vex3f::operator-= (vex2i v) { x -= float(v.x); y -= float(v.y); };
void vex3f::operator*= (vex2i v) { x *= float(v.x); y *= float(v.y); };
void vex3f::operator/= (vex2i v) { x /= float(v.x); y /= float(v.y); };
void vex3f::operator+= (vex2d v) { x += float(v.x); y += float(v.y); };
void vex3f::operator-= (vex2d v) { x -= float(v.x); y -= float(v.y); };
void vex3f::operator*= (vex2d v) { x *= float(v.x); y *= float(v.y); };
void vex3f::operator/= (vex2d v) { x /= float(v.x); y /= float(v.y); };

void vex3d::operator+= (vex4f v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex3d::operator-= (vex4f v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex3d::operator*= (vex4f v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex3d::operator/= (vex4f v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex3d::operator+= (vex4i v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex3d::operator-= (vex4i v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex3d::operator*= (vex4i v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex3d::operator/= (vex4i v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex3d::operator+= (vex4d v) { x += v.x; y += v.y; z += v.z; };
void vex3d::operator-= (vex4d v) { x -= v.x; y -= v.y; z -= v.z; };
void vex3d::operator*= (vex4d v) { x *= v.x; y *= v.y; z *= v.z; };
void vex3d::operator/= (vex4d v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3d::operator+= (vex3i v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex3d::operator-= (vex3i v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex3d::operator*= (vex3i v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex3d::operator/= (vex3i v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex3d::operator+= (vex3f v) { x += double(v.x); y += double(v.y); z += double(v.z); };
void vex3d::operator-= (vex3f v) { x -= double(v.x); y -= double(v.y); z -= double(v.z); };
void vex3d::operator*= (vex3f v) { x *= double(v.x); y *= double(v.y); z *= double(v.z); };
void vex3d::operator/= (vex3f v) { x /= double(v.x); y /= double(v.y); z /= double(v.z); };
void vex3d::operator+= (vex2d v) { x += v.x; y += v.y; };
void vex3d::operator-= (vex2d v) { x -= v.x; y -= v.y; };
void vex3d::operator*= (vex2d v) { x *= v.x; y *= v.y; };
void vex3d::operator/= (vex2d v) { x /= v.x; y /= v.y; };
void vex3d::operator+= (vex2i v) { x += double(v.x); y += double(v.y); };
void vex3d::operator-= (vex2i v) { x -= double(v.x); y -= double(v.y); };
void vex3d::operator*= (vex2i v) { x *= double(v.x); y *= double(v.y); };
void vex3d::operator/= (vex2i v) { x /= double(v.x); y /= double(v.y); };
void vex3d::operator+= (vex2f v) { x += double(v.x); y += double(v.y); };
void vex3d::operator-= (vex2f v) { x -= double(v.x); y -= double(v.y); };
void vex3d::operator*= (vex2f v) { x *= double(v.x); y *= double(v.y); };
void vex3d::operator/= (vex2f v) { x /= double(v.x); y /= double(v.y); };

void vex3i::operator+= (vex4d v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex3i::operator-= (vex4d v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex3i::operator*= (vex4d v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex3i::operator/= (vex4d v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex3i::operator+= (vex4f v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex3i::operator-= (vex4f v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex3i::operator*= (vex4f v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex3i::operator/= (vex4f v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex3i::operator+= (vex4i v) { x += v.x; y += v.y; z += v.z; };
void vex3i::operator-= (vex4i v) { x -= v.x; y -= v.y; z -= v.z; };
void vex3i::operator*= (vex4i v) { x *= v.x; y *= v.y; z *= v.z; };
void vex3i::operator/= (vex4i v) { x /= v.x; y /= v.y; z /= v.z; };
void vex3i::operator+= (vex3d v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex3i::operator-= (vex3d v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex3i::operator*= (vex3d v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex3i::operator/= (vex3d v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex3i::operator+= (vex3f v) { x += int(v.x); y += int(v.y); z += int(v.z); };
void vex3i::operator-= (vex3f v) { x -= int(v.x); y -= int(v.y); z -= int(v.z); };
void vex3i::operator*= (vex3f v) { x *= int(v.x); y *= int(v.y); z *= int(v.z); };
void vex3i::operator/= (vex3f v) { x /= int(v.x); y /= int(v.y); z /= int(v.z); };
void vex3i::operator+= (vex2i v) { x += v.x; y += v.y; };
void vex3i::operator-= (vex2i v) { x -= v.x; y -= v.y; };
void vex3i::operator*= (vex2i v) { x *= v.x; y *= v.y; };
void vex3i::operator/= (vex2i v) { x /= v.x; y /= v.y; };
void vex3i::operator+= (vex2d v) { x += int(v.x); y += int(v.y); };
void vex3i::operator-= (vex2d v) { x -= int(v.x); y -= int(v.y); };
void vex3i::operator*= (vex2d v) { x *= int(v.x); y *= int(v.y); };
void vex3i::operator/= (vex2d v) { x /= int(v.x); y /= int(v.y); };
void vex3i::operator+= (vex2f v) { x += int(v.x); y += int(v.y); };
void vex3i::operator-= (vex2f v) { x -= int(v.x); y -= int(v.y); };
void vex3i::operator*= (vex2f v) { x *= int(v.x); y *= int(v.y); };
void vex3i::operator/= (vex2f v) { x /= int(v.x); y /= int(v.y); };

void vex2f::operator+= (vex4d v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex4d v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex4d v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex4d v) { x /= float(v.x); y /= float(v.y); };
void vex2f::operator+= (vex4i v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex4i v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex4i v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex4i v) { x /= float(v.x); y /= float(v.y); };
void vex2f::operator+= (vex4f v) { x += v.x; y += v.y; };
void vex2f::operator-= (vex4f v) { x -= v.x; y -= v.y; };
void vex2f::operator*= (vex4f v) { x *= v.x; y *= v.y; };
void vex2f::operator/= (vex4f v) { x /= v.x; y /= v.y; };
void vex2f::operator+= (vex3i v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex3i v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex3i v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex3i v) { x /= float(v.x); y /= float(v.y); };
void vex2f::operator+= (vex3d v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex3d v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex3d v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex3d v) { x /= float(v.x); y /= float(v.y); };
void vex2f::operator+= (vex3f v) { x += v.x; y += v.y; };
void vex2f::operator-= (vex3f v) { x -= v.x; y -= v.y; };
void vex2f::operator*= (vex3f v) { x *= v.x; y *= v.y; };
void vex2f::operator/= (vex3f v) { x /= v.x; y /= v.y; };
void vex2f::operator+= (vex2i v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex2i v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex2i v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex2i v) { x /= float(v.x); y /= float(v.y); };
void vex2f::operator+= (vex2d v) { x += float(v.x); y += float(v.y); };
void vex2f::operator-= (vex2d v) { x -= float(v.x); y -= float(v.y); };
void vex2f::operator*= (vex2d v) { x *= float(v.x); y *= float(v.y); };
void vex2f::operator/= (vex2d v) { x /= float(v.x); y /= float(v.y); };

void vex2d::operator+= (vex4f v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex4f v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex4f v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex4f v) { x /= double(v.x); y /= double(v.y); };
void vex2d::operator+= (vex4i v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex4i v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex4i v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex4i v) { x /= double(v.x); y /= double(v.y); };
void vex2d::operator+= (vex4d v) { x += v.x; y += v.y; };
void vex2d::operator-= (vex4d v) { x -= v.x; y -= v.y; };
void vex2d::operator*= (vex4d v) { x *= v.x; y *= v.y; };
void vex2d::operator/= (vex4d v) { x /= v.x; y /= v.y; };
void vex2d::operator+= (vex3i v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex3i v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex3i v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex3i v) { x /= double(v.x); y /= double(v.y); };
void vex2d::operator+= (vex3f v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex3f v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex3f v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex3f v) { x /= double(v.x); y /= double(v.y); };
void vex2d::operator+= (vex3d v) { x += v.x; y += v.y; };
void vex2d::operator-= (vex3d v) { x -= v.x; y -= v.y; };
void vex2d::operator*= (vex3d v) { x *= v.x; y *= v.y; };
void vex2d::operator/= (vex3d v) { x /= v.x; y /= v.y; };
void vex2d::operator+= (vex2i v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex2i v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex2i v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex2i v) { x /= double(v.x); y /= double(v.y); };
void vex2d::operator+= (vex2f v) { x += double(v.x); y += double(v.y); };
void vex2d::operator-= (vex2f v) { x -= double(v.x); y -= double(v.y); };
void vex2d::operator*= (vex2f v) { x *= double(v.x); y *= double(v.y); };
void vex2d::operator/= (vex2f v) { x /= double(v.x); y /= double(v.y); };

void vex2i::operator+= (vex4d v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex4d v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex4d v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex4d v) { x /= int(v.x); y /= int(v.y); };
void vex2i::operator+= (vex4f v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex4f v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex4f v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex4f v) { x /= int(v.x); y /= int(v.y); };
void vex2i::operator+= (vex4i v) { x += v.x; y += v.y; };
void vex2i::operator-= (vex4i v) { x -= v.x; y -= v.y; };
void vex2i::operator*= (vex4i v) { x *= v.x; y *= v.y; };
void vex2i::operator/= (vex4i v) { x /= v.x; y /= v.y; };
void vex2i::operator+= (vex3d v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex3d v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex3d v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex3d v) { x /= int(v.x); y /= int(v.y); };
void vex2i::operator+= (vex3f v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex3f v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex3f v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex3f v) { x /= int(v.x); y /= int(v.y); };
void vex2i::operator+= (vex3i v) { x += v.x; y += v.y; };
void vex2i::operator-= (vex3i v) { x -= v.x; y -= v.y; };
void vex2i::operator*= (vex3i v) { x *= v.x; y *= v.y; };
void vex2i::operator/= (vex3i v) { x /= v.x; y /= v.y; };
void vex2i::operator+= (vex2d v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex2d v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex2d v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex2d v) { x /= int(v.x); y /= int(v.y); };
void vex2i::operator+= (vex2f v) { x += int(v.x); y += int(v.y); };
void vex2i::operator-= (vex2f v) { x -= int(v.x); y -= int(v.y); };
void vex2i::operator*= (vex2f v) { x *= int(v.x); y *= int(v.y); };
void vex2i::operator/= (vex2f v) { x /= int(v.x); y /= int(v.y); };