class XsParticul {
private:
	std::deque<vex3f> __pos;
	XsChrono __tempTime, __create;
	std::deque<XsChrono> __time;
public:
	int getActiveMeshNumber() { return __pos.size(); };
	float lifeTime;
	float reCreate;
	XsVertexDepo vertices;
	vex3f color;
	vex3f pos;
	int density;
	vex3f random;
	void create() {
		if (__create.getMilliSeconds() > reCreate) {
			__create.restart();
			__tempTime.restart();
			for (int __i = 0; __i < density; __i++) {
				__time.push_back(__tempTime);
				__pos.push_back(pos + (rand3f(random.x, random.y) / random.z));
			}
		};
	};
	void draw(GLenum mode) {
		glLoadIdentity();
		for (int _i = 0; _i < __pos.size(); _i++) {
			glColor3f(color.x, color.y, color.z);
			glBegin(mode);
			XsPrintVertex(vertices, XS_VERTEX_AND_NORMAL, __pos[_i]);
			glEnd();
			if (__time[_i].getMilliSeconds() > lifeTime) {
				__time.pop_front();
				__pos.pop_front();
			}
		}
	}
};
class XsParticulX {
private:
	std::deque<vex3f> __pos;
	XsChrono __tempTime, __create;
	std::deque<XsChrono> __time;
	std::deque<vex3f> __vel;
	std::deque<vex4f> __color;
public:
	int getActiveMeshNumber() { return __pos.size(); };
	std::deque<XsChrono> getTimeData() { return __time; };
	std::deque<vex3f> getPosData() { return __pos; };
	std::deque<vex3f> getColorData() { return __pos; };
	std::deque<vex3f> getVelocityData() { return __pos; };
	void setPosData(size_t _p, vex3f _v) { __pos[_p] = _v; };
	void setColorData(size_t _p, vex4f _v) { __color[_p] = _v; };
	void setVelocityData(size_t _p, vex3f _v) { __vel[_p] = _v; };
	vex3f velocity;
	float lifeTime;
	float reCreate;
	vex4f color;
	vex3f pos;
	int density;
	vex3f posRandom;
	vex3f colorRandom;
	void create() {
		if (__create.getMilliSeconds() > reCreate) {
			__create.restart();
			for (int __i = 0; __i < density; __i++) {
				__tempTime.restart();
				__time.push_back(__tempTime);
				__pos.push_back(pos + (rand3f(posRandom.x, posRandom.y) / posRandom.z));
				__vel.push_back(velocity);
				__color.push_back(color + (rand3f(colorRandom.x, colorRandom.y) / colorRandom.z));
			};
		}
	};
	void draw(XsVertexDepo vertices, GLenum mode) {
		glLoadIdentity();
		for (int _i = 0; _i < __pos.size(); _i++) {
			__vel[_i] *= vex3f(1.01f);
			__pos[_i] += __vel[_i];
			glColor3f(__color[_i]);
			glBegin(mode);
			XsPrintVertex(vertices, XS_VERTEX_AND_NORMAL, vex3f(1), __pos[_i]);
			glEnd();
			if (__time[_i].getMilliSeconds() > lifeTime) {
				__time.pop_front();
				__pos.pop_front();
				__vel.pop_front();
				__color.pop_front();
			}
		}
	};
	void draw(XsVertices vertices, XsEnum mode, GLenum glmode) {
		if (__create.getMilliSeconds() > reCreate) {
			glLoadIdentity();
			for (int _i = 0; _i < __pos.size(); _i++) {
				__vel[_i] *= vex3f(1.01f);
				__pos[_i] += __vel[_i];
				glColor3f(__color[_i]);
				glLoadIdentity();
				glTranslatef(pos.x, pos.y, pos.z);
				XsPrintVertices(vertices, mode, glmode);
				if (__time[_i].getMilliSeconds() > lifeTime) {
					__time.pop_front();
					__pos.pop_front();
					__vel.pop_front();
					__color.pop_front();
				}
			}
		};
	};
	void draw(XsSolidType solid, XsEnum mode) {
		glLoadIdentity();
		for (int _i = 0; _i < __pos.size(); _i++) {
			__vel[_i] *= vex3f(1.01f);
			__pos[_i] += __vel[_i];
			glColor3f(__color[_i]);
			glLoadIdentity();
			glTranslatef(pos.x, pos.y, pos.z);
			XsSolid(solid, mode);
			if (__time[_i].getMilliSeconds() > lifeTime) {
				__time.pop_front();
				__pos.pop_front();
				__vel.pop_front();
				__color.pop_front();
			}
		}
	};
	void draw(XsSolidType solid, XsEnum mode, vex3f scale) {
		glLoadIdentity();
		for (int _i = 0; _i < __pos.size(); _i++) {
			__vel[_i] *= vex3f(1.01f);
			__pos[_i] += __vel[_i];
			glColor3f(__color[_i]);
			glLoadIdentity();
			glTranslatef(__pos[_i].x, __pos[_i].y, __pos[_i].z);
			glScalef(scale.x, scale.y, scale.z);
			XsSolid(solid, mode);
			if (__time[_i].getMilliSeconds() > lifeTime) {
				__time.pop_front();
				__pos.pop_front();
				__vel.pop_front();
				__color.pop_front();
			}
		}
	};
};