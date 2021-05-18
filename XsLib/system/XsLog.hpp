void XsLogError(const int __colorF, const int __colorB, const char* __messages) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
	std::cerr << __messages;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void XsPrint(const int __colorF, const int __colorB, const char* __messages) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
	std::wcout << __messages;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void XsLogDate(const int __colorF, const int __colorB, const int __style) {
	if (__style == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "%H::%M::%S - %d /%m /%y", localtime(&___t));
		std::cerr << ___s;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else if (__style == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "--[ %H::%M::%S - %d /%m /%y ]--", localtime(&___t));
		std::cerr << ___s;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else if (__style == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "~~> %H::%M::%S - %d /%m /%y <~~", localtime(&___t));
		std::cerr << ___s;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else if (__style == 3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), __colorB * 16 + __colorF);
		CHAR ___s[80];
		time_t ___t = time(0);
		strftime(___s, 80, "==> %H::%M::%S - %d /%m /%y <==", localtime(&___t));
		std::cerr << ___s;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else
		std::cerr << "date style error... XD ";
}