struct XsAABBCollission {
	vex3f pos = vex3f(0, 0, 0);
	vex3f scale = vex3f(1, 1, 1);
	bool isTouch = false;
};
bool XsDetectCollission(XsAABBCollission& __vev, XsAABBCollission& __vev2) {
	if (__vev.pos.x + __vev.scale.x > __vev2.pos.x - __vev2.scale.x &&
		__vev.pos.x - __vev.scale.x < __vev2.pos.x + __vev2.scale.x &&
		__vev.pos.y + __vev.scale.y > __vev2.pos.y - __vev2.scale.y &&
		__vev.pos.y - __vev.scale.y < __vev2.pos.y + __vev2.scale.y &&
		__vev.pos.z + __vev.scale.z > __vev2.pos.z - __vev2.scale.z &&
		__vev.pos.z - __vev.scale.z < __vev2.pos.z + __vev2.scale.z) {
		__vev.isTouch = true;
		__vev2.isTouch = true;
		return true;
	}
	else {
		__vev.isTouch = false;
		__vev2.isTouch = false;
		return false;
	};
};