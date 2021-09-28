namespace ImGui {
	void DragFloat2(const char* label, vex2f& v, float v_speed, float _min, float _max) {
		float _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::DragFloat2(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void DragFloat3(const char* label, vex3f& v, float v_speed, float _min, float _max) {
		float _v[3];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		ImGui::DragFloat3(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
	};
	void DragFloat4(const char* label, vex4f& v, float v_speed, float _min, float _max) {
		float _v[4];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		_v[3] = v.w;
		ImGui::DragFloat4(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
		v.w = _v[3];
	};
	void SliderFloat2(const char* label, vex2f& v, float _min, float _max) {
		float _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::SliderFloat2(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void SliderFloat3(const char* label, vex3f& v, float _min, float _max) {
		float _v[3];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		ImGui::SliderFloat3(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
	};
	void SliderFloat4(const char* label, vex4f& v, float _min, float _max) {
		float _v[4];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		_v[3] = v.w;
		ImGui::SliderFloat4(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
		v.w = _v[3];
	};
	void DragInt2(const char* label, vex2f& v, int v_speed, int _min, int _max) {
		int _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::DragInt2(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void DragInt3(const char* label, vex3f& v, int v_speed, int _min, int _max) {
		int _v[3];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		ImGui::DragInt3(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
	};
	void DragInt4(const char* label, vex4f& v, int v_speed, int _min, int _max) {
		int _v[4];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		_v[3] = v.w;
		ImGui::DragInt4(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
		v.w = _v[3];
	};
	void SliderInt2(const char* label, vex2f& v, int _min, int _max) {
		int _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::SliderInt2(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void SliderInt3(const char* label, vex3f& v, int _min, int _max) {
		int _v[3];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		ImGui::SliderInt3(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
	};
	void SliderInt4(const char* label, vex4f& v, int _min, int _max) {
		int _v[4];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		_v[3] = v.w;
		ImGui::SliderInt4(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
		v.w = _v[3];
	};
	void ColorPicker4(const char* label, vex4f& v) {
		float _v[4];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		_v[3] = v.w;
		ImGui::ColorPicker4(label, _v);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
		v.w = _v[3];
	};
	void ColorPicker3(const char* label, vex3f& v) {
		float _v[3];
		_v[0] = v.x;
		_v[1] = v.y;
		_v[2] = v.z;
		ImGui::ColorPicker3(label, _v);
		v.x = _v[0];
		v.y = _v[1];
		v.z = _v[2];
	};

#ifdef XS_USE_SFML
	void DragFloat2(const char* label, sf::Vector2f& v, float v_speed, float _min, float _max) {
		float _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::DragFloat2(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void SliderFloat2(const char* label, sf::Vector2f& v, float _min, float _max) {
		float _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::SliderFloat2(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void DragInt2(const char* label, sf::Vector2i& v, int v_speed, int _min, int _max) {
		int _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::DragInt2(label, _v, v_speed, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
	void SliderInt2(const char* label, sf::Vector2i& v, int _min, int _max) {
		int _v[2];
		_v[0] = v.x;
		_v[1] = v.y;
		ImGui::SliderInt2(label, _v, _min, _max);
		v.x = _v[0];
		v.y = _v[1];
	};
#endif
};

void XsInfo(XsShape& v, const char* name) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::ColorPicker4("color", v.color);
	ImGui::End();
}
void XsInfo(XsShape& v, XsInfoType type = XsInfoDrag) {
	if (type == XsInfoDrag) {
		ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
		ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
		ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	}
	elif(type == XsInfoInput) {
		ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
		ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
		ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	}
	else
		std::cerr << "Wrong XsInfo Type!!\n";
	ImGui::ColorPicker4("color", v.color);
}
void XsInfo(XsShape& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::ColorPicker4("color", v.color);
	push_end();
	ImGui::End();
}

void XsInfo(XsShape2d& v, const char* name) {
	ImGui::Begin(name);
	ImGui::DragInt2("position", v.pos, 1, -INT_MAX, INT_MAX);
	ImGui::DragFloat("rotation", &v.rot, 0.1, -INT_MAX, INT_MAX);
	ImGui::DragInt2("scale", v.scale, 1, -INT_MAX, INT_MAX);
	ImGui::ColorPicker4("color", v.color);
	ImGui::End();
}
void XsInfo(XsShape2d& v) {
	ImGui::DragInt2("position", v.pos, 1, -INT_MAX, INT_MAX);
	ImGui::DragFloat("rotation", &v.rot, 0.1, -INT_MAX, INT_MAX);
	ImGui::DragInt2("scale", v.scale, 1, -INT_MAX, INT_MAX);
	ImGui::ColorPicker4("color", v.color);
}
void XsInfo(XsShape2d& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	ImGui::DragInt2("position", v.pos, 1, -INT_MAX, INT_MAX);
	ImGui::DragFloat("rotation", &v.rot, 0.1, -INT_MAX, INT_MAX);
	ImGui::DragInt2("scale", v.scale, 1, -INT_MAX, INT_MAX);
	ImGui::ColorPicker4("color", v.color);
	push_end();
	ImGui::End();
}

void XsInfo(XsCamera& v, const char* name) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("fov", &v.fov, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("near", &v.near_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("far", &v.far_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragInt2("viewport", v.viewport, 1, -INT_MAX, INT_MAX);
	ImGui::End();
}
void XsInfo(XsCamera& v) {
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("fov", &v.fov, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("near", &v.near_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("far", &v.far_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragInt2("viewport", v.viewport, 1, -INT_MAX, INT_MAX);
}
void XsInfo(XsCamera& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("fov", &v.fov, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("near", &v.near_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat("far", &v.far_, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragInt2("viewport", v.viewport, 1, -INT_MAX, INT_MAX);
	push_end();
	ImGui::End();
}

void XsInfo(XsCollission& v, const char* name) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::End();
}
void XsInfo(XsCollission& v) {
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
}
void XsInfo(XsCollission& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	push_end();
	ImGui::End();
}

void XsInfo(XsTextureSTB& v, const char* name) {
	ImGui::Begin(name);
	vex2f _t = vex2f(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y);
	_t.normalize();
	ImGui::Image((void*)v.texture, ImVec2(ImGui::GetWindowSize().x - 25, ImGui::GetWindowSize().x * _t.y - 25), ImVec2(0, 0), ImVec2(1, 1));
	ImGui::Text(std::string(str("file name: ") + v.fileName).c_str());
	ImGui::Text(std::string(str("size: x = ") + str(v.scale().x) + ", y = " + str(v.scale().y)).c_str());
	ImGui::End();
};
void XsInfo(XsTextureSTB& v) {
	vex2f _t = vex2f(v.scale().x, v.scale().y);
	_t.normalize();
	ImGui::Image((void*)v.texture, ImVec2(ImGui::GetWindowSize().x, ImGui::GetWindowSize().x * _t.y));
	ImGui::Text(std::string(str("file name: ") + v.fileName).c_str());
	ImGui::Text(std::string(str("size: x = ") + str(v.scale().x) + ", y = " + str(v.scale().y)).c_str());
};
void XsInfo(XsTextureSTB& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	vex2f _t = vex2f(v.scale().x, v.scale().y);
	_t.normalize();
	ImGui::Image((void*)v.texture, ImVec2(ImGui::GetWindowSize().x - 25, ImGui::GetWindowSize().x * _t.y - 25), ImVec2(0, 0), ImVec2(1, 1));
	ImGui::Text(std::string(str("file name: ") + v.fileName).c_str());
	ImGui::Text(std::string(str("size: x = ") + str(v.scale().x) + ", y = " + str(v.scale().y)).c_str());
	push_end();
	ImGui::End();
};
/*
void XsInfo(XsShapeX& v, const char* name) {
	ImGui::Begin(name);
	ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
	ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
	ImGui::ColorPicker4("color", v.color);
	static const char* _xs[]{ "vertex", "vertex and texture", "vertex and normal", "all" };
	static int _s_xs = 0;
	ImGui::Combo("XsMode", &_s_xs, _xs, IM_ARRAYSIZE(_xs));
	v.XsMode() = _s_xs == 0 ? XS_VERTEX : _s_xs == 1 ? XS_VERTEX_AND_TEXTURE : _s_xs == 2 ? XS_VERTEX_AND_NORMAL : XS_ALL;
	if (v.VertType() != "solid") {
		static const char* _gl[]{ "points", "lines", "triangles", "quads", "polygon" };
		static int _s_gl = 0;
		ImGui::Combo("GLmode", &_s_gl, _gl, IM_ARRAYSIZE(_gl));
		v.GLmode() = _s_gl == 0 ? GL_POINTS : _s_gl == 1 ? GL_LINES : _s_gl == 2 ? GL_TRIANGLES : _s_gl == 3 ? GL_QUADS : GL_POLYGON;
	};
	ImGui::End();
};
*/
#ifdef XS_USE_PHYSX
void XsInfo(XsDynamicRigid& v, const char* name) {
	ImGui::Begin(name);
	vex3f _tp = v.pos();
	ImGui::DragFloat3("position", _tp, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_tp);
	vex4f _tr = v.rot();
	ImGui::DragFloat4("rotation", _tr, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_tr);
	vex3f _tl = v.velLinear();
	ImGui::DragFloat3("linear velocity", _tl, 0.01f, -FLT_MAX, FLT_MAX);
	v.velLinear(_tl);
	vex3f _ta = v.velAngular();
	ImGui::DragFloat3("angular velocity", _ta, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_ta);
	bool _s = v.getRigidData()->isSleeping();
	const char* _yaz = _s == true ? "wake up" : "put sleep";
	ImGui::Selectable(_yaz, _s);
	_s == false ? v.sleep() : v.wakeUp();
	ImGui::End();
};
void XsInfo(XsDynamicRigid& v, const char* name, void (*push_end)(void)) {
	ImGui::Begin(name);
	vex3f _tp = v.pos();
	ImGui::DragFloat3("position", _tp, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_tp);
	vex4f _tr = v.rot();
	ImGui::DragFloat4("rotation", _tr, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_tr);
	vex3f _tl = v.velLinear();
	ImGui::DragFloat3("linear velocity", _tl, 0.01f, -FLT_MAX, FLT_MAX);
	v.velLinear(_tl);
	vex3f _ta = v.velAngular();
	ImGui::DragFloat3("angular velocity", _ta, 0.01f, -FLT_MAX, FLT_MAX);
	v.pos(_ta);
	bool _s = v.getRigidData()->isSleeping();
	const char* _yaz = _s == true ? "wake up" : "put sleep";
	ImGui::Selectable(_yaz, _s);
	_s == false ? v.sleep() : v.wakeUp();
	push_end();
	ImGui::End();
};
#endif

class XsInfoList {
private:
	struct _t {
		const char* name = "";
		void* ptr = nullptr;
		bool shw = false;
		const char* type = "";
		void (*push)(void) = nullptr;
};
	std::vector<_t> _data;
	const char* name = "";
public:
	XsInfoList(const char* _name) { name = _name; };
	void add(XsShape& v, const char* _name) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsShape";
		_data.push_back(t);
	};
	void add(XsShape& v, const char* _name, void (*push_end)(void)) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsShape";
		t.push = push_end;
		_data.push_back(t);
	};
	void add(XsShape2d& v, const char* _name) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsShape2d";
		_data.push_back(t);
	};
	void add(XsShape2d& v, const char* _name, void (*push_end)(void)) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsShape2d";
		t.push = push_end;
		_data.push_back(t);
	};
	void add(XsCamera& v, const char* _name) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsCamera";
		_data.push_back(t);
	};
	void add(XsCamera& v, const char* _name, void (*push_end)(void)) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsCamera";
		t.push = push_end;
		_data.push_back(t);
	};
	void add(XsCollission& v, const char* _name) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsCollission";
		_data.push_back(t);
	};
	void add(XsCollission& v, const char* _name, void (*push_end)(void)) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsCollission";
		t.push = push_end;
		_data.push_back(t);
	};
#ifdef XS_USE_PHYSX
	void add(XsDynamicRigid& v, const char* _name) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsDynamicRigid";
		_data.push_back(t);
	};
	void add(XsDynamicRigid& v, const char* _name, void (*push_end)(void)) {
		_t t;
		t.name = _name;
		t.ptr = &v;
		t.type = "XsDynamicRigid";
		t.push = push_end;
		_data.push_back(t);
	};
#endif XS_USE_PHYSX
	void use() {
		ImGui::Begin(name);
		for (auto& i : _data) {
			ImGui::Checkbox(i.name, &i.shw);
			if (i.shw == true) {
				if (i.push == nullptr) {
					if (i.type == "XsShape") { XsInfo(*static_cast<XsShape*>(i.ptr), i.name); }
					elif(i.type == "XsShape2d") { XsInfo(*static_cast<XsShape2d*>(i.ptr), i.name); }
					elif(i.type == "XsCamera") { XsInfo(*static_cast<XsCamera*>(i.ptr), i.name); }
					elif(i.type == "XsCollission") { XsInfo(*static_cast<XsCollission*>(i.ptr), i.name); }
#ifdef XS_USE_PHYSX
					elif(i.type == "XsDynamicRigid") { XsInfo(*static_cast<XsDynamicRigid*>(i.ptr), i.name); }
#endif
				}
				else {
					if (i.type == "XsShape") { XsInfo(*static_cast<XsShape*>(i.ptr), i.name, i.push); }
					elif(i.type == "XsShape2d") { XsInfo(*static_cast<XsShape2d*>(i.ptr), i.name, i.push); }
					elif(i.type == "XsCamera") { XsInfo(*static_cast<XsCamera*>(i.ptr), i.name, i.push); }
					elif(i.type == "XsCollission") { XsInfo(*static_cast<XsCollission*>(i.ptr), i.name, i.push); }
#ifdef XS_USE_PHYSX
					elif(i.type == "XsDynamicRigid") { XsInfo(*static_cast<XsDynamicRigid*>(i.ptr), i.name, i.push); }
#endif
				}
			};
		};
		ImGui::End();
	};
	void del(const char* _name) {
		for (volatile size_t i = 0; i < _data.size(); i++)
			if (_data[i].name == _name)
				_data.erase(_data.begin() + i);
				};
	void show(const char* _name) {
		for (auto& i : _data)
			if (i.name == _name) {
				if (i.shw == false)
					i.shw = true;
				else
					i.shw = false;
				break;
			};
	};
	/*void slide(const char* _name, size_t pos) {
		for (auto& i : _data)
			if (i.name == _name) {
				_data.erase(std::remove(_data.begin(), _data.end(), i));
				_data.insert(_data.begin() + pos, i);
				break;
			};
	};*/
			};