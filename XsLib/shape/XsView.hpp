class XsView {
public:
    vex2f scale;
    vex2f pos;
    XsCamera camera;
    void draw(sf::RenderWindow& window) {
		glPushMatrix();
		XsDefaultCamera(camera);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
		glBlitFramebuffer(0, 0, camera.viewport.x, camera.viewport.y, pos.x, pos.y, pos.x + scale.x, pos.y + scale.y, GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT, GL_NEAREST);
        glPopMatrix();
    }
};