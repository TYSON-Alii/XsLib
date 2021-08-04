physx::PxTriangleMeshGeometry XsPxTriangleMesh(XsVertices _v, XsEnum _x, physx::PxCooking& _c, physx::PxPhysics& _p) {
	const volatile short int _q = 3;
	switch (_x) {
	case XS_VERTEX:
		break;
	case XS_VERTEX_AND_NORMAL:
		XsChangeConstVar<short int>(_q, 6);
		break;
	case XS_VERTEX_AND_TEXTURE:
		XsChangeConstVar<short int>(_q, 5);
		break;
	case XS_ALL:
		XsChangeConstVar<short int>(_q, 8);
		break;
	};
	physx::PxTriangleMeshDesc _temp_desc;
	_temp_desc.points.count = _v.size() / _q;
	_temp_desc.points.stride = _q * sizeof(GLfloat);
	_temp_desc.points.data = _v.data();

	physx::PxDefaultMemoryOutputStream _wb;
	_c.cookTriangleMesh(_temp_desc, _wb);
	physx::PxDefaultMemoryInputData _rb(_wb.getData(), _wb.getSize());
	return _p.createTriangleMesh(_rb);
};
class XsDynamicRigid {
private:
	physx::PxPhysics* _gp;
	physx::PxShape* _sh;
	physx::PxRigidDynamic* _bd;
	physx::PxMaterial* _mt;
public:
	vex4f color;
	XsDynamicRigid(physx::PxPhysics& _g) { _gp = &_g; };
	physx::PxPhysics* getPhysicsData() { return _gp; };
	physx::PxShape* getShapeData() { return _sh; };
	physx::PxRigidDynamic* getRigidData() { return _bd; };
	physx::PxMaterial* getMaterialData() { return _mt; };
	void setMaterial(physx::PxMaterial* _m) { _mt = _m; };
	void setMaterial(vex3f _m) { _mt = _gp->createMaterial(physx::PxReal(_m.x), physx::PxReal(_m.y), physx::PxReal(_m.z)); };
	void setMaterial(float _m1, float _m2, float _m3) { _mt = _gp->createMaterial(physx::PxReal(_m1), physx::PxReal(_m2), physx::PxReal(_m3));  };
	void create(physx::PxScene& _s, physx::PxBoxGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxBoxGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxCapsuleGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxCapsuleGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxPlaneGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxPlaneGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxSphereGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxSphereGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxTriangleMeshGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxTriangleMeshGeometry _ge) {
		_bd = _gp->createRigidDynamic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	vex3f pos() { return vex3f(_bd->getGlobalPose().p.x, _bd->getGlobalPose().p.y, _bd->getGlobalPose().p.z); };
	void pos(vex3f _v) { _bd->setGlobalPose(physx::PxTransform(_v.x, _v.y, _v.z)); };
	void pos(float _v1, float _v2, float _v3) { _bd->setGlobalPose(physx::PxTransform(_v1, _v2, _v3)); };
	vex4f rot() { return vex4f(_bd->getGlobalPose().q.x, _bd->getGlobalPose().q.y, _bd->getGlobalPose().q.z, _bd->getGlobalPose().q.w); };
	vex3f velLinear() { return vex3f(_bd->getLinearVelocity().x, _bd->getLinearVelocity().y, _bd->getLinearVelocity().z); };
	void velLinear(vex3f _v) { _bd->setLinearVelocity(physx::PxVec3(_v.x, _v.y, _v.z)); };
	void velLinear(float _v1, float _v2, float _v3) { _bd->setLinearVelocity(physx::PxVec3(_v1, _v2, _v3)); };
	vex3f velAngular() { return vex3f(_bd->getAngularVelocity().x, _bd->getAngularVelocity().y, _bd->getAngularVelocity().z); };
	void velAngular(vex3f _v) { _bd->setAngularVelocity(physx::PxVec3(_v.x, _v.y, _v.z)); };
	void velAngular(float _v1, float _v2, float _v3) { _bd->setAngularVelocity(physx::PxVec3(_v1, _v2, _v3)); };
	void sleep() { _bd->putToSleep(); };
	void wakeUp() { _bd->wakeUp(); };
	void setFlag(physx::PxActorFlag::Enum _v) { _bd->setActorFlag(_v, true); };
	void setFlag(physx::PxActorFlag::Enum _v, bool _b) { _bd->setActorFlag(_v, _b); };
	void setFlag(physx::PxRigidBodyFlag::Enum _v) { _bd->setRigidBodyFlag(_v, true); };
	void setFlag(physx::PxRigidBodyFlag::Enum _v, bool _b) { _bd->setRigidBodyFlag(_v, _b); };
	void lockAxis(physx::PxRigidDynamicLockFlag::Enum _axis, bool on_or_off) { _bd->setRigidDynamicLockFlag(_axis, on_or_off); };
	void draw(XsVertices _v, XsEnum _x) {
		glColor4f(color);
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _gl) {
		glColor4f(color);
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x, _gl);
		glPopMatrix();
	};
	void draw(XsVertices _v) {
		glColor4f(color);
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertices _v, GLenum _gl) {
		glColor4f(color);
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, XS_VERTEX, _gl);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, XsTextureSTB _t) {
		glColor4f(color);
		_t.bind();
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _gl, XsTextureSTB _t) {
		glColor4f(color);
		_t.bind();
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x, _gl);
		glPopMatrix();
	};
};

