class XsCamera {
public:
	vex3f pos = vex3f(0, 0, 0);
	vex3f rot = vex3f(0, 0, 0);
	float fov = 45.0f;
	float near_ = 0.001f, far_ = 1000.0f;
	vex2f viewport;
	glm::mat4 projectionMatrix() { return glm::perspective(fov, (float)viewport.x / (float)viewport.y, near_, far_); };
	glm::mat4 GetViewMatrix;
};
void XsDefaultCamera(XsCamera& camera_data) {
	glScissor(0.0f, 0.0f, camera_data.viewport.x, camera_data.viewport.y);
	glViewport(0.0f, 0.0f, (GLsizei)camera_data.viewport.x, (GLsizei)camera_data.viewport.y);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glm::mat4 xs_projectionMatrix_ = glm::perspective(camera_data.fov, (float)camera_data.viewport.x / (float)camera_data.viewport.y, camera_data.near_, camera_data.far_);
	glm::mat4 xs_transleted_ = glm::translate(glm::mat4(1.f), glm::vec3(camera_data.pos.x, camera_data.pos.y + 1, camera_data.pos.z));
	glm::vec3 position = glm::normalize(glm::vec3(0, 1, 0));
	glm::vec3 temp_m_rot = glm::vec3(0, 0, 0);
	temp_m_rot.x = camera_data.rot.x;
	temp_m_rot.y = camera_data.rot.y;
	temp_m_rot.z = camera_data.rot.z;
	glm::vec3 rott = glm::normalize(temp_m_rot);
	glm::vec3 right = glm::normalize(glm::cross(rott, position));
	glm::vec3 up = glm::normalize(glm::cross(right, rott));
	camera_data.GetViewMatrix = glm::lookAt(position, position + rott, up);
	glm::mat4 xs_fullTransform_ = xs_projectionMatrix_ * camera_data.GetViewMatrix * xs_transleted_;
	glLoadMatrixf(&xs_fullTransform_[0][0]);
	glMatrixMode(GL_MODELVIEW);
};
void XsFPSCamera(XsCamera& camera_data, vex2i _mode_pos, float sensivity) {
	float xs_m_yaw = _mode_pos.x * sensivity;
	float xs_m_pitch = _mode_pos.y * sensivity;
	if (xs_m_pitch > 89.9)
		xs_m_pitch = 89.9;
	else if (xs_m_pitch < -89.9)
		xs_m_pitch = -89.9;
	glViewport(0.0f, 0.0f, (GLsizei)camera_data.viewport.x, (GLsizei)camera_data.viewport.y);
	glScissor(0.0f, 0.0f, camera_data.viewport.x, camera_data.viewport.y);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glm::mat4 xs_projectionMatrix_ = glm::perspective(camera_data.fov, (float)camera_data.viewport.x / (float)camera_data.viewport.y, camera_data.near_, camera_data.far_);
	glm::mat4 xs_transleted_ = glm::translate(glm::mat4(1.f), glm::vec3(camera_data.pos.x, camera_data.pos.y + 1, camera_data.pos.z));
	glm::vec3 position = glm::normalize(glm::vec3(0, 1, 0));
	glm::vec3 temp_m_rot = glm::vec3(0, 0, 0);
	temp_m_rot.x = cos(glm::radians(xs_m_yaw)) * cos(glm::radians(xs_m_pitch));
	temp_m_rot.y = -sin(glm::radians(xs_m_pitch));
	temp_m_rot.z = sin(glm::radians(xs_m_yaw)) * cos(glm::radians(xs_m_pitch));
	glm::vec3 rott = glm::normalize(temp_m_rot);
	glm::vec3 right = glm::normalize(glm::cross(rott, position));
	glm::vec3 up = glm::normalize(glm::cross(right, rott));
	camera_data.GetViewMatrix = glm::lookAt(position, position + rott, up);
	glm::mat4 xs_fullTransform_ = xs_projectionMatrix_ * camera_data.GetViewMatrix * xs_transleted_;
	camera_data.rot.x = temp_m_rot.x;
	camera_data.rot.y = temp_m_rot.y;
	camera_data.rot.z = temp_m_rot.z;
	glLoadMatrixf(&xs_fullTransform_[0][0]);
	glMatrixMode(GL_MODELVIEW);
};
/*
void XsTPSCamera(XsCamera& camera_data, vex3f _focus) {
	glScissor(0.0f, 0.0f, camera_data.viewport.x, camera_data.viewport.y);
	glViewport(0.0f, 0.0f, (GLsizei)camera_data.viewport.x, (GLsizei)camera_data.viewport.y);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glm::mat4 xs_projectionMatrix_ = glm::perspective(camera_data.fov, (float)camera_data.viewport.x / (float)camera_data.viewport.y, camera_data.near_, camera_data.far_);
	glm::mat4 xs_transleted_ = glm::translate(glm::mat4(1.f), glm::vec3(camera_data.pos.x, camera_data.pos.y + 1, camera_data.pos.z));
	glm::vec3 fokus = glm::vec3(_focus.x, _focus.y, _focus.z);
	camera_data.GetViewMatrix = glm::lookAt(glm::vec3(-camera_data.pos.x, -camera_data.pos.y + 1, -camera_data.pos.z), fokus, glm::vec3(0, 1, 0));
	glm::mat4 xs_fullTransform_ = xs_projectionMatrix_ * camera_data.GetViewMatrix * xs_transleted_;
	glLoadMatrixf(&xs_fullTransform_[0][0]);
	glMatrixMode(GL_MODELVIEW);
};
*/
class XsCameraAnim {
	XsChrono __clk;
	std::vector<XsCamera> camFrames;
	size_t current_step = 0;
public:
	void copy(std::vector<XsCamera>& cams) {
		cams.resize(frameCount());
		for (int _i = 0; _i < frameCount(); _i++) {
			cams[_i] = camFrames[_i];
		};
	};
	void addFrame(XsCamera& _bam);
	void addFrame(XsCamera& _bam, size_t _gum);
	void deleteFrame(size_t _gum);
	size_t frameCount() { return camFrames.size(); };
	float deltaTime;
	XsCamera currentStep() { return camFrames[current_step]; };
	void use();
	bool froze = false;
};

