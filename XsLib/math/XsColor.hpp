int XsToInt(std::string __hex) {
	int __toplam = 0, __i = 0, __temp;
	for (char& __c : __hex) {
		if (__c == '0')
			__temp = 0;
		else if (__c == '1')
			__temp = 1;
		else if (__c == '2')
			__temp = 2;
		else if (__c == '3')
			__temp = 3;
		else if (__c == '4')
			__temp = 4;
		else if (__c == '5')
			__temp = 5;
		else if (__c == '6')
			__temp = 6;
		else if (__c == '7')
			__temp = 7;
		else if (__c == '8')
			__temp = 8;
		else if (__c == '9')
			__temp = 9;
		else if (__c == 'a')
			__temp = 10;
		else if (__c == 'b')
			__temp = 11;
		else if (__c == 'c')
			__temp = 12;
		else if (__c == 'd')
			__temp = 13;
		else if (__c == 'e')
			__temp = 14;
		else if (__c == 'f')
			__temp = 15;
		__toplam += __temp * pow(16, 5 -__i);
		__i++;
	};
	return __toplam;
};
vex3f XsToRGB(std::string __hex) {
	vex3f __toplam = vex3f();
	int __i = 0, __temp;
	for (char& __c : __hex) {
		if (__c == '0')
			__temp = 1;
		else if (__c == '1')
			__temp = 2;
		else if (__c == '2')
			__temp = 3;
		else if (__c == '3')
			__temp = 4;
		else if (__c == '4')
			__temp = 5;
		else if (__c == '5')
			__temp = 6;
		else if (__c == '6')
			__temp = 7;
		else if (__c = '7')
			__temp = 8;
		else if (__c == '8')
			__temp = 9;
		else if (__c == '9')
			__temp = 10;
		else if (__c == 'a')
			__temp = 11;
		else if (__c == 'b')
			__temp = 12;
		else if (__c == 'c')
			__temp = 13;
		else if (__c == 'd')
			__temp = 14;
		else if (__c == 'e')
			__temp = 15;
		else if (__c == 'f')
			__temp = 16;
		if (__i == 0) {
			__toplam.x = __temp;
		}
		if (__i == 1) {
			__toplam.x += __temp;
			__toplam.x *= 16;
		}
		if (__i == 2) {
			__toplam.y = __temp;
		}
		if (__i == 3) {
			__toplam.y += __temp;
			__toplam.y *= 16;
		}
		if (__i == 4) {
			__toplam.z = __temp;
		}
		if (__i == 5) {
			__toplam.z += __temp;
			__toplam.z *= 16;
		}
		__i++;
	};
	return __toplam;
};