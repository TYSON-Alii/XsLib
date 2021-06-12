struct vex2f;
struct vex2d;
struct vex2i;
struct vex3f;
struct vex3d;
struct vex3i;
struct vex4f;
struct vex4d;
struct vex4i;
struct vex4f {
	float x, y, z, w;
	vex4f();
	vex4f(float v1, float v2, float v3, float v4);
	vex4f(float v1, float v2, float v3);
	vex4f(float v1, float v2);
	vex4f(float v1);
	vex4f(bool& v1, bool& v2, bool& v3, bool& v4) { x = std::atof(v1); y = std::atof(v2); z = std::atof(v3); w = std::atof(v4); };
	vex4f(bool& v1, bool& v2, bool& v3) { x = std::atof(v1); y = std::atof(v2); z = std::atof(v3); };
	vex4f(bool& v1, bool& v2) { x = std::atof(v1); y = std::atof(v2); };
	vex4f(bool& v1) { x = std::atof(v1); y = std::atof(v1); z = std::atof(v1); w = std::atof(v1); };
	vex4f(std::string v1, std::string v2, std::string v3, std::string v4) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); z = std::atof(v3.c_str()); w = std::atof(v4.c_str()); };
	vex4f(std::string v1, std::string v2, std::string v3) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); z = std::atof(v3.c_str()); };
	vex4f(std::string v1, std::string v2) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); };
	vex4f(std::string v1) { x = std::atof(v1.c_str()); y = std::atof(v1.c_str());  z = std::atof(v1.c_str()); w = std::atof(v1.c_str()); };
	vex4f(vex2d v);
	vex4f(vex2i v);
	vex4f(vex2f v);
	vex4f(vex3d v);
	vex4f(vex3i v);
	vex4f(vex3f v);
	vex4f(vex4d v);
	vex4f(vex4i v);

	vex4f(vex2f v, float v1);
	vex4f(vex2f v, float v1, float v2);
	vex4f(float v2, vex2f v, float v1);
	vex4f(float v1, float v2, vex2f v);
	vex4f(float v1, vex2f v);
	vex4f(vex2f v, vex2f v1);
	vex4f(vex2f v, double v1);
	vex4f(vex2f v, double v1, double v2);
	vex4f(double v2, vex2f v, double v1);
	vex4f(double v1, double v2, vex2f v);
	vex4f(double v1, vex2f v);
	vex4f(vex2f v, int v1);
	vex4f(vex2f v, int v1, int v2);
	vex4f(int v2, vex2f v, int v1);
	vex4f(int v1, int v2, vex2f v);
	vex4f(int v1, vex2f v);

	vex4f(vex2d v, float v1);
	vex4f(vex2d v, float v1, float v2);
	vex4f(float v2, vex2d v, float v1);
	vex4f(float v1, float v2, vex2d v);
	vex4f(float v1, vex2d v);
	vex4f(vex2d v, vex2d v1);
	vex4f(vex2d v, double v1);
	vex4f(vex2d v, double v1, double v2);
	vex4f(double v2, vex2d v, double v1);
	vex4f(double v1, double v2, vex2d v);
	vex4f(double v1, vex2d v);
	vex4f(vex2d v, int v1);
	vex4f(vex2d v, int v1, int v2);
	vex4f(int v2, vex2d v, int v1);
	vex4f(int v1, int v2, vex2d v);
	vex4f(int v1, vex2d v);

	vex4f(vex2i v, float v1);
	vex4f(vex2i v, float v1, float v2);
	vex4f(float v2, vex2i v, float v1);
	vex4f(float v1, float v2, vex2i v);
	vex4f(float v1, vex2i v);
	vex4f(vex2i v, vex2i v1);
	vex4f(vex2i v, double v1);
	vex4f(vex2i v, double v1, double v2);
	vex4f(double v2, vex2i v, double v1);
	vex4f(double v1, double v2, vex2i v);
	vex4f(double v1, vex2i v);
	vex4f(vex2i v, int v1);
	vex4f(vex2i v, int v1, int v2);
	vex4f(int v2, vex2i v, int v1);
	vex4f(int v1, int v2, vex2i v);
	vex4f(int v1, vex2i v);

	vex4f(vex3f v, float v1);
	vex4f(float v1, vex3f v);
	vex4f(vex3d v, float v1);
	vex4f(float v1, vex3d v);
	vex4f(vex3i v, float v1);
	vex4f(float v1, vex3i v);

	vex4f(vex3f v, double v1);
	vex4f(double v1, vex3f v);
	vex4f(vex3d v, double v1);
	vex4f(double v1, vex3d v);
	vex4f(vex3i v, double v1);
	vex4f(double v1, vex3i v);

	vex4f(vex3f v, int v1);
	vex4f(int v1, vex3f v);
	vex4f(vex3d v, int v1);
	vex4f(int v1, vex3d v);
	vex4f(vex3i v, int v1);
	vex4f(int v1, vex3i v);

	void operator= (vex2d v);
	void operator= (vex2i v);
	void operator= (vex2f v);
	void operator= (vex3d v);
	void operator= (vex3i v);
	void operator= (vex3f v);
	void operator= (vex4d v);
	void operator= (vex4i v);

	vex4f operator+ (vex4f v);
	vex4f operator- (vex4f v);
	vex4f operator* (vex4f v);
	vex4f operator/ (vex4f v);

	vex4f operator+ (vex4d v);
	vex4f operator- (vex4d v);
	vex4f operator* (vex4d v);
	vex4f operator/ (vex4d v);

	vex4f operator+ (vex4i v);
	vex4f operator- (vex4i v);
	vex4f operator* (vex4i v);
	vex4f operator/ (vex4i v);

	vex4f operator+ (vex3f v);
	vex4f operator- (vex3f v);
	vex4f operator* (vex3f v);
	vex4f operator/ (vex3f v);

	vex4f operator+ (vex3i v);
	vex4f operator- (vex3i v);
	vex4f operator* (vex3i v);
	vex4f operator/ (vex3i v);

	vex4f operator+ (vex3d v);
	vex4f operator- (vex3d v);
	vex4f operator* (vex3d v);
	vex4f operator/ (vex3d v);

	vex4f operator+ (vex2f v);
	vex4f operator- (vex2f v);
	vex4f operator* (vex2f v);
	vex4f operator/ (vex2f v);

	vex4f operator+ (vex2i v);
	vex4f operator- (vex2i v);
	vex4f operator* (vex2i v);
	vex4f operator/ (vex2i v);

	vex4f operator+ (vex2d v);
	vex4f operator- (vex2d v);
	vex4f operator* (vex2d v);
	vex4f operator/ (vex2d v);

	void operator+= (vex4d v);
	void operator-= (vex4d v);
	void operator*= (vex4d v);
	void operator/= (vex4d v);
	void operator+= (vex4i v);
	void operator-= (vex4i v);
	void operator*= (vex4i v);
	void operator/= (vex4i v);
	void operator+= (vex3f v);
	void operator-= (vex3f v);
	void operator*= (vex3f v);
	void operator/= (vex3f v);
	void operator+= (vex3i v);
	void operator-= (vex3i v);
	void operator*= (vex3i v);
	void operator/= (vex3i v);
	void operator+= (vex3d v);
	void operator-= (vex3d v);
	void operator*= (vex3d v);
	void operator/= (vex3d v);
	void operator+= (vex2f v);
	void operator-= (vex2f v);
	void operator*= (vex2f v);
	void operator/= (vex2f v);
	void operator+= (vex2i v);
	void operator-= (vex2i v);
	void operator*= (vex2i v);
	void operator/= (vex2i v);
	void operator+= (vex2d v);
	void operator-= (vex2d v);
	void operator*= (vex2d v);
	void operator/= (vex2d v);

	vex4f operator+ (float v);
	vex4f operator- (float v);
	vex4f operator* (float v);
	vex4f operator/ (float v);
	void operator= ( float v);

	void operator+= (vex4f v);
	void operator-= (vex4f v);
	void operator*= (vex4f v);
	void operator/= (vex4f v);
	void operator+= (float v) { x += v; y += v; z += v; w += v; };
	void operator-= (float v) { x -= v; y -= v; z -= v; w -= v; };
	void operator*= (float v) { x *= v; y *= v; z *= v; w *= v; };
	void operator/= (float v) { x /= v; y /= v; z /= v; w /= v; };
	void operator++ () { x += 1.0f; y += 1.0f; };
	void operator-- () { x -= 1.0f; y -= 1.0f; };

	bool operator== (vex4f v);
	bool operator== (float v);
	bool operator!= (vex4f v);
	bool operator!= (float v);
	bool operator< (vex4f v);
	bool operator< (float v);
	bool operator<= (vex4f v);
	bool operator<= (float v);
	bool operator> (vex4f v);
	bool operator> (float v);
	bool operator>= (vex4f v);
	bool operator>= (float v);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float v);
	void pow_(int v);
	void rand_(int v2, int v3);
	void atan2_(vex4f v);
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
	vex4f percent(float v);
	vex4f pow(int v);
	vex4f rand(int v2, int v3);
	vex4f atan2(vex4f v);
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
	vex4d(bool& v1, bool& v2, bool& v3, bool& v4) { x = std::atof(v1); y = std::atof(v2); z = std::atof(v3); w = std::atof(v4); };
	vex4d(bool& v1, bool& v2, bool& v3) { x = std::atof(v1); y = std::atof(v2); z = std::atof(v3); };
	vex4d(bool& v1, bool& v2) { x = std::atof(v1); y = std::atof(v2); };
	vex4d(bool& v1) { x = std::atof(v1); y = std::atof(v1); z = std::atof(v1); w = std::atof(v1); };
	vex4d(std::string v1, std::string v2, std::string v3, std::string v4) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); z = std::atof(v3.c_str()); w = std::atof(v4.c_str()); };
	vex4d(std::string v1, std::string v2, std::string v3) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); z = std::atof(v3.c_str()); };
	vex4d(std::string v1, std::string v2) { x = std::atof(v1.c_str()); y = std::atof(v2.c_str()); };
	vex4d(std::string v1) { x = std::atof(v1.c_str()); y = std::atof(v1.c_str());  z = std::atof(v1.c_str()); w = std::atof(v1.c_str());};
	vex4d(vex2d v);
	vex4d(vex2i v);
	vex4d(vex2f v);
	vex4d(vex3d v);
	vex4d(vex3i v);
	vex4d(vex3f v);
	vex4d(vex4f v);
	vex4d(vex4i v);

	vex4d(vex2f v, float v1);
	vex4d(vex2f v, float v1, float v2);
	vex4d(float v2, vex2f v, float v1);
	vex4d(float v1, float v2, vex2f v);
	vex4d(float v1, vex2f v);
	vex4d(vex2f v, vex2f v1);
	vex4d(vex2f v, double v1);
	vex4d(vex2f v, double v1, double v2);
	vex4d(double v2, vex2f v, double v1);
	vex4d(double v1, double v2, vex2f v);
	vex4d(double v1, vex2f v);
	vex4d(vex2f v, int v1);
	vex4d(vex2f v, int v1, int v2);
	vex4d(int v2, vex2f v, int v1);
	vex4d(int v1, int v2, vex2f v);
	vex4d(int v1, vex2f v);
		
	vex4d(vex2d v, float v1);
	vex4d(vex2d v, float v1, float v2);
	vex4d(float v2, vex2d v, float v1);
	vex4d(float v1, float v2, vex2d v);
	vex4d(float v1, vex2d v);
	vex4d(vex2d v, vex2d v1);
	vex4d(vex2d v, double v1);
	vex4d(vex2d v, double v1, double v2);
	vex4d(double v2, vex2d v, double v1);
	vex4d(double v1, double v2, vex2d v);
	vex4d(double v1, vex2d v);
	vex4d(vex2d v, int v1);
	vex4d(vex2d v, int v1, int v2);
	vex4d(int v2, vex2d v, int v1);
	vex4d(int v1, int v2, vex2d v);
	vex4d(int v1, vex2d v);
		
	vex4d(vex2i v, float v1);
	vex4d(vex2i v, float v1, float v2);
	vex4d(float v2, vex2i v, float v1);
	vex4d(float v1, float v2, vex2i v);
	vex4d(float v1, vex2i v);
	vex4d(vex2i v, vex2i v1);
	vex4d(vex2i v, double v1);
	vex4d(vex2i v, double v1, double v2);
	vex4d(double v2, vex2i v, double v1);
	vex4d(double v1, double v2, vex2i v);
	vex4d(double v1, vex2i v);
	vex4d(vex2i v, int v1);
	vex4d(vex2i v, int v1, int v2);
	vex4d(int v2, vex2i v, int v1);
	vex4d(int v1, int v2, vex2i v);
	vex4d(int v1, vex2i v);
		
	vex4d(vex3f v, float v1);
	vex4d(float v1, vex3f v);
	vex4d(vex3d v, float v1);
	vex4d(float v1, vex3d v);
	vex4d(vex3i v, float v1);
	vex4d(float v1, vex3i v);
		
	vex4d(vex3f v, double v1);
	vex4d(double v1, vex3f v);
	vex4d(vex3d v, double v1);
	vex4d(double v1, vex3d v);
	vex4d(vex3i v, double v1);
	vex4d(double v1, vex3i v);
		
	vex4d(vex3f v, int v1);
	vex4d(int v1, vex3f v);
	vex4d(vex3d v, int v1);
	vex4d(int v1, vex3d v);
	vex4d(vex3i v, int v1);
	vex4d(int v1, vex3i v);

	void operator= (vex2d v);
	void operator= (vex2i v);
	void operator= (vex2f v);
	void operator= (vex3d v);
	void operator= (vex3i v);
	void operator= (vex3f v);
	void operator= (vex4f v);
	void operator= (vex4i v);

	vex4d operator+ (vex4f v);
	vex4d operator- (vex4f v);
	vex4d operator* (vex4f v);
	vex4d operator/ (vex4f v);
		
	vex4d operator+ (vex4i v);
	vex4d operator- (vex4i v);
	vex4d operator* (vex4i v);
	vex4d operator/ (vex4i v);
		
	vex4d operator+ (vex3f v);
	vex4d operator- (vex3f v);
	vex4d operator* (vex3f v);
	vex4d operator/ (vex3f v);
		
	vex4d operator+ (vex3i v);
	vex4d operator- (vex3i v);
	vex4d operator* (vex3i v);
	vex4d operator/ (vex3i v);
		
	vex4d operator+ (vex3d v);
	vex4d operator- (vex3d v);
	vex4d operator* (vex3d v);
	vex4d operator/ (vex3d v);
		
	vex4d operator+ (vex2f v);
	vex4d operator- (vex2f v);
	vex4d operator* (vex2f v);
	vex4d operator/ (vex2f v);
		
	vex4d operator+ (vex2i v);
	vex4d operator- (vex2i v);
	vex4d operator* (vex2i v);
	vex4d operator/ (vex2i v);
		
	vex4d operator+ (vex2d v);
	vex4d operator- (vex2d v);
	vex4d operator* (vex2d v);
	vex4d operator/ (vex2d v);

	vex4d operator+ (vex4d v);
	vex4d operator- (vex4d v);
	vex4d operator* (vex4d v);
	vex4d operator/ (vex4d v);

	vex4d operator+ (double v);
	vex4d operator- (double v);
	vex4d operator* (double v);
	vex4d operator/ (double v);
	void operator= ( double v);


	void operator+= (vex4f v);
	void operator-= (vex4f v);
	void operator*= (vex4f v);
	void operator/= (vex4f v);
	void operator+= (vex4i v);
	void operator-= (vex4i v);
	void operator*= (vex4i v);
	void operator/= (vex4i v);
	void operator+= (vex3f v);
	void operator-= (vex3f v);
	void operator*= (vex3f v);
	void operator/= (vex3f v);
	void operator+= (vex3i v);
	void operator-= (vex3i v);
	void operator*= (vex3i v);
	void operator/= (vex3i v);
	void operator+= (vex3d v);
	void operator-= (vex3d v);
	void operator*= (vex3d v);
	void operator/= (vex3d v);
	void operator+= (vex2f v);
	void operator-= (vex2f v);
	void operator*= (vex2f v);
	void operator/= (vex2f v);
	void operator+= (vex2i v);
	void operator-= (vex2i v);
	void operator*= (vex2i v);
	void operator/= (vex2i v);
	void operator+= (vex2d v);
	void operator-= (vex2d v);
	void operator*= (vex2d v);
	void operator/= (vex2d v);
	
	void operator+= (vex4d v);
	void operator-= (vex4d v);
	void operator*= (vex4d v);
	void operator/= (vex4d v);
	void operator+= (double v) { x += v; y += v; z += v; w += v; };
	void operator-= (double v) { x -= v; y -= v; z -= v; w -= v; };
	void operator*= (double v) { x *= v; y *= v; z *= v; w *= v; };
	void operator/= (double v) { x /= v; y /= v; z /= v; w /= v; };
	void operator++ () { x += 1.0; y += 1.0; };
	void operator-- () { x -= 1.0; y -= 1.0; };

	bool operator== (vex4d v);
	bool operator== (double v);
	bool operator!= (vex4d v);
	bool operator!= (double v);
	bool operator< (vex4d v);
	bool operator< (double v);
	bool operator<= (vex4d v);
	bool operator<= (double v);
	bool operator> (vex4d  v);
	bool operator> (double v);
	bool operator>= (vex4d v);
	bool operator>= (double v);

	void normalize();
	void ceil_();
	void floor_();
	void abs_();
	void sqrt_();
	void percent_(float v);
	void pow_(int v);
	void rand_(int v2, int v3);
	void atan2_(vex4d v);
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
	vex4d percent(float v);
	vex4d pow(int v);
	vex4d rand(int v2, int v3);
	vex4d atan2(vex4d v);
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
	void operator= (const bool v);
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
void vex4b::operator=(const bool v) {
	this->x = v;
	this->y = v;
	this->z = v;
	this->w = v;
};
// //////////////////////// //
struct vex4i {
	int x, y, z, w;
	vex4i();
	vex4i(int v1, int v2, int v3, int v4);
	vex4i(int v1, int v2, int v3);
	vex4i(int v1, int v2);
	vex4i(int v1);
	vex4i(bool& v1, bool& v2, bool& v3, bool& v4) { x = std::atoi(v1); y = std::atoi(v2); z = std::atoi(v3); w = std::atoi(v4); };
	vex4i(bool& v1, bool& v2, bool& v3) { x = std::atoi(v1); y = std::atoi(v2); z = std::atoi(v3); };
	vex4i(bool& v1, bool& v2) { x = std::atoi(v1); y = std::atoi(v2); };
	vex4i(bool& v1) { x = std::atof(v1); y = std::atof(v1); z = std::atof(v1); w = std::atof(v1); };
	vex4i(std::string v1, std::string v2, std::string v3, std::string v4) { x = std::atoi(v1.c_str()); y = std::atoi(v2.c_str()); z = std::atoi(v3.c_str()); w = std::atoi(v4.c_str()); };
	vex4i(std::string v1, std::string v2, std::string v3) { x = std::atoi(v1.c_str()); y = std::atoi(v2.c_str()); z = std::atoi(v3.c_str()); };
	vex4i(std::string v1, std::string v2) { x = std::atoi(v1.c_str()); y = std::atoi(v2.c_str()); };
	vex4i(std::string v1) { x = std::atoi(v1.c_str()); y = std::atoi(v1.c_str());  z = std::atoi(v1.c_str()); w = std::atoi(v1.c_str());};
	vex4i(vex2d v);
	vex4i(vex2i v);
	vex4i(vex2f v);
	vex4i(vex3d v);
	vex4i(vex3i v);
	vex4i(vex3f v);
	vex4i(vex4d v);
	vex4i(vex4f v);

