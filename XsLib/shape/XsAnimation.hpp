class XsAnimation {
private:
	int siradaki = 0;
	XsChrono XS_CLOCK;
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