std::string to_string(int __stryno) {
	std::ostringstream ___ss;
	___ss << __stryno;
	return ___ss.str();
};
std::string to_string(float __stryno) {
	std::ostringstream ___ss;
	___ss << __stryno;
	return ___ss.str();
};
std::string to_string(double __stryno) {
	std::ostringstream ___ss;
	___ss << __stryno;
	return ___ss.str();
};
/*int to_int(std::string __yazi, bool _bhj) {
	int ___sayi = 0, __i = 0, __es = 0;
	for (char& __c : __yazi) {
		if (__c == '0')
			___sayi += 0 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '1')
			___sayi += 1 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '2')
			___sayi += 2 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '3')
			___sayi += 3 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '4')
			___sayi += 4 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '5')
			___sayi += 5 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '6')
			___sayi += 6 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '7')
			___sayi += 7 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '8')
			___sayi += 8 * pow(10, __yazi.length() - __i - 1);
		else if (__c == '9')
			___sayi += 9 * pow(10, __yazi.length() - __i - 1);
		else {
			if (_bhj) {
				___sayi *= 10;
				__i--;
				__es++;
			}
		}
		__i++;
	}
	if (_bhj)
		return ___sayi / pow(10, __es);
	else
		return ___sayi;
};*/