	vex4i(vex2f v, float v1);
	vex4i(vex2f v, float v1, float v2);
	vex4i(float v2, vex2f v, float v1);
	vex4i(float v1, float v2, vex2f v);
	vex4i(float v1, vex2f v);
	vex4i(vex2f v, vex2f v1);
	vex4i(vex2f v, double v1);
	vex4i(vex2f v, double v1, double v2);
	vex4i(double v2, vex2f v, double v1);
	vex4i(double v1, double v2, vex2f v);
	vex4i(double v1, vex2f v);
	vex4i(vex2f v, int v1);
	vex4i(vex2f v, int v1, int v2);
	vex4i(int v2, vex2f v, int v1);
	vex4i(int v1, int v2, vex2f v);
	vex4i(int v1, vex2f v);
		
	vex4i(vex2d v, float v1);
	vex4i(vex2d v, float v1, float v2);
	vex4i(float v2, vex2d v, float v1);
	vex4i(float v1, float v2, vex2d v);
	vex4i(float v1, vex2d v);
	vex4i(vex2d v, vex2d v1);
	vex4i(vex2d v, double v1);
	vex4i(vex2d v, double v1, double v2);
	vex4i(double v2, vex2d v, double v1);
	vex4i(double v1, double v2, vex2d v);
	vex4i(double v1, vex2d v);
	vex4i(vex2d v, int v1);
	vex4i(vex2d v, int v1, int v2);
	vex4i(int v2, vex2d v, int v1);
	vex4i(int v1, int v2, vex2d v);
	vex4i(int v1, vex2d v);
		