void XsCameraAnim::addFrame(XsCamera& _bam) { camFrames.push_back(_bam); };
void XsCameraAnim::addFrame(XsCamera& _bam, size_t gum) { camFrames.insert(camFrames.begin() + gum, _bam); };
void XsCameraAnim::deleteFrame(size_t _gum) { camFrames.erase(camFrames.begin() + _gum); };
void XsCameraAnim::use() {
	__clk.froze = froze;
	if (__clk.getMilliSeconds() > deltaTime) {
		current_step++;
		if (current_step >= camFrames.size())
			current_step = 0;
		__clk.start();
	}
	glLoadIdentity();
	XsDefaultCamera(camFrames[current_step]);
};

bool XsCameraAnimLoader(XsCameraAnim& canim, const char* file_name) {
	XsCamera cam;
	std::stringstream ss;
	std::ifstream in_file(file_name);
	std::string _get = "";
	std::string trash = "";
	std::string _a = "";
	int frame_count = 0;

	if (!in_file.is_open()) {
		XsLogError(XsLogRed, XsLogWhite, std::string("file cannot open :/ -- " + std::string(file_name) + " ").c_str());
		XsLogDate(XsLogRed, XsLogWhite, 0);
		newln;
		return false;
	}
	else {
		while (in_file >> _get) {
			if (_get == "#")
				std::getline(in_file, trash);
			else if (_get == "##") {
				_get.clear();
				while (_get == "##") {
					std::getline(in_file, _get);
				};
			}
			else if (_get == "i") {
				in_file >> _get;
				frame_count = std::atoi(_get.c_str());
				in_file >> _get;
				canim.deltaTime = std::atof(_get.c_str());
				if (frame_count <= 1) {
					while (_get != "f") { in_file >> _get; };
					in_file >> _get;
					cam.pos.x = std::atof(_get.c_str());
					in_file >> _get;
					cam.pos.y = std::atof(_get.c_str());
					in_file >> _get;
					cam.pos.z = std::atof(_get.c_str());
					in_file >> _get;
					cam.rot.x = std::atof(_get.c_str());
					in_file >> _get;
					cam.rot.y = std::atof(_get.c_str());
					in_file >> _get;
					cam.rot.z = std::atof(_get.c_str());
					in_file >> _get;
					cam.fov = std::atof(_get.c_str());
					in_file >> _get;
					cam.near_ = std::atof(_get.c_str());
					in_file >> _get;
					cam.far_ = std::atof(_get.c_str());
					in_file >> _get;
					cam.viewport.x = std::atof(_get.c_str());
					in_file >> _get;
					cam.viewport.y = std::atof(_get.c_str());
					canim.addFrame(cam);
				}
				else {
					for (int __y = 0; __y < frame_count; __y++) {
						while (_get != "f") { in_file >> _get; };
						in_file >> _get;
						cam.pos.x = std::atof(_get.c_str());
						in_file >> _get;
						cam.pos.y = std::atof(_get.c_str());
						in_file >> _get;
						cam.pos.z = std::atof(_get.c_str());
						in_file >> _get;
						cam.rot.x = std::atof(_get.c_str());
						in_file >> _get;
						cam.rot.y = std::atof(_get.c_str());
						in_file >> _get;
						cam.rot.z = std::atof(_get.c_str());
						in_file >> _get;
						cam.fov = std::atof(_get.c_str());
						in_file >> _get;
						cam.near_ = std::atof(_get.c_str());
						in_file >> _get;
						cam.far_ = std::atof(_get.c_str());
						in_file >> _get;
						cam.viewport.x = std::atof(_get.c_str());
						in_file >> _get;
						cam.viewport.y = std::atof(_get.c_str());
						canim.addFrame(cam);
					};
				}
			}
		}
	}
	return true;
};

void XsWriteCameraAnim(XsCameraAnim& canim, const char* file_name) {
	std::vector<XsCamera> _t;
	canim.copy(_t);
	std::ofstream dosyay(file_name);
	dosyay << "i " << canim.frameCount() << " " << canim.deltaTime << "\n";
	for (int i = 0; i < canim.frameCount(); i++) {
		dosyay << "f " << _t[i].pos.x << " " << _t[i].pos.y << " " << _t[i].pos.z << " " << _t[i].rot.x << " " << _t[i].rot.y << " " << _t[i].rot.z << " " << _t[i].fov << " " << _t[i].near_ << " " << _t[i].far_ << " " << _t[i].viewport.x << " " << _t[i].viewport.y << "\n";
	};
}