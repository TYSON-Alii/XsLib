void XsScale (XsVertexDepo& __vertex, vex3f __scale) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position * __scale;
}
void XsOrigin (XsVertexDepo& __vertex, vex3f __origin) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + __origin;
}
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max, float __scale) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + ((rand() % __max - __min) + __min) / __scale;
}
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max) {
	for (int __i = 0; __i < __vertex.size(); __i++)
		__vertex[__i].position = __vertex[__i].position + (rand() % (__max - __min) + __min) / XS_PI;
}
void XsJoin(XsVertexDepo& __vertex, XsVertexDepo __vev) {
	for (int _i = 0; _i < __vev.size(); _i++) {
		__vertex.push_back(__vev[_i]);
	}
}
void XsShapeErase(XsVertexDepo& ___mode, vex3f __pos, XsVertexDepo& ___preh, vex3f __pos2, float __margin) {
	
}