	vex4i(vex2i v, float v1);
	vex4i(vex2i v, float v1, float v2);
	vex4i(float v2, vex2i v, float v1);
	vex4i(float v1, float v2, vex2i v);
	vex4i(float v1, vex2i v);
	vex4i(vex2i v, double v1);
	vex4i(vex2i v, double v1, double v2);
	vex4i(double v2, vex2i v, double v1);
	vex4i(double v1, double v2, vex2i v);
	vex4i(double v1, vex2i v);
	vex4i(vex2i v, int v1);
	vex4i(vex2i v, int v1, int v2);
	vex4i(int v2, vex2i v, int v1);
	vex4i(int v1, int v2, vex2i v);
	vex4i(int v1, vex2i v);
	vex4i(vex2i v, vex2i v1);
		
	vex4i(vex3f v, float v1);
	vex4i(float v1, vex3f v);
	vex4i(vex3d v, float v1);
	vex4i(float v1, vex3d v);
	vex4i(vex3i v, float v1);
	vex4i(float v1, vex3i v);
		
	vex4i(vex3f v, double v1);
	vex4i(double v1, vex3f v);
	vex4i(vex3d v, double v1);
	vex4i(double v1, vex3d v);
	vex4i(vex3i v, double v1);
	vex4i(double v1, vex3i v);
		
