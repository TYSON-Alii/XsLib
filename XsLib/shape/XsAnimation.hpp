class XsAnim2d {
private:
	int siradaki = 0;
	XsClock XS_CLOCK;
	std::vector<XsVertex2dDepo> vertexDepo;
	std::vector<XsTexture> texDepo;
public:
	XsVertex2dDepo currentStep;
	XsTexture currentTexture;
	float delta_time = 1;
	void addFrame(XsVertex2dDepo m_vertecg, XsTexture ___a) {
		vertexDepo.push_back(m_vertecg);
		texDepo.push_back(___a);
	}
	void stepAnim() {
		if (XS_CLOCK.getMilliSeconds() > delta_time) {
			currentStep = vertexDepo[siradaki];
			currentTexture = texDepo[siradaki];
			siradaki++;
			if (siradaki >= vertexDepo.size()) {
				siradaki = 0;
			}
			XS_CLOCK.start();
		}
	}
};
class XsAnim {
private:
	int siradaki = 0;
	XsClock XS_CLOCK;
	std::vector<XsVertexDepo> obj_data;
	std::vector<XsTexture> texdata;
public:
	XsVertexDepo currentObj;
	XsTexture currentTexture;
	float delta_time = 1;
	void addFrame(XsVertexDepo& __dhbvhdfmaa, XsTexture __aaahsdvc) {
		obj_data.push_back(__dhbvhdfmaa);
		texdata.push_back(__aaahsdvc);
	};
	void stepAnim() {
		if (XS_CLOCK.getMilliSeconds() > delta_time) {
			currentObj = obj_data[siradaki];
			currentTexture = texdata[siradaki];
			siradaki++;
			if (siradaki >= texdata.size()) {
				siradaki = 0;
			}
			XS_CLOCK.start();
		}
	}
};