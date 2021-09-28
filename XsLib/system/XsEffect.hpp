struct XsEffect {
	class Shake {
	private:
		vex3f _npos = 0;
		vex3b _an = vex3b(randomb(), randomb(), randomb()); // true +, false -
		vex3f _spd = 0;
		vex3f _ar = 1;
	public:
		vex3f& pos() { return _npos; };
		vex3f speed = 0.01;
		vex3f area = 1;
		vex3f random = 0.1;
		void step() {
			if (_npos.x < -_ar.x) {
				_an.x = true;
				_npos.x = -_ar.x + 0.000001f;
				_ar.x = area.x + (randomf(0, random.x * 100000) / 100000);
			}
			else if (_npos.x > _ar.x) {
				_an.x = false;
				_npos.x = _ar.x - 0.000001f;
				_ar.x = area.x + (randomf(0, random.x * 100000) / 100000);
			}
			if (_npos.y < -_ar.y) {
				_an.y = true;
				_npos.y = -_ar.y + 0.000001f;
				_ar.y = area.y + (randomf(0, random.y * 100000) / 100000);
			}
			else if (_npos.y > _ar.y) {
				_an.y = false;
				_npos.y = _ar.y - 0.000001f;
				_ar.y = area.y + (randomf(0, random.y * 100000) / 100000);
			}
			if (_npos.z < -_ar.z) {
				_an.z = true;
				_npos.z = -_ar.z + 0.000001f;
				_ar.z = area.z + (randomf(0, random.z * 100000) / 100000);
			}
			else if (_npos.z > _ar.z) {
				_an.z = false;
				_npos.z = _ar.z - 0.000001f;
				_ar.z = area.z + (randomf(0, random.z * 100000) / 100000);
			}
			_spd *= 0.98f;
			_an.x ? _spd.x += speed.x : _spd.x -= speed.x;
			_an.y ? _spd.y += speed.y : _spd.y -= speed.y;
			_an.z ? _spd.z += speed.z : _spd.z -= speed.z;
			_npos += _spd;
		};
		void use(vex3f& v) { v += _npos; };
#ifdef XS_USE_GLM
		void use(XsCamera& v) { v.pos += _npos * vex3f(v.rot.z, v.rot.y * 0.1, v.rot.x); };
#endif
	};
	class Shake2d {
	private:
		vex2f _npos = 0;
		vex2b _an = vex2b(randomb(), randomb()); // true +, false -
		vex2f _spd = 0;
		vex2f _ar = 1;
	public:
		vex2f& pos() { return _npos; };
		vex2f area = 1;
		vex2f speed = 0.01;
		vex2f random = 0.1;
		void step() {
			if (_npos.x < -_ar.x) {
				_an.x = true;
				_npos.x = -_ar.x + 0.000001f;
				_ar.x = area.x + (randomf(0, random.x * 100000) / 100000);
			}
			else if (_npos.x > _ar.x) {
				_an.x = false;
				_npos.x = _ar.x - 0.000001f;
				_ar.x = area.x + (randomf(0, random.x * 100000) / 100000);
			}
			if (_npos.y < -_ar.y) {
				_an.y = true;
				_npos.y = -_ar.y + 0.000001f;
				_ar.y = area.y + (randomf(0, random.y * 100000) / 100000);
			}
			else if (_npos.y > _ar.y) {
				_an.y = false;
				_npos.y = _ar.y - 0.000001f;
				_ar.y = area.y + (randomf(0, random.y * 100000) / 100000);
			}
			_spd *= 0.98f;
			_an.x ? _spd.x += speed.x : _spd.x -= speed.x;
			_an.y ? _spd.y += speed.y : _spd.y -= speed.y;
			_npos += _spd;
		}
		void use(vex2f& v) { v += _npos; };
	};
};