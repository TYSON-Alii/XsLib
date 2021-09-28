/*vex4f XsQuaternion(float __x, float __y, float __z) {
	vex4f __data;
	const float c1 = cos(__x / 2);
	const float s1 = sin(__x / 2);
	const float c2 = cos(__y / 2);
	const float s2 = sin(__y / 2);
	const float c3 = cos(__z / 2);
	const float s3 = sin(__z / 2);
	const float c1c2 = c1 * c2;
	const float s1s2 = s1 * s2;
	__data.w = (c1c2 * c3 - s1s2 * s3);
	__data.z = (c1c2 * s3 + s1s2 * c3) * -1;
	__data.x = (s1 * c2 * c3 + c1 * s2 * s3) * -1;
	__data.y = (c1 * s2 * c3 - s1 * c2 * s3) * -1;
	return __data;
};
vex4f XsQuaternion(vex3f __yon) {
	double cy = cos(__yon.x);
	double sy = sin(__yon.x);
	double cp = cos(__yon.y);
	double sp = sin(__yon.y);
	double cr = cos(__yon.z);
	double sr = sin(__yon.z);

	vex4f q;
	q.w = cr * cp * cy + sr * sp * sy;
	q.x = sr * cp * cy - cr * sp * sy;
	q.y = cr * sp * cy + sr * cp * sy;
	q.z = cr * cp * sy - sr * sp * cy;
	return q;
};

class xny {
private:
	volatile int* _ti = new int;
	volatile float* _tf = new float;
	volatile double* _td = new double;
	volatile bool* _tb = new bool;
	const volatile char* _tc;
	const volatile char* _type;
public:
	auto type() { decltype(_type); };
	void operator=(int v) {
		*_ti = v;
		_tf = new float;
		_td = new double;
		_tc = "";
		*_tb = new bool;
		_type = "int";
	};
	void operator=(float v) {
		_ti = new int;
		*_tf = v;
		_td = new double;
		_tc = "";
		*_tb = new bool;
		_type = "float";
	};
	void operator=(double v) {
		_ti = new int;
		_tf = new float;
		*_td = v;
		_tc = "";
		*_tb = new bool;
		_type = "double";
	};
	void operator=(const char* v) {
		_ti = new int;
		_tf = new float;
		_td = new double;
		_tc = v;
		*_tb = new bool;
		_type = "const char";
	};
	void operator=(char v) {
		_ti = new int;
		_tf = new float;
		_td = new double;
		_tc = &v;
		*_tb = new bool;
		_type = "char";
	};
	void operator=(bool& v) {
		_ti = new int;
		_tf = new float;
		_td = new double;
		_tc = "";
		*_tb = v;
		_type = "bool";
	};
};
*/
float XsDistance(vex3f __a, vex3f __b) { return sqrtf((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y) + (__a.z - __b.z) * (__a.z - __b.z)); };
double XsDistance(vex3d __a, vex3d __b) { return sqrt((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y) + (__a.z - __b.z) * (__a.z - __b.z)); };
int XsDistance(vex3i __a, vex3i __b) { return sqrt((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y) + (__a.z - __b.z) * (__a.z - __b.z)); };
float XsDistance(vex2f __a, vex2f __b) { return sqrtf((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y)); };
double XsDistance(vex2d __a, vex2d __b) { return sqrt((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y)); };
int XsDistance(vex2i __a, vex2i __b) { return sqrt((__a.x - __b.x) * (__a.x - __b.x) + (__a.y - __b.y) * (__a.y - __b.y)); };
int digit(int __vev) {
	int __digit = 0;
	int ___i = 0;
	while (___i < __vev) {
		__digit++;
		___i = pow(10, __digit);
	};
	return __digit;
};
float percent(float __vev, float __v) { return __vev / 100.0f * __v; };
float absx(float __vev) {
	if (__vev >= 0)
		return __vev;
	return __vev * -1;
};
float powx(float __vev, int __pow) {
	const float temp = __vev;
	float ____s = __vev;
	for (int __i = 0; __i < __pow; __i++) {
		__vev *= temp;
	};
	return ____s;
};

