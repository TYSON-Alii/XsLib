/*typedef btVector3 btv3;
typedef btVector4 btv4;
class XsRigid {
private:
	btScalar _mt[16];
	btTransform _tr;
	btRigidBody* _rb;
	btCollisionShape* _sh;
public:
	btScalar* getMatrixData() { return _mt; };
	btTransform getTransformData() { return _tr; };
	btRigidBody getRigidData() { return *_rb; }
	void setShape(btBoxShape* _v) { _sh = _v; };
	void setShape(btSphereShape* _v) { _sh = _v; };
	void setShape(btCapsuleShape* _v) { _sh = _v; };
	void create(btDiscreteDynamicsWorld& _w) {
		_rb = new btRigidBody(btScalar(1.0), new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, vex3f _v) {
		_tr.setOrigin(btVector3(_v.x, _v.y, _v.z));
		_rb = new btRigidBody(btScalar(1.0), new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, vex3f _v, vex3f _s) {
		_tr.setOrigin(btVector3(_v.x, _v.y, _v.z));
		_rb = new btRigidBody(btScalar(1.0), new btDefaultMotionState(_tr), _sh, btv3(_s.x, _s.y, _s.z));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, btTransform& _v) {
		_tr = _v;
		_rb = new btRigidBody(btScalar(1.0), new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, btTransform& _v, vex3f _s) {
		_rb = new btRigidBody(btScalar(1.0), new btDefaultMotionState(_v), _sh, btv3(_s.x, _s.y, _s.z));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, btScalar mass) {
		_rb = new btRigidBody(mass, new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, vex3f _v, btScalar mass) {
		_tr.setOrigin(btVector3(_v.x, _v.y, _v.z));
		_rb = new btRigidBody(mass, new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, vex3f _v, vex3f _s, btScalar mass) {
		_tr.setOrigin(btVector3(_v.x, _v.y, _v.z));
		_rb = new btRigidBody(mass, new btDefaultMotionState(_tr), _sh, btv3(_s.x, _s.y, _s.z));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, btTransform& _v, btScalar mass) {
		_tr = _v;
		_rb = new btRigidBody(mass, new btDefaultMotionState(_tr), _sh, btv3(1.f, 1.f, 1.f));
		_w.addRigidBody(_rb);
	};
	void create(btDiscreteDynamicsWorld& _w, btTransform& _v, vex3f _s, btScalar mass) {
		_rb = new btRigidBody(mass, new btDefaultMotionState(_v), _sh, btv3(_s.x, _s.y, _s.z));
		_w.addRigidBody(_rb);
	};
	vex3f pos() { return vex3f(_tr.getOrigin().x(), _tr.getOrigin().y(), _tr.getOrigin().z()); };
	void pos(vex3f _v) { _tr.setOrigin(btv3(_v.x, _v.y, _v.z)); }
	void pos(btVector3 _v) { _tr.setOrigin(_v); }
	void pos(float _v1, float _v2, float _v3) { _tr.setOrigin(btv3(_v1, _v2, _v3)); }
	vex4f rot() { return vex4f(_tr.getRotation().x(), _tr.getRotation().y(), _tr.getRotation().z(), _tr.getRotation().w()); }
	void rot(vex4f _v) { _tr.setRotation(btQuaternion(btv3(_v.x, _v.y, _v.z), _v.w)); };
	void rot(btVector4 _v) { _tr.setRotation(btQuaternion(btv3(_v.x(), _v.y(), _v.z()), _v.w())); };
	void rot(float _v1, float _v2, float _v3, float _v4) { _tr.setRotation(btQuaternion(btv3(_v1, _v2, _v3), _v4)); };
	void rot(vex3f _v, float _v4) { _tr.setRotation(btQuaternion(btv3(_v.x, _v.y, _v.z), _v4)); };
	void rot(btv3 _v, float _v4) { _tr.setRotation(btQuaternion(_v, _v4)); };
	vex3f velLin() { return vex3f(_rb->getLinearVelocity().x(), _rb->getLinearVelocity().y(), _rb->getLinearVelocity().z()); };
	void velLin(vex3f _v) { _rb->setLinearVelocity(btv3(_v.x, _v.y, _v.z)); };
	void velLin(btVector3 _v) { _rb->setLinearVelocity(_v); };
	void velLin(float _v1, float _v2, float _v3) { _rb->setLinearVelocity(btv3(_v1, _v2, _v3)); };
	vex3f velAng() { return vex3f(_rb->getAngularVelocity().x(), _rb->getAngularVelocity().y(), _rb->getAngularVelocity().z()); };
	void velAng(vex3f _v) { _rb->setAngularVelocity(btv3(_v.x, _v.y, _v.z)); };
	void velAng(btVector3 _v) { _rb->setAngularVelocity(_v); };
	void velAng(float _v1, float _v2, float _v3) { _rb->setAngularVelocity(btv3(_v1, _v2, _v3)); };
	vex3f gravity() { return vex3f(_rb->getGravity().x(), _rb->getGravity().y(), _rb->getGravity().z()); };
	void gravity(vex3f _v) { _rb->setGravity(btv3(_v.x, _v.y, _v.z)); };
	void gravity(btVector3 _v) { _rb->setGravity(_v); };
	void gravity(float _v1, float _v2, float _v3) { _rb->setGravity(btv3(_v1, _v2, _v3)); };
	vex3f facLin() { return vex3f(_rb->getLinearFactor().x(), _rb->getLinearFactor().y(), _rb->getLinearFactor().z()); };
	void facLin(vex3f _v) { _rb->setLinearFactor(btv3(_v.x, _v.y, _v.z)); };
	void facLin(btVector3 _v) { _rb->setLinearFactor(_v); };
	void facLin(float _v1, float _v2, float _v3) { _rb->setLinearFactor(btv3(_v1, _v2, _v3)); };
	vex3f facAng() { return vex3f(_rb->getAngularFactor().x(), _rb->getAngularFactor().y(), _rb->getAngularFactor().z()); };
	void facAng(vex3f _v) { _rb->setAngularFactor(btv3(_v.x, _v.y, _v.z)); };
	void facAng(btVector3 _v) { _rb->setAngularFactor(_v); };
	void facAng(float _v1, float _v2, float _v3) { _rb->setAngularFactor(btv3(_v1, _v2, _v3)); };
	void draw() {
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
	};
	void draw(XsVertices _v) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, GLenum _g) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, XS_VERTEX, _g);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _g) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, _x, _g);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertex(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsEnum _x) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertex(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, GLenum _g) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, XS_VERTEX);
		glEnd();
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsEnum _x, GLenum _g) {
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, _x);
		glEnd();
		glPopMatrix();
	};
	void draw(XsVertices _v, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, GLenum _g, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, XS_VERTEX, _g);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _g, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, _x, _g);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertex(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsEnum _x, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertex(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, GLenum _g, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, XS_VERTEX);
		glEnd();
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsEnum _x, GLenum _g, XsTextureSTB _t) {
		_t.bind();
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, _x);
		glEnd();
		glPopMatrix();
	};
	void draw(XsVertices _v, GLenum _g, XsTexture _t) {
		glBindTexture(GL_TEXTURE_2D, _t);;
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, XS_VERTEX, _g);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _g, XsTexture _t) {
		glBindTexture(GL_TEXTURE_2D, _t);;
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		XsPrintVertices(_v, _x, _g);
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, GLenum _g, XsTexture _t) {
		glBindTexture(GL_TEXTURE_2D, _t);;
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, XS_VERTEX);
		glEnd();
		glPopMatrix();
	};
	void draw(XsVertexDepo _v, XsEnum _x, GLenum _g, XsTexture _t) {
		glBindTexture(GL_TEXTURE_2D, _t);;
		glPushMatrix();
		_rb->getMotionState()->getWorldTransform(_tr);
		_tr.getOpenGLMatrix(_mt);
		glMultMatrixd(_mt);
		glBegin(_g);
		XsPrintVertex(_v, _x);
		glEnd();
		glPopMatrix();
	};
};*/