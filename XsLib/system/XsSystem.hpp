vex2f XsGetMousePos() {
	POINT p;
	GetCursorPos(&p);
	return vex2f(p.x, p.y);
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
bool XsIsKeyPressed(short unsigned int __KEY_CODE) {
	return (GetKeyState(__KEY_CODE) & 0x800);
};