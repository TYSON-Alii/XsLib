vex4f XsQuaternion(float __x, float __y, float __z) {
	vex4f __data;
	const float c1 = cos(__x / 2);
	const float s1 = sin(__x / 2);
	const float c2 = cos(__y / 2);
	const float s2 = sin(__y / 2);
	const float c3 = cos(__z / 2);
	const float s3 = sin(__z / 2);
	const float c1c2 = c1 * c2;
	const float s1s2 = s1 * s2;
	__data.w = (c1c2 * c3 - s1s2 * s3) * -180 / XS_PI;
	__data.z = (c1c2 * s3 + s1s2 * c3) * -1;
	__data.x = (s1 * c2 * c3 + c1 * s2 * s3) * -1;
	__data.y = (c1 * s2 * c3 - s1 * c2 * s3) * -1;
	return __data;
};
vex4f XsQuaternion(vex3f __yon_x) {
	vex4f __data;
	const float c1 = cos(__yon_x.x / 2);
	const float s1 = sin(__yon_x.x / 2);
	const float c2 = cos(__yon_x.y / 2);
	const float s2 = sin(__yon_x.y / 2);
	const float c3 = cos(__yon_x.z / 2);
	const float s3 = sin(__yon_x.z / 2);
	const float c1c2 = c1 * c2;
	const float s1s2 = s1 * s2;
	__data.w = (c1c2 * c3 - s1s2 * s3) * -180 / XS_PI;
	__data.z = (c1c2 * s3 + s1s2 * c3) * -1;
	__data.x = (s1 * c2 * c3 + c1 * s2 * s3) * -1;
	__data.y = (c1 * s2 * c3 - s1 * c2 * s3) * -1;
	return __data;
};
float XsDistance(vex3f XS_shape_1, vex3f XS_shape_2) {
	return sqrt((XS_shape_1.x - XS_shape_2.x) * (XS_shape_1.x - XS_shape_2.x) + (XS_shape_1.y - XS_shape_2.y) * (XS_shape_1.y - XS_shape_2.y) + (XS_shape_1.z - XS_shape_2.z) * (XS_shape_1.z - XS_shape_2.z));
};
int digit(int __vev) {
	int __digit = 0;
	int ___i = 0;
	while (___i < __vev) {
		__digit++;
		___i = pow(10, __digit);
	};
	return __digit;
};
float percent(float __vev, float __v) {
	return __vev / 100.0f * __v;
};
int percent(int __vev, int __v) {
	return __vev / 100 * __v;
};
double percent(double __vev, double __v) {
	return __vev / 100.0 * __v;
};
float absx(float __vev) {
	if (__vev >= 0)
		return __vev;
	else if (__vev < 0)
		return __vev * -1;
};
int absx(int __vev) {
	if (__vev >= 0)
		return __vev;
	else if (__vev < 0)
		return __vev * -1;
};
double absx(double __vev) {
	if (__vev >= 0)
		return __vev;
	else if (__vev < 0)
		return __vev * -1;
};
float powx(float __vev, int __pow) {
	const float temp = __vev;
	float ____s = __vev;
	for (int __i = 0; __i < __pow; __i++) {
		__vev *= temp;
	}
	return ____s;
};
double powx(double __vev, int __pow) {
	const double temp = __vev;
	double ____s = __vev;
	for (int __i = 0; __i < __pow; __i++) {
		__vev *= temp;
	}
	return ____s;
};
int powx(int __vev, int __pow) {
	const int temp = __vev;
	int ____s = __vev;
	for (int __i = 0; __i < __pow; __i++) {
		__vev *= temp;
	}
	return ____s;
};
template<typename T>
std::vector<T>& operator<<(std::vector<T>& v, T const item) {
	v.push_back(item);
	return v;
};
template<typename T>
std::vector<T>& operator>>(std::vector<T>& v, T const item) {
	v.erase(v.begin() + item);
	return v;
};
template<typename T>
std::deque<T>& operator<<(std::deque<T>& v, T const item) {
	v.push_back(item);
	return v;
};
template<typename T>
std::deque<T>& operator>>(std::deque<T>& v, T const item) {
	v.erase(v.begin() + item);
	return v;
};