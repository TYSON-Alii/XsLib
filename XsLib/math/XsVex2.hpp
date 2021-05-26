struct vex2f {
	float x, y;
	vex2f();
	vex2f(float v1, float v2);
	vex2f(float v1);
	vex2f operator+ (vex2f __vev);
	vex2f operator- (vex2f __vev);
	vex2f operator* (vex2f __vev);
	vex2f operator/ (vex2f __vev);
	vex2f operator+ (float __vev);
	vex2f operator- (float __vev);
	vex2f operator* (float __vev);
	vex2f operator/ (float __vev);
	void operator= (float __vev);
	void operator+= (vex2f __vev);
	void operator-= (vex2f __vev);
	void operator*= (vex2f __vev);
	void operator/= (vex2f __vev);
	void operator+= (float __vev);
	void operator-= (float __vev);
	void operator*= (float __vev);
	void operator/= (float __vev);
	void operator++ ();
	void operator-- ();
	bool operator== (vex2f __vev);
	bool operator== (float __vev);
	bool operator!= (vex2f __vev);
	bool operator!= (float __vev);
	bool operator< (vex2f __vev);
	bool operator< (float __vev);
	bool operator<= (vex2f __vev);
	bool operator<= (float __vev);
	bool operator> (vex2f __vev);
	bool operator> (float __vev);
	bool operator>= (vex2f __vev);
	bool operator>= (float __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex2f __vev);
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
	
	vex2f ceil();
	vex2f floor();
	vex2f abs();
	vex2f sqrt();
	vex2f percent(float __vev);
	vex2f pow(int __vev);
	vex2f rand(int __vev2, int __vev3);
	vex2f atan2(vex2f __vev);
	vex2f atan();
	vex2f asin();
	vex2f acos();
	vex2f tan();
	vex2f sin();
	vex2f cos();
	vex2f average();
	vex2f log();
	vex2f round();
	vex2f trunc();
	vex2f exp();
	vex2f cbrt();

	bool isEmpty();
};
// /////////////////////////// //
struct vex2d {
	double x, y;
	vex2d();
	vex2d(double v1, double v2);
	vex2d(double v1);
	vex2d operator+ (vex2d __vev);
	vex2d operator- (vex2d __vev);
	vex2d operator* (vex2d __vev);
	vex2d operator/ (vex2d __vev);
	vex2d operator+ (double __vev);
	vex2d operator- (double __vev);
	vex2d operator* (double __vev);
	vex2d operator/ (double __vev);
	void operator= (double __vev);
	void operator+= (vex2d __vev);
	void operator-= (vex2d __vev);
	void operator*= (vex2d __vev);
	void operator/= (vex2d __vev);
	bool operator== (vex2d __vev);
	bool operator== (double __vev);
	bool operator!= (vex2d __vev);
	bool operator!= (double __vev);
	bool operator< (vex2d __vev);
	bool operator< (double __vev);
	bool operator<= (vex2d __vev);
	bool operator<= (double __vev);
	bool operator> (vex2d  __vev);
	bool operator> (double __vev);
	bool operator>= (vex2d __vev);
	bool operator>= (double __vev);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex2d __vev);
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

	vex2d ceil();
	vex2d floor();
	vex2d abs();
	vex2d sqrt();
	vex2d percent(float __vev);
	vex2d pow(int __vev);
	vex2d rand(int __vev2, int __vev3);
	vex2d atan2(vex2d __vev);
	vex2d atan();
	vex2d asin();
	vex2d acos();
	vex2d tan();
	vex2d sin();
	vex2d cos();
	vex2d average();
	vex2d log();
	vex2d round();
	vex2d trunc();
	vex2d exp();
	vex2d cbrt();

	bool isEmpty();
};
// ////////////////////// //
struct vex2b {
	bool x, y;
	vex2b();
	vex2b(bool v1, bool v2);
	vex2b(bool v1);
	void operator= (const bool __vev);
};
vex2b::vex2b() {
	x = y = 0;
};
vex2b::vex2b(bool v1, bool v2) {
	this->x = v1;
	this->y = v2;
};
vex2b::vex2b(bool v1) {
	this->x = v1;
	this->y = v1;
};
void vex2b::operator=(const bool __vev) {
	this->x = __vev;
	this->y = __vev;
};
// ////////////////////// //
struct vex2i {
	int x, y;
	vex2i();
	vex2i(int v1, int v2);
	vex2i(int v1);
	vex2i operator+ ( vex2i& __vev);
	vex2i operator- ( vex2i& __vev);
	vex2i operator* ( vex2i& __vev);
	vex2i operator/ ( vex2i& __vev);
	vex2i operator+ ( int __vev);
	vex2i operator- ( int __vev);
	vex2i operator* ( int __vev);
	vex2i operator/ ( int __vev);
	void operator= ( int __vev);
	void operator+= ( vex2i& __vev);
	void operator-= ( vex2i& __vev);
	void operator*= ( vex2i& __vev);
	void operator/= ( vex2i& __vev);
	bool operator== (vex2i __vev);
	bool operator== (int __vev);
	bool operator!= (vex2i __vev);
	bool operator!= (int __vev);
	bool operator< (vex2i __vev);
	bool operator< (int __vev);
	bool operator<= (vex2i __vev);
	bool operator<= (int __vev);
	bool operator> (vex2i __vev);
	bool operator> (int __vev);
	bool operator>= (vex2i __vev);
	bool operator>= (int __vev);

	void normalize();
	void abs_();
	void sqrt_();
	void percent_(int __vev);
	void pow_(int __vev);
	void rand_(int __vev2, int __vev3);
	void atan2_(vex2i __vev);
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

	vex2i abs();
	vex2i sqrt();
	vex2i percent(int __vev);
	vex2i pow(int __vev);
	vex2i rand(int __vev2, int __vev3);
	vex2i atan2(vex2i __vev);
	vex2i atan();
	vex2i asin();
	vex2i acos();
	vex2i tan();
	vex2i sin();
	vex2i cos();
	vex2i average();
	vex2i log();
	vex2i exp();
	vex2i cbrt();

	bool isEmpty();
};
// ///////////////////////////// //
struct vex2s {
	std::string x, y;
	vex2s();
	vex2s(std::string v1, std::string v2);
	vex2s operator+ (const vex2s& __vev);

	vex2s operator+ (const std::string __vev);
	void operator= (const std::string __vev);
	void operator= (const vex2s& __vev);
	void operator+= (const vex2s& __vev);
};
vex2s::vex2s() {
	x = y = "";
};
vex2s::vex2s(std::string v1, std::string v2) {
	this->x = v1;
	this->y = v2;
};
void vex2s::operator=(const std::string __vev) {
	this->x = __vev;
	this->y = __vev;
};
void vex2s::operator=(const vex2s& __vev) {
	this->x = __vev.x;
	this->y = __vev.y;
};
vex2s vex2s::operator+(const vex2s& __vev) {
	vex2s __temp;
	__temp.x = this->x + __vev.x;
	__temp.y = this->y + __vev.y;
	return __temp;
};
vex2s vex2s::operator+(const std::string __vev) {
	vex2s __temp;
	__temp.x = this->x + __vev;
	__temp.y = this->y + __vev;
	return __temp;
};
void vex2s::operator+=(const vex2s& __vev) {
	this->x += __vev.x;
	this->y += __vev.y;
};