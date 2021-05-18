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
        XsLogError(XS_LOG_RED, XS_LOG_WHITE, "failed to load image !!");
        return false;
    };
    glBindTexture(GL_TEXTURE_2D, 0);
    stbi_image_free(____data);
};