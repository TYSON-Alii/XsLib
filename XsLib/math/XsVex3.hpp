struct vex3f {
	float x, y, z;
	vex3f();
	vex3f(float v1, float v2, float v3);
	vex3f(float v1, float v2);
	vex3f(float v1);
	vex3f operator+ (const vex3f& __vev);
	vex3f operator- (const vex3f& __vev);
	vex3f operator* (const vex3f& __vev);
	vex3f operator/ (const vex3f& __vev);

	vex3f operator+ (const float __vev);
	vex3f operator- (const float __vev);
	vex3f operator* (const float __vev);
	vex3f operator/ (const float __vev);
	void operator= (const float __vev);

	void operator+= (const vex3f& __vev);
	void operator-= (const vex3f& __vev);
	void operator*= (const vex3f& __vev);
	void operator/= (const vex3f& __vev);

	bool operator== (vex3f __vev);
	bool operator== (float __vev);
	bool operator!= (vex3f __vev);
	bool operator!= (float __vev);
	bool operator< (vex3f __vev);
	bool operator< (float __vev);
	bool operator<= (vex3f __vev);
	bool operator<= (float __vev);
	bool operator> (vex3f __vev);
	bool operator> (float __vev);
	bool operator>= (vex3f __vev);
	bool operator>= (float __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex3f __vev);
	void atan_();
	void asin_();
	void acos_();
	void tan_();
	void sin_();
	void cos_();
	void average_();
	void log_();
	void round_();
	void trunc_();
	void exp_();
	void cbrt_();

	vex3f ceil();
	vex3f floor();
	vex3f abs();
	vex3f sqrt();
	vex3f percent(float __vev);
	vex3f pow(int __vev);
	vex3f rand(int __vev2, int __vev3);
	vex3f atan2(vex3f __vev);
	vex3f atan();
	vex3f asin();
	vex3f acos();
	vex3f tan();
	vex3f sin();
	vex3f cos();
	vex3f average();
	vex3f log();
	vex3f round();
	vex3f trunc();
	vex3f exp();
	vex3f cbrt();

	bool isEmpty();
};
// ////////////////////// //
struct vex3d {
	double x, y, z;
	vex3d();
	vex3d(double v1, double v2, double v3);
	vex3d(double v1, double v2);
	vex3d(double v1);
	vex3d operator+ (const vex3d& __vev);
	vex3d operator- (const vex3d& __vev);
	vex3d operator* (const vex3d& __vev);
	vex3d operator/ (const vex3d& __vev);

	vex3d operator+ (const double __vev);
	vex3d operator- (const double __vev);
	vex3d operator* (const double __vev);
	vex3d operator/ (const double __vev);
	void operator= (const double __vev);
	void operator+= (const vex3d& __vev);
	void operator-= (const vex3d& __vev);
	void operator*= (const vex3d& __vev);
	void operator/= (const vex3d& __vev);
	bool operator== (vex3d __vev);
	bool operator== (double __vev);
	bool operator!= (vex3d __vev);
	bool operator!= (double __vev);
	bool operator< (vex3d __vev);
	bool operator< (double __vev);
	bool operator<= (vex3d __vev);
	bool operator<= (double __vev);
	bool operator> (vex3d  __vev);
	bool operator> (double __vev);
	bool operator>= (vex3d __vev);
	bool operator>= (double __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex3d __vev);
	void atan_();
	void asin_();
	void acos_();
	void tan_();
	void sin_();
	void cos_();
	void average_();
	void log_();
	void round_();
	void trunc_();
	void exp_();
	void cbrt_();

	vex3d ceil();
	vex3d floor();
	vex3d abs();
	vex3d sqrt();
	vex3d percent(float __vev);
	vex3d pow(int __vev);
	vex3d rand(int __vev2, int __vev3);
	vex3d atan2(vex3d __vev);
	vex3d atan();
	vex3d asin();
	vex3d acos();
	vex3d tan();
	vex3d sin();
	vex3d cos();
	vex3d average();
	vex3d log();
	vex3d round();
	vex3d trunc();
	vex3d exp();
	vex3d cbrt();

	bool isEmpty();
};
// ////////////////////// //
struct vex3b {
	bool x, y, z;
	vex3b();
	vex3b(bool v1, bool v2, bool v3);
	vex3b(bool v1, bool v2);
	vex3b(bool v1);
	void operator= (const bool __vev);
};
vex3b::vex3b() {
	x = y = z = 0;
};
vex3b::vex3b(bool v1, bool v2, bool v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
};
vex3b::vex3b(bool v1, bool v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
};
vex3b::vex3b(bool v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
};
void vex3b::operator=(const bool __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
};
// ////////////////////// //
struct vex3i {
	int x, y, z;
	vex3i();
	vex3i(int v1, int v2, int v3);
	vex3i(int v1, int v2);
	vex3i(int v1);
	vex3i operator+ (const vex3i& __vev);
	vex3i operator- (const vex3i& __vev);
	vex3i operator* (const vex3i& __vev);
	vex3i operator/ (const vex3i& __vev);

	vex3i operator+ (const int __vev);
	vex3i operator- (const int __vev);
	vex3i operator* (const int __vev);
	vex3i operator/ (const int __vev);
	void operator= (const int __vev);

	void operator+= (const vex3i& __vev);
	void operator-= (const vex3i& __vev);
	void operator*= (const vex3i& __vev);
	void operator/= (const vex3i& __vev);
	bool operator== (vex3i __vev);
	bool operator== (int __vev);
	bool operator!= (vex3i __vev);
	bool operator!= (int __vev);
	bool operator< (vex3i __vev);
	bool operator< (int __vev);
	bool operator<= (vex3i __vev);
	bool operator<= (int __vev);
	bool operator> (vex3i __vev);
	bool operator> (int __vev);
	bool operator>= (vex3i __vev);
	bool operator>= (int __vev);
	void log_();
	void round_();
	void trunc_();
	void exp_();
	void cbrt_();

	void normalize();
	void abs_();
	void sqrt_();
	void percent_(int __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex3i __vev);
	void atan_();
	void asin_();
	void acos_();
	void tan_();
	void sin_();
	void cos_();
	void average_();

	vex3i abs();
	vex3i sqrt();
	vex3i percent(int __vev);
	vex3i pow(int __vev);
	vex3i rand(int __vev2, int __vev3);
	vex3i atan2(vex3i __vev);
	vex3i atan();
	vex3i asin();
	vex3i acos();
	vex3i tan();
	vex3i sin();
	vex3i cos();
	vex3i average();
	vex3i log();
	vex3i exp();
	vex3i cbrt();

	bool isEmpty();
};
// /////////////////////////////////// ///
struct vex3s {
	std::string x, y, z;
	vex3s();
	vex3s(std::string v1, std::string v2, std::string v3);
	vex3s operator+ (const vex3s& __vev);

	vex3s operator+ (const std::string __vev);
	void operator= (const std::string __vev);
	void operator+= (const vex3s& __vev);
};
vex3s::vex3s() {
	x = y = z = "";
};
vex3s::vex3s(std::string v1, std::string v2, std::string v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
};
void vex3s::operator=(const std::string __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
};
vex3s vex3s::operator+(const vex3s& __vev) {
	vex3s __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	return __temp;
};
vex3s vex3s::operator+(const std::string __vev) {
	vex3s __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	return __temp;
};
void vex3s::operator+=(const vex3s& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
};