struct vex4f {
	float x, y, z, w;
	vex4f();
	vex4f(float v1, float v2, float v3, float v4);
	vex4f(float v1, float v2, float v3);
	vex4f(float v1, float v2);
	vex4f(float v1);
	vex4f operator+ (const vex4f& __vev);
	vex4f operator- (const vex4f& __vev);
	vex4f operator* (const vex4f& __vev);
	vex4f operator/ (const vex4f& __vev);

	vex4f operator+ (const float __vev);
	vex4f operator- (const float __vev);
	vex4f operator* (const float __vev);
	vex4f operator/ (const float __vev);
	void operator= (const float __vev);

	void operator+= (const vex4f& __vev);
	void operator-= (const vex4f& __vev);
	void operator*= (const vex4f& __vev);
	void operator/= (const vex4f& __vev);
	bool operator== (vex4f __vev);
	bool operator== (float __vev);
	bool operator!= (vex4f __vev);
	bool operator!= (float __vev);
	bool operator< (vex4f __vev);
	bool operator< (float __vev);
	bool operator<= (vex4f __vev);
	bool operator<= (float __vev);
	bool operator> (vex4f __vev);
	bool operator> (float __vev);
	bool operator>= (vex4f __vev);
	bool operator>= (float __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex4f __vev);
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

	vex4f ceil();
	vex4f floor();
	vex4f abs();
	vex4f sqrt();
	vex4f percent(float __vev);
	vex4f pow(int __vev);
	vex4f rand(int __vev2, int __vev3);
	vex4f atan2(vex4f __vev);
	vex4f atan();
	vex4f asin();
	vex4f acos();
	vex4f tan();
	vex4f sin();
	vex4f cos();
	vex4f average();
	vex4f log();
	vex4f round();
	vex4f trunc();
	vex4f exp();
	vex4f cbrt();

	bool isEmpty();
};
// //////////////////////// //
struct vex4d {
	double x, y, z, w;
	vex4d();
	vex4d(double v1, double v2, double v3, double v4);
	vex4d(double v1, double v2, double v3);
	vex4d(double v1, double v2);
	vex4d(double v1);
	vex4d operator+ (const vex4d& __vev);
	vex4d operator- (const vex4d& __vev);
	vex4d operator* (const vex4d& __vev);
	vex4d operator/ (const vex4d& __vev);

	vex4d operator+ (const double __vev);
	vex4d operator- (const double __vev);
	vex4d operator* (const double __vev);
	vex4d operator/ (const double __vev);
	void operator= (const double __vev);
	
	void operator+= (const vex4d& __vev);
	void operator-= (const vex4d& __vev);
	void operator*= (const vex4d& __vev);
	void operator/= (const vex4d& __vev);
	bool operator== (vex4d __vev);
	bool operator== (double __vev);
	bool operator!= (vex4d __vev);
	bool operator!= (double __vev);
	bool operator< (vex4d __vev);
	bool operator< (double __vev);
	bool operator<= (vex4d __vev);
	bool operator<= (double __vev);
	bool operator> (vex4d  __vev);
	bool operator> (double __vev);
	bool operator>= (vex4d __vev);
	bool operator>= (double __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex4d __vev);
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

	vex4d ceil();
	vex4d floor();
	vex4d abs();
	vex4d sqrt();
	vex4d percent(float __vev);
	vex4d pow(int __vev);
	vex4d rand(int __vev2, int __vev3);
	vex4d atan2(vex4d __vev);
	vex4d atan();
	vex4d asin();
	vex4d acos();
	vex4d tan();
	vex4d sin();
	vex4d cos();
	vex4d average();
	vex4d log();
	vex4d round();
	vex4d trunc();
	vex4d exp();
	vex4d cbrt();