	vex4i(vex3f v, int v1);
	vex4i(int v1, vex3f v);
	vex4i(vex3d v, int v1);
	vex4i(int v1, vex3d v);
	vex4i(vex3i v, int v1);
	vex4i(int v1, vex3i v);

	void operator= (vex2d v);
	void operator= (vex2i v);
	void operator= (vex2f v);
	void operator= (vex3d v);
	void operator= (vex3i v);
	void operator= (vex3f v);
	void operator= (vex4d v);
	void operator= (vex4f v);

	vex4i operator+ (vex4f v);
	vex4i operator- (vex4f v);
	vex4i operator* (vex4f v);
	vex4i operator/ (vex4f v);
		
	vex4i operator+ (vex4d v);
	vex4i operator- (vex4d v);
	vex4i operator* (vex4d v);
	vex4i operator/ (vex4d v);
		
	vex4i operator+ (vex3f v);
	vex4i operator- (vex3f v);
	vex4i operator* (vex3f v);
	vex4i operator/ (vex3f v);
		
	vex4i operator+ (vex3i v);
	vex4i operator- (vex3i v);
	vex4i operator* (vex3i v);
	vex4i operator/ (vex3i v);
	
	vex4i operator+ (vex3d v);
	vex4i operator- (vex3d v);
	vex4i operator* (vex3d v);
	vex4i operator/ (vex3d v);
		
