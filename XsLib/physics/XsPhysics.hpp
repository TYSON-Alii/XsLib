class XsShapeX {
public:
	vex3f linearVelocity;
	vex3f linearDamping;
	vex3f force;
	XsShape shape;
	XsAABBCollission coll;
};
class XsPhysicsWorld {
private:
	std::deque<XsShapeX> __shapes;
public:
	vex3f gravity;
	void AddShape(XsShapeX& ___v) {
		__shapes.push_back(___v);
	};
	void step(XsClock _step_timer, float _frame);
};
void XsPhysicsWorld::step(XsClock _step_timer, float _frame) {
	for (int _i = 0; _i < __shapes.size(); _i++) {
		__shapes[_i].linearVelocity += gravity;
		__shapes[_i].shape.pos += __shapes[_i].linearVelocity * __shapes[_i].linearDamping;
		__shapes[_i].coll.pos = __shapes[_i].shape.pos;
	};
};
