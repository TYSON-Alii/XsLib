typedef float XsFloat;
typedef double XsDouble;
typedef int XsInt;
typedef bool XsBool;
typedef unsigned int XsTexture;
struct vex2f;
struct vex2d;
struct vex2i;
struct vex2b;
struct vex3f;
struct vex3d;
struct vex3i;
struct vex3b;
struct vex4f;
struct vex4d;
struct vex4i;
struct vex4b;
class XsShader;
class XsParticul;
class XsParticulX;
class XsTextureSTB;
class XsSky;
class XsModel;
struct XsAABBCollission;
typedef XsAABBCollission XsCollission;
typedef XsAABBCollission XsColl;
struct XsVertex;
struct XsVertex2d;
struct XsVertexi;
struct XsVertexi2d;
typedef std::vector<GLfloat> XsVertices;
typedef std::vector<XsVertex> XsVertexDepo;
typedef std::vector<XsVertex2d> XsVertex2dDepo;
class XsVertexRepo;
class XsShape;
class XsShapeM;
class XsOBJShape;
struct XsShape2d;
struct XsPopUpSett;
struct XsPopUp;
class XsNumber;
struct XsText;
class XsChrono;
struct XsDate;
class XsTimer;
class XsCamera;
class XsCamera2d;
struct XsPrinter;
class XsCameraAnim;
class XsAnimation;
class XsAnim;
class XsAnimInfo;
struct XsThem;
#ifdef XS_USE_PHYSX
class XsDynamicRigid;
class XsStaticigid;
physx::PxTriangleMeshGeometry XsPxTriangleMesh(XsVertices _v, XsEnum _x, physx::PxCooking& _c, physx::PxPhysics& _p);
#endif
// /////////////////////////// //
vex2i XsGetMousePos();
void XsGetMousePos(vex2i& __vev);
void XsGetMousePos(vex2f& __vev);
void XsGetMousePos(vex2d& __vev);
void XsGetMousePos(vex3i& __vev);
void XsGetMousePos(vex3f& __vev);
void XsGetMousePos(vex3d& __vev);
void XsGetMousePos(vex4i& __vev);
void XsGetMousePos(vex4f& __vev);
void XsGetMousePos(vex4d& __vev);
#ifdef XS_USE_SFML
vex2f XsGetMousePos(sf::RenderWindow& window);
#endif
bool XsIsKeyPressed(short unsigned int __KEY_CODE);
bool XsStbImageLoad(const char* __file_name, unsigned int& __texture__, GLenum __wrapping, GLenum __filter, GLenum __format);
void XsSolidTriangle();
void XsSolidSquare();
void XsSolidPolygone(int count);
void XsSolidTriangle(float _s);
void XsSolidSquare(float _s);
void XsSolidPolygone(int count, float _s);
void XsSolidTriangle(vex2f _s);
void XsSolidSquare(vex2f _s);
void XsSolidPolygone(int count, vex2f _s);
void XsSolidCube(XsEnum mode);
void XsSolidPrism(XsEnum mode);
void XsSolidSphere(XsEnum mode);
void XsSolidCone(XsEnum mode);
void XsSolidCylinder(XsEnum mode);
void XsSolidIcoSphere(XsEnum mode);
void XsSolidMonke(XsEnum mode);
void XsSolidTorus(XsEnum mode);
void XsSolidTeapot(XsEnum mode);
void XsSolidStar(XsEnum mode);
void XsSolid(XsSolidType _shape, XsEnum mode);
void XsSkySphere(vex3f __ps, XsTexture __ttx);
void XsSkySphere(XsCamera _c, XsTexture __ttx);
void XsSkybox(XsCamera _c, XsTexture __ttx);
void XsScale(XsVertexDepo& __vertex, vex3f __scale);
void XsOrigin(XsVertexDepo& __vertex, vex3f __origin);
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max, float __scale);
void XsRandomize(XsVertexDepo& __vertex, int __min, int __max);
void XsJoin(XsVertexDepo& __vertex, XsVertexDepo __vev);
void XsJoin(XsVertices& __vertex, XsEnum mode, XsVertices __vev, XsEnum mode2);
void XsScale(XsVertices& __vertex, XsEnum mode, vex3f __scale);
void XsOrigin(XsVertices& __vertex, XsEnum mode, vex3f origin);
void XsOutLineColor(XsVertices _v, XsEnum mode);
void XsCreateFlatPlane(XsVertices& _v, vex3f _s, size_t _sub);
XsVertices XsCreateFlatPlane(vex3f _s, size_t _sub);
void XsCreateFlatPlane(XsVertices& _v, vex3f _s, size_t _sub, XsEnum mode);
XsVertices XsCreateFlatPlane(vex3f _s, size_t _sub, XsEnum mode);
void XsCreateFlatPlane(XsVertices& _v, vex2f _s, size_t _sub, XsCoord _axis);
XsVertices XsCreateFlatPlane(vex2f _s, size_t _sub, XsCoord _axis);
bool XsOBJLoader(const char* __file_name, XsVertexDepo& __vertices);
XsVertexDepo XsOBJLoader(const char* __file_name);
XsVertices XsOBJLoader(const char* __file_name, XsEnum mode);
bool XsOBJLoader(const char* __file_name, std::vector<XsVertex>& __vertices, vex3f __scale);
bool XsOBJLoader(const char* __file_name, std::vector<XsVertexi>& __vertices);
void XsWriteXsModel(XsVertices __v, XsEnum modex, GLenum mode, const char* file_name);
void XsWriteXsModel(XsVertices __v, XsEnum modex, GLenum mode, const char* file_name, std::string __comment);
XsVertices XsModelLoader(const char* file_name);
void XsModelLoader(XsVertices& _v, const char* file_name);
void XsLogError(XsLogColor __colorF, XsLogColor __colorB, const char* __messages);
void XsLog(XsLogColor __colorF, XsLogColor __colorB, const char* __messages);
void XsLogDate(XsLogColor __colorF, XsLogColor __colorB, const int __style);
void XsObjToOpenglText(XsVertexDepo vertex, const char* file_name, XsEnum _mode);
void XsVertexToArrayText(XsVertexDepo __vertex, const char* file_name, XsEnum __aa);
void XsVertexWriteText(XsVertexDepo vertex, const char* file_name, XsEnum mode);
bool XsDetectCollission(XsAABBCollission& __vev, XsAABBCollission& __vev2);
bool XsDetectCollission(vex3f& __vev, XsAABBCollission& __vev2);
bool XsKinematic(vex3f& pos, XsAABBCollission col);
bool XsKinematic(vex3f& pos, XsAABBCollission col, float v);
bool XsKinematic(vex3f& pos, vex3f& speed, XsAABBCollission col);
bool XsKinematic(vex3f& pos, vex3f& speed, XsAABBCollission col, float v);
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode);
void XsPrintVertex(XsVertex2dDepo __myVert, XsEnum _mode);
void XsPrintVertex(XsVertex2dDepo __myVert);
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f _scale);
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig);
void XsPrintVertex(XsVertexDepo __myVert);
void XsPrintVertex(XsVertexDepo __myVert, XsEnum _mode, vex3f __orig, vex3f __g);
void XsPrintVertex(XsVertexDepo __myVert, vex3f __orig, vex3f __g);
void XsVerticesLoad(XsVertices& _a, XsVertexDepo _v, XsEnum _mode);
XsVertices XsVerticesLoad(XsVertexDepo _v, XsEnum _mode);
void XsVertexLoad(XsVertexDepo& _v, XsVertices _q, XsEnum mode);
XsVertexDepo XsVertexLoad(XsVertices _q, XsEnum mode);
void XsPrintVertices(XsVertices _a, XsEnum mode);
void XsPrintVertices(XsVertices _a, XsEnum mode, GLenum __mode);
bool XsLimiter(XsChrono& __vev, float __vev2);
void XsDefaultCamera(XsCamera& camera_data);
void XsDefaultCamera(XsCamera2d& camera_data);
void XsFPSCamera(XsCamera& camera_data, vex2f _mode_pos, float sensivity);
void XsWriteCameraAnim(XsCameraAnim& canim, const char* file_name);
void XsPrintAnim(XsAnimInfo _a);
void XsWriteXsAnim(const char* _filename, GLenum _glmode, XsEnum mode, std::vector<XsVertices> _v, float _dtime);
void XsWriteXsAnim(const char* _filename, XsAnimInfo _aaa);
float XsDistance(vex3f __a, vex3f __b);
double XsDistance(vex3d __a, vex3d __b);
int XsDistance(vex3i __a, vex3i __b);
float XsDistance(vex2f __a, vex2f __b);
double XsDistance(vex2d __a, vex2d __b);
int XsDistance(vex2i __a, vex2i __b);
int digit(int __vev);
float percent(float __vev, float __v);
float absx(float __vev);
float powx(float __vev, int __pow);
std::string str(int __stryno);
std::string str(double __stryno);
std::string str(float __stryno);
std::string str(char __stryno);
void XsSave(XsShape& v, const char* filename);
void XsSave(XsShape2d& v, const char* filename);
void XsSave(XsCamera& v, const char* filename);
void XsDrawColl(XsCollission v, vex4f color);
void XsDrawColl(XsCollission v, vex3f color);
void XsDrawColl(XsCollission v);
void XsDrawColl(XsCollission v, float s, vex4f color);
void XsDrawColl(XsCollission v, float s, vex3f color);
void XsDrawColl(XsCollission v, float s);
class XsSaver;
#ifdef XS_USE_IMGUI
void XsInfo(XsShape& v, const char* name);
void XsInfo(XsShape2d& v, const char* name);
void XsInfo(XsCamera& v, const char* name);
void XsInfo(XsCollission& v, const char* name);
#ifdef XS_USE_PHYSX
void XsInfo(XsDynamicRigid& v, const char* name);
#endif
void DragFloat2(const char* label, vex2f& v, float v_speed, float _min, float _max);
void DragFloat3(const char* label, vex3f& v, float v_speed, float _min, float _max);
void DragFloat4(const char* label, vex4f& v, float v_speed, float _min, float _max);
void SliderFloat2(const char* label, vex2f& v, float _min, float _max);
void SliderFloat3(const char* label, vex3f& v, float _min, float _max);
void SliderFloat4(const char* label, vex4f& v, float _min, float _max);
void DragInt2(const char* label, vex2f& v, int v_speed, int _min, int _max);
void DragInt3(const char* label, vex3f& v, int v_speed, int _min, int _max);
void DragInt4(const char* label, vex4f& v, int v_speed, int _min, int _max);
void SliderInt2(const char* label, vex2f& v, int _min, int _max);
void SliderInt3(const char* label, vex3f& v, int _min, int _max);
void SliderInt4(const char* label, vex4f& v, int _min, int _max);
void ColorPicker4(const char* label, vex4f& v);
void ColorPicker3(const char* label, vex3f& v);
#endif