	vex4i operator+ (vex2f v);
	vex4i operator- (vex2f v);
	vex4i operator* (vex2f v);
	vex4i operator/ (vex2f v);
		
	vex4i operator+ (vex2i v);
	vex4i operator- (vex2i v);
	vex4i operator* (vex2i v);
	vex4i operator/ (vex2i v);
		
	vex4i operator+ (vex2d v);
	vex4i operator- (vex2d v);
	vex4i operator* (vex2d v);
	vex4i operator/ (vex2d v);

	vex4i operator+ (vex4i v);
	vex4i operator- (vex4i v);
	vex4i operator* (vex4i v);
	vex4i operator/ (vex4i v);

	vex4i operator+ (int v);
	vex4i operator- (int v);
	vex4i operator* (int v);
	vex4i operator/ (int v);
	void operator= ( int v);

	void operator+= (vex4d v);
	void operator-= (vex4d v);
	void operator*= (vex4d v);
	void operator/= (vex4d v);
	void operator+= (vex4f v);
	void operator-= (vex4f v);
	void operator*= (vex4f v);
	void operator/= (vex4f v);
	void operator+= (vex3f v);
	void operator-= (vex3f v);
	void operator*= (vex3f v);
	void operator/= (vex3f v);
	void operator+= (vex3i v);
	void operator-= (vex3i v);
	void operator*= (vex3i v);
	void operator/= (vex3i v);
	void operator+= (vex3d v);
	void operator-= (vex3d v);
	void operator*= (vex3d v);
	void operator/= (vex3d v);
	void operator+= (vex2f v);
	void operator-= (vex2f v);
	void operator*= (vex2f v);
	void operator/= (vex2f v);
	void operator+= (vex2i v);
	void operator-= (vex2i v);
	void operator*= (vex2i v);
	void operator/= (vex2i v);
	void operator+= (vex2d v);
	void operator-= (vex2d v);
	void operator*= (vex2d v);
	void operator/= (vex2d v);

