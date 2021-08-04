bool XsStbImageLoad(const char* __file_name, unsigned int& __texture__, GLenum __wrapping, GLenum __filter, GLenum __format) {
    glGenTextures(1, &__texture__);
    glBindTexture(GL_TEXTURE_2D, __texture__);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, __wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, __wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, __filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, __filter);
    int __widthh, __heightt, __nrChannels;
    unsigned char* ____data = stbi_load(__file_name, &__widthh, &__heightt, &__nrChannels, 0);
    if (____data) {
        glTexImage2D(GL_TEXTURE_2D, 0, __format, __widthh, __heightt, 0, __format, GL_UNSIGNED_BYTE, ____data);
        glGenerateMipmap(GL_TEXTURE_2D);
        return true;
    }
    else {
        XsLogError(XsLogRed, XsLogWhite, "failed to load image !!\n");
        return false;
    };
    glBindTexture(GL_TEXTURE_2D, 0);
    stbi_image_free(____data);
};
class XsTextureSTB {
private:
    vex2i _scale;
public:
    XsTextureSTB() {};
    XsTextureSTB(const char* _f) {
        wrapping = GL_CLAMP_TO_BORDER;
        filter = GL_NEAREST;
        format = GL_RGB;
        load(_f);
    };
    XsTextureSTB(const char* _f, GLenum __format) {
        wrapping = GL_CLAMP_TO_BORDER;
        filter = GL_NEAREST;
        format = __format;
        load(_f);
    };
    XsTextureSTB(const char* _f, GLenum __format, GLenum _filter, GLenum _wr) {
        wrapping = _wr;
        filter = _filter;
        format = __format;
        load(_f);
    };
    XsTexture texture = 0;
    GLenum wrapping;
    GLenum filter;
    GLenum format;
    vex2i scale() { return _scale; };
    std::string fileName;
    void reversImage();
    void load(const char* __file_name);
    void load();
    void bind();
};
void XsTextureSTB::load(const char* __file_name) {
    fileName = __file_name;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    int __widthh, __heightt, __nrChannels;
    unsigned char* ____data = stbi_load(__file_name, &__widthh, &__heightt, &__nrChannels, 0);
    if (____data) {
        _scale = vex2i(__widthh, __heightt);
        glTexImage2D(GL_TEXTURE_2D, 0, format, __widthh, __heightt, 0, format, GL_UNSIGNED_BYTE, ____data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
        XsLogError(XsLogRed, XsLogWhite, "failed to load image !!");
    glBindTexture(GL_TEXTURE_2D, 0);
    stbi_image_free(____data);
};
void XsTextureSTB::load() {
    const char*  __file_name = fileName.c_str();
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    int __widthh, __heightt, __nrChannels;
    unsigned char* ____data = stbi_load(__file_name, &__widthh, &__heightt, &__nrChannels, 0);
    if (____data) {
        _scale = vex2i(__widthh, __heightt);
        glTexImage2D(GL_TEXTURE_2D, 0, format, __widthh, __heightt, 0, format, GL_UNSIGNED_BYTE, ____data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
        XsLogError(XsLogRed, XsLogWhite, "failed to load image !!");
    glBindTexture(GL_TEXTURE_2D, 0);
    stbi_image_free(____data);
};
void XsTextureSTB::bind() {
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrapping);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
}