template<typename T>std::vector<T>& operator<<(std::vector<T>& v, T item) { v.push_back(item); return v; };
template<typename T>std::vector<T>& operator>>(std::vector<T>& v, T item) { v.erase(v.begin() + item); return v; };
//template<typename T>std::deque<T>& operator<<(std::deque<T>& v, T item) { v.push_back(item); return v; };
//template<typename T>std::deque<T>& operator>>(std::deque<T>& v, T item) { v.erase(v.begin() + item); return v; };

template <typename T>void ArrayScaler(T __a[], int _count, T __scale) { for (int _i = 0; _i < _count; _i++)__a[_i] = __a[_i] * __scale; };

class XsPrinter {
private:
	std::string _between = "";
public:
	void operator<<(int _v);
	void operator<<(float _v);
	void operator<<(double _v);
	void operator<<(char _v);
	void operator<<(bool _v);
	void operator<<(std::string _v);
	void operator<<(std::vector<int> _v);
	void operator<<(std::vector<float> _v);
	void operator<<(std::vector<double> _v);
	void operator<<(std::vector<char> _v);
	void operator<<(std::vector<bool> _v);
	void operator<<(std::vector<std::string> _v);
	/*void operator<<(std::deque<int> _v);
	void operator<<(std::deque<float> _v);
	void operator<<(std::deque<double> _v);
	void operator<<(std::deque<char> _v);
	void operator<<(std::deque<bool> _v);
	void operator<<(std::deque<std::string> _v);*/
	void operator<<(vex2f _v);
	void operator<<(vex2d _v);
	void operator<<(vex2i _v);
	void operator<<(vex2h _v);
	void operator<<(vex2s _v);
	void operator<<(vex2b _v);
	void operator<<(vex3f _v);
	void operator<<(vex3d _v);
	void operator<<(vex3i _v);
	void operator<<(vex3h _v);
	void operator<<(vex3s _v);
	void operator<<(vex3b _v);
	void operator<<(vex4f _v);
	void operator<<(vex4d _v);
	void operator<<(vex4i _v);
	void operator<<(vex4h _v);
	void operator<<(vex4s _v);
	void operator<<(vex4b _v);
	void operator<<=(const char* _v) { _between = _v; };
};
void XsPrinter::operator<<(int _v) { std::cout << _v; };
void XsPrinter::operator<<(float _v) { std::cout << _v; };
void XsPrinter::operator<<(double _v) { std::cout << _v; };
void XsPrinter::operator<<(char _v) { std::cout << _v; };
void XsPrinter::operator<<(bool _v) { std::cout << _v; };
void XsPrinter::operator<<(std::string _v) { std::cout << _v; };
void XsPrinter::operator<<(std::vector<int> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i]; };
void XsPrinter::operator<<(std::vector<float> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i]; };
void XsPrinter::operator<<(std::vector<double> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i]; };
void XsPrinter::operator<<(std::vector<char> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i]; };
void XsPrinter::operator<<(std::vector<std::string> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i]; };
/*void XsPrinter::operator<<(std::deque<int> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i] << _between; };
void XsPrinter::operator<<(std::deque<float> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i] << _between; };
void XsPrinter::operator<<(std::deque<double> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i] << _between; };
void XsPrinter::operator<<(std::deque<char> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i] << _between; };
void XsPrinter::operator<<(std::deque<std::string> _v) { for (int _i = 0; _i < _v.size(); _i++) std::cout << _v[_i] << _between; };*/
void XsPrinter::operator<<(vex2f _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex2d _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex2i _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex2h _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex2s _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex2b _v) { std::cout << _v.x << _between << _v.y; };
void XsPrinter::operator<<(vex3f _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex3d _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex3i _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex3h _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex3s _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex3b _v) { std::cout << _v.x << _between << _v.y << _between << _v.z; };
void XsPrinter::operator<<(vex4f _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };
void XsPrinter::operator<<(vex4d _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };
void XsPrinter::operator<<(vex4i _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };
void XsPrinter::operator<<(vex4h _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };
void XsPrinter::operator<<(vex4s _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };
void XsPrinter::operator<<(vex4b _v) { std::cout << _v.x << _between << _v.y << _between << _v.z << _between << _v.w; };