class XsStaticRigid {
private:
	physx::PxPhysics* _gp;
	physx::PxShape* _sh;
	physx::PxRigidStatic* _bd;
	physx::PxMaterial* _mt;
public:
	XsStaticRigid() {};
	XsStaticRigid(physx::PxPhysics& _g) { _gp = &_g; };
	physx::PxPhysics* getPhysicsData() { return _gp; };
	void setPhysics(physx::PxPhysics& _g) { _gp = &_g; };
	physx::PxShape* getShapeData() { return _sh; };
	physx::PxRigidStatic* getRigidData() { return _bd; };
	physx::PxMaterial* getMaterialData() { return _mt; };
	void setMaterial(physx::PxMaterial* _m) { _mt = _m; };
	void setMaterial(vex3f _m) { _mt = _gp->createMaterial(physx::PxReal(_m.x), physx::PxReal(_m.y), physx::PxReal(_m.z)); };
	void setMaterial(float _m1, float _m2, float _m3) { _mt = _gp->createMaterial(physx::PxReal(_m1), physx::PxReal(_m2), physx::PxReal(_m3)); };
	void create(physx::PxScene& _s, physx::PxBoxGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxBoxGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxCapsuleGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxCapsuleGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxPlaneGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxPlaneGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxSphereGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxSphereGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, physx::PxTriangleMeshGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(0, 0, 0));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	void create(physx::PxScene& _s, vex3f pos, physx::PxTriangleMeshGeometry _ge) {
		_bd = _gp->createRigidStatic(physx::PxTransform(pos.x, pos.y, pos.z));
		_sh = _gp->createShape(_ge, *_mt);
		_bd->attachShape(*_sh);
		_s.addActor(*_bd);
		_gp = nullptr;
		delete _gp;
	};
	vex3f pos() { return vex3f(_bd->getGlobalPose().p.x, _bd->getGlobalPose().p.y, _bd->getGlobalPose().p.z); };
	void pos(vex3f _v) { _bd->setGlobalPose(physx::PxTransform(_v.x, _v.y, _v.z)); };
	void pos(float _v1, float _v2, float _v3) { _bd->setGlobalPose(physx::PxTransform(_v1, _v2, _v3)); };
	vex4f rot() { return vex4f(_bd->getGlobalPose().q.x, _bd->getGlobalPose().q.y, _bd->getGlobalPose().q.z, _bd->getGlobalPose().q.w); };
	vex4f color;
	void draw(XsVertices _v, XsEnum _x) {
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _gl) {
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x, _gl);
		glPopMatrix();
	};
	void draw(XsVertices _v) {
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, XS_VERTEX);
		glPopMatrix();
	};
	void draw(XsVertices _v, GLenum _gl) {
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, XS_VERTEX, _gl);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, XsTextureSTB _t) {
		_t.bind();
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x);
		glPopMatrix();
	};
	void draw(XsVertices _v, XsEnum _x, GLenum _gl, XsTextureSTB _t) {
		_t.bind();
		const physx::PxMat44 __pm(physx::PxShapeExt::getGlobalPose(*_sh, *_bd));
		glColor4f(color);
		glPushMatrix();
		glMultMatrixf(&__pm.column0.x);
		XsPrintVertices(_v, _x, _gl);
		glPopMatrix();
	};
};