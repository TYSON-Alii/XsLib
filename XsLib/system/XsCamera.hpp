#ifdef XS_USE_GLM
struct XsCamera {
	float scale = 1;
	vex3f m_pos = vex3f(0, 0, 0);
	vex3f m_rot = vex3f(0, 0, 0);
	float m_fov = 45.0f;
	float m_near = 0.001f, m_far = 1000.0f;
	vex2f m_viewport;
	vex2f m_mouse_pos;
	float m_sensivity;
};
void XsDefaultCamera(XsCamera& camera_data) {
	glScissor(0.0f, 0.0f, camera_data.m_viewport.x, camera_data.m_viewport.y);
	glViewport(0.0f, 0.0f, (GLsizei)camera_data.m_viewport.x, (GLsizei)camera_data.m_viewport.y);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glm::mat4 xs_projectionMatrix_ = glm::perspective(camera_data.m_fov, (float)camera_data.m_viewport.x / (float)camera_data.m_viewport.y, camera_data.m_near, camera_data.m_far);
	glm::mat4 xs_transleted_ = glm::translate(glm::mat4(camera_data.scale), glm::vec3(camera_data.m_pos.x, camera_data.m_pos.y, camera_data.m_pos.z));
	vex4f temp_rot = XsQuaternion(camera_data.m_rot);
	glm::mat4 xs_rotation_ = glm::rotate(glm::mat4(camera_data.scale), temp_rot.w, glm::vec3(temp_rot.x, temp_rot.y, temp_rot.z));
	glm::mat4 xs_fullTransform_ = xs_projectionMatrix_ * xs_rotation_ * xs_transleted_;
	glLoadMatrixf(&xs_fullTransform_[0][0]);
	glMatrixMode(GL_MODELVIEW);
}
void XsFPSCamera(XsCamera& camera_data) {
	float xs_m_yaw = camera_data.m_mouse_pos.x * camera_data.m_sensivity;
	float xs_m_pitch = camera_data.m_mouse_pos.y * camera_data.m_sensivity;
	if (xs_m_pitch > 89.9)
		xs_m_pitch = 89.9;
	else if (xs_m_pitch < -89.9)
		xs_m_pitch = -89.9;
	glViewport(0.0f, 0.0f, (GLsizei)camera_data.m_viewport.x, (GLsizei)camera_data.m_viewport.y);
	glScissor(0.0f, 0.0f, camera_data.m_viewport.x, camera_data.m_viewport.y);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glm::mat4 xs_projectionMatrix_ = glm::perspective(camera_data.m_fov, (float)camera_data.m_viewport.x / (float)camera_data.m_viewport.y,camera_data.m_near, camera_data.m_far);
	glm::mat4 xs_transleted_ = glm::translate(glm::mat4(camera_data.scale), glm::vec3(camera_data.m_pos.x, camera_data.m_pos.y + 1, camera_data.m_pos.z));
	glm::vec3 temp_m_rot = glm::vec3(0, 0, 0);
	glm::vec3 position = glm::normalize(glm::vec3(0, 1, 0));
	temp_m_rot.x = cos(glm::radians(xs_m_yaw)) * cos(glm::radians(xs_m_pitch));
	temp_m_rot.y = -sin(glm::radians(xs_m_pitch));
	temp_m_rot.z = sin(glm::radians(xs_m_yaw)) * cos(glm::radians(xs_m_pitch));
	glm::vec3 rott = glm::normalize(temp_m_rot);
	glm::vec3 right = glm::normalize(glm::cross(rott, position));
	glm::vec3 up = glm::normalize(glm::cross(right, rott));
	glm::mat4 xs_rotation_ = glm::lookAt(position, position + rott, up);
	glm::mat4 xs_fullTransform_ = xs_projectionMatrix_ * xs_rotation_ * xs_transleted_;
	camera_data.m_rot.x = temp_m_rot.x;
	camera_data.m_rot.y = temp_m_rot.y;
	camera_data.m_rot.z = temp_m_rot.z;
	glLoadMatrixf(&xs_fullTransform_[0][0]);
	glMatrixMode(GL_MODELVIEW);
}
#endif XS_USE_GLM