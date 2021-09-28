template <typename T> class XsMesh;
template <> class XsMesh<XsVertices> {
private:
	vex3f _pos = 0;
	vex3f _rot = 0;
	vex3f _scale = 1;
	vex4f _color = 1;
	XsVertices _vertices;
	XsTexture _tex = 0;
	XsEnum _XsMode = XS_VERTEX;
	GLenum _GlMode = GL_TRIANGLES;
public:
	vex3f& pos() { return _pos; };
	vex3f& rot() { return _rot; };
	vex3f& scale() { return _scale; };
	vex4f& color() { return _color; };
	XsVertices& vertices() { return _vertices; };
	volatile XsTexture& tex() { return _tex; };
	XsEnum& XsMode() { return _XsMode; };
	GLenum& GlMode() { return _GlMode; };
};
template <> class XsMesh<XsVertex>;