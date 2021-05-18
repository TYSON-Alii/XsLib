struct XsClock {
private:
	std::chrono::time_point<std::chrono::system_clock> ___start = std::chrono::system_clock::now(), ___end;
public:
	void start() {
		___start = std::chrono::system_clock::now();
	}
	int getSeconds() {
		___end = std::chrono::system_clock::now();
		return (int)std::chrono::duration_cast<std::chrono::seconds>(___end - ___start).count();
	}
	float getMilliSeconds() {
		___end = std::chrono::system_clock::now();
		return (float)std::chrono::duration_cast<std::chrono::milliseconds>(___end - ___start).count() / 1000.f;
	}
	double getMicroSeconds() {
		___end = std::chrono::system_clock::now();
		return (double)std::chrono::duration_cast<std::chrono::microseconds>(___end - ___start).count() / 1000000.;
	}
	long double getNanoSeconds() {
		___end = std::chrono::system_clock::now();
		return (long double)std::chrono::duration_cast<std::chrono::nanoseconds>(___end - ___start).count() / 1000000000.;
	}
};
bool XsLoop(XsClock& __vev, float __vev2) {
	if (__vev2 < __vev.getMilliSeconds()) {
		__vev.start();
		return true;
	}
	else
		return false;
};