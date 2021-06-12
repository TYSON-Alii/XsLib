vex2i XsGetMousePos() {
	POINT p;
	GetCursorPos(&p);
	return vex2i(p.x, p.y);
};
void XsGetMousePos(vex2i& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex2i(p.x, p.y);
};
void XsGetMousePos(vex2f& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex2f(p.x, p.y);
};
void XsGetMousePos(vex2d& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex2d(p.x, p.y);
};
void XsGetMousePos(vex3i& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex3i(p.x, p.y);
};
void XsGetMousePos(vex3f& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex3f(float(p.x), float(p.y));
};
void XsGetMousePos(vex3d& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex3d(double(p.x), double(p.y));
};
void XsGetMousePos(vex4i& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex4i(p.x, p.y);
};
void XsGetMousePos(vex4f& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex4f(float(p.x), float(p.y));
};
void XsGetMousePos(vex4d& __vev) {
	POINT p;
	GetCursorPos(&p);
	__vev = vex4d(double(p.x), double(p.y));
};
#ifdef XS_USE_SFML
vex2f XsGetMousePos(sf::RenderWindow& window) {
	POINT __p;
	GetCursorPos(&__p);
	float __x = __p.x - window.getPosition().x - 5;
	float __y;
	if (__p.y - window.getPosition().y < window.getSize().y / 2)
	{
		__y = __p.y - window.getPosition().y - 30;
	}
	else if (__p.y - window.getPosition().y >= window.getSize().y / 2)
	{
		__y = fabs(__p.y - window.getPosition().y) - 30;
	}
	return vex2f(__x, __y);
}
#endif
bool XsIsKeyPressed(short unsigned int __KEY_CODE) { return (GetKeyState(__KEY_CODE) & 0x800); };