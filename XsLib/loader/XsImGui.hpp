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
};

void XsInfo(XsShape& v, const char* name) {
    ImGui::Begin(name);
    ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
    ImGui::DragFloat3("rotation", v.rot, 0.1f, -FLT_MAX, FLT_MAX);
    ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
    ImGui::ColorPicker4("color", v.color);
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
void XsInfo(XsCollission& v, const char* name) {
    ImGui::Begin(name);
    ImGui::DragFloat3("position", v.pos, 0.01f, -FLT_MAX, FLT_MAX);
    ImGui::DragFloat3("scale", v.scale, 0.01f, -FLT_MAX, FLT_MAX);
    ImGui::End();
}