	bool isEmpty();
};
// //////////////////////// //
struct vex4b {
	bool x, y, z, w;
	vex4b();
	vex4b(bool v1, bool v2, bool v3, bool v4);
	vex4b(bool v1, bool v2, bool v3);
	vex4b(bool v1, bool v2);
	vex4b(bool v1);
	void operator= (const bool __vev);
};
vex4b::vex4b() {
	x = y = z = w = 0;
};
vex4b::vex4b(bool v1, bool v2, bool v3, bool v4) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = v4;
};
vex4b::vex4b(bool v1, bool v2, bool v3) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->w = 0;
};
vex4b::vex4b(bool v1, bool v2) {
	this->x = v1;
	this->y = v2;
	this->z = 0;
	this->w = 0;
};
vex4b::vex4b(bool v1) {
	this->x = v1;
	this->y = v1;
	this->z = v1;
	this->w = v1;
};
void vex4b::operator=(const bool __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
	this->w = __vev;
};
// //////////////////////// //
struct vex4i {
	int x, y, z, w;
	vex4i();
	vex4i(int v1, int v2, int v3, int v4);
	vex4i(int v1, int v2, int v3);
	vex4i(int v1, int v2);
	vex4i(int v1);
	vex4i operator+ (const vex4i& __vev);
	vex4i operator- (const vex4i& __vev);
	vex4i operator* (const vex4i& __vev);
	vex4i operator/ (const vex4i& __vev);

	vex4i operator+ (const int __vev);
	vex4i operator- (const int __vev);
	vex4i operator* (const int __vev);
	vex4i operator/ (const int __vev);
	void operator= (const int __vev);

	void operator+= (const vex4i& __vev);
	void operator-= (const vex4i& __vev);
	void operator*= (const vex4i& __vev);
	void operator/= (const vex4i& __vev);
	bool operator== (vex4i __vev);
	bool operator== (int __vev);
	bool operator!= (vex4i __vev);
	bool operator!= (int __vev);
	bool operator< (vex4i __vev);
	bool operator< (int __vev);
	bool operator<= (vex4i __vev);
	bool operator<= (int __vev);
	bool operator> (vex4i __vev);
	bool operator> (int __vev);
	bool operator>= (vex4i __vev);
	bool operator>= (int __vev);

	void normalize();
	void abs_();
	void sqrt_();
	void percent_(int __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex4i __vev);
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

	vex4i abs();
	vex4i sqrt();
	vex4i percent(int __vev);
	vex4i pow(int __vev);
	vex4i rand(int __vev2, int __vev3);
	vex4i atan2(vex4i __vev);
	vex4i atan();
	vex4i asin();
	vex4i acos();
	vex4i tan();
	vex4i sin();
	vex4i cos();
	vex4i average();
	vex4i log();
	vex4i exp();
	vex4i cbrt();

	bool isEmpty();
};
// /////////////////////////////////// ///
struct vex4s {
	std::string x, y, z, w;
	vex4s();
	vex4s(std::string v1, std::string v2, std::string v3, std::string v4);
	vex4s operator+ (const vex4s& __vev);

	vex4s operator+ (const std::string __vev);
	void operator= (const std::string __vev);
	void operator+= (const vex4s& __vev);
};
vex4s::vex4s() {
	x = y = z = w = "";
};
vex4s::vex4s(std::string v1, std::string v2, std::string v3, std::string v4) {
	this->x = v1;
	this->y = v2;
	this->z = v3;
	this->z = v4;
};
void vex4s::operator=(const std::string __vev) {
	this->x = __vev;
	this->y = __vev;
	this->z = __vev;
	this->w = __vev;
};
vex4s vex4s::operator+(const vex4s& __vev) {
	vex4s __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	__temp.z = this->z + __vev.z;
	__temp.w = this->w + __vev.w;
	return __temp;
};
vex4s vex4s::operator+(const std::string __vev) {
	vex4s __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	__temp.z = this->z + __vev;
	__temp.w = this->w + __vev;
	return __temp;
};
void vex4s::operator+=(const vex4s& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
	this->z += __vev.z;
	this->w += __vev.w;
};