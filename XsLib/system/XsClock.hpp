class XsChrono {
private:
	std::chrono::time_point<std::chrono::system_clock> _qwe = std::chrono::system_clock::now();
	std::chrono::time_point<std::chrono::system_clock> ___start = std::chrono::system_clock::now(), ___end = std::chrono::system_clock::now();
public:
	const std::chrono::time_point<std::chrono::system_clock> getStartTime() { return _qwe; };
	float timeAfterCreation() { return (float)std::chrono::duration_cast<std::chrono::milliseconds>(_qwe - std::chrono::system_clock::now()).count() / 1000.f; };
	void restart() {
		___start = std::chrono::system_clock::now();
	};
	void reset() {
		_qwe = std::chrono::system_clock::now();
		___start = std::chrono::system_clock::now();
	};
	bool froze = false;
	int getSeconds() {
		if (!froze)
			___end = std::chrono::system_clock::now();
		return (int)std::chrono::duration_cast<std::chrono::seconds>(___end - ___start).count();
	};
	float getMilliSeconds() {
		if (!froze)
			___end = std::chrono::system_clock::now();
		return (float)std::chrono::duration_cast<std::chrono::milliseconds>(___end - ___start).count() / 1000.f;
	};
	double getMicroSeconds() {
		if (!froze)
			___end = std::chrono::system_clock::now();
		return (double)std::chrono::duration_cast<std::chrono::microseconds>(___end - ___start).count() / 1000000.0;
	};
	long double getNanoSeconds() {
		if (!froze)
			___end = std::chrono::system_clock::now();
		return (long double)std::chrono::duration_cast<std::chrono::nanoseconds>(___end - ___start).count() / 1000000000.0;
	};
};
struct XsDate {
	std::string date() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%H::%M::%S - %d /%m /%Y", localtime(&___t));
		return std::string(___s);
	};
	std::string weekDayName() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%A", localtime(&___t));
		return std::string(___s);
	};
	std::string monthName() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%C", localtime(&___t));
		return std::string(___s);
	};
	int century() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%C", localtime(&___t));
		return std::atoi(___s) + 1;
	};
	int second() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%S", localtime(&___t));
		return std::atoi(___s);
	};
	int minute() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%M", localtime(&___t));
		return std::atoi(___s);
	};
	int hour() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%H", localtime(&___t));
		return std::atoi(___s);
	};
	int day() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%d", localtime(&___t));
		return std::atoi(___s);
	};
	int month() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%m", localtime(&___t));
		return std::atoi(___s);
	};
	int year() {
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%y", localtime(&___t));
		return std::atoi(___s);
	};
};
class XsTimer {
private:
	XsChrono _time;
public:
	XsChrono getTimeData() { return _time; };
	void restart() { _time.restart(); };
	float limit = 0;
	bool isPassed() { return _time.getMilliSeconds() < limit; };
	bool isPassed(float _l) { return _time.getMilliSeconds() < _l; };
};
bool XsLimiter(XsChrono& __vev, float __vev2) {
	if (__vev2 < __vev.getMilliSeconds()) {
		__vev.restart();
		return true;
	}
	return false;
};