	void operator+= (vex4i v);
	void operator-= (vex4i v);
	void operator*= (vex4i v);
	void operator/= (vex4i v);
	void operator+= (int v) { x += v; y += v; z += v; w += v; };
	void operator-= (int v) { x -= v; y -= v; z -= v; w -= v; };
	void operator*= (int v) { x *= v; y *= v; z *= v; w *= v; };
	void operator/= (int v) { x /= v; y /= v; z /= v; w /= v; };
	void operator++ () { x ++; y ++; };
	void operator-- () { x --; y --; };

	bool operator== (vex4i v);
	bool operator== (int v);
	bool operator!= (vex4i v);
	bool operator!= (int v);
	bool operator< (vex4i v);
	bool operator< (int v);
	bool operator<= (vex4i v);
	bool operator<= (int v);
	bool operator> (vex4i v);
	bool operator> (int v);
	bool operator>= (vex4i v);
	bool operator>= (int v);

	void normalize();
	void abs_();
	void sqrt_();
	void percent_(int v);
	void pow_(int v);
	void rand_(int v2, int v3);
	void atan2_(vex4i v);
	void atan_();
	void asin_();
	void acos_();
	void tan_();
	void sin_();
	void cos_();
	void average_();
	void log_();
	void exp_();
	void cbrt_();

	vex4i abs();
	vex4i sqrt();
	vex4i percent(int v);
	vex4i pow(int v);
	vex4i rand(int v2, int v3);
	vex4i atan2(vex4i v);
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
	vex4s operator+ (const vex4s& v);

	vex4s operator+ (const std::string v);
	void operator= (const std::string v);
	void operator+= (const vex4s& v);
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
void vex4s::operator=(const std::string v) {
	this->x = v;
	this->y = v;
	this->z = v;
	this->w = v;
};
vex4s vex4s::operator+(const vex4s& v) {
	vex4s __temp;
	__temp.x = this->x + v.x;
	__temp.y = this->y + v.y;
	__temp.z = this->z + v.z;
	__temp.w = this->w + v.w;
	return __temp;
};
vex4s vex4s::operator+(const std::string v) {
	vex4s __temp;
	__temp.x = this->x + v;
	__temp.y = this->y + v;
	__temp.z = this->z + v;
	__temp.w = this->w + v;
	return __temp;
};
void vex4s::operator+=(const vex4s& v) {
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
	this->w += v.w;
};
