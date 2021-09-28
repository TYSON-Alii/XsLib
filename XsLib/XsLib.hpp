const char alphabet[26]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
const char ALPHABET[26]{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
typedef int vnsvkjbzczvbvhsdbhbdsvndjsvjjnksdjznmnjdkvnjzvbdnvjknszjvjz;
int* nullint = nullptr;
float* nullfloat = nullptr;
double* nulldouble = nullptr;
#define pass void()
#define namestr(x) #x
#define elif else if
#define rep(v) for (decltype(v) i = 0; i < v; i +=1 )
#define rep(v, j) for (decltype(v) i = 0; i < v; i += j)
enum XsCoord {
	XS_X_AXIS = 0x01,
	XS_Y_AXIS = 0x02,
	XS_Z_AXIS = 0x03,
	XS_X = 0x04,
	XS_Y = 0x05,
	XS_Z = 0x06,
	XS_ANGULAR = 0x07,
	XS_LINEAR = 0x08
};
#define and &&
#define or ||
#define newln std::cout<<'\n';
#define NEWLINE std::cout<<'\n';
#define prnt std::cout
#define XS_PI 3.141592
#define XS_HALF_PI 1.570796
#define XS_TWO_PI 6.283185
#define XS_FI 1.618033

const enum XsLogColor {
	XsLogBlack = 0,
	XsLogDarkBlue = 1,
	XsLogDarkGreen = 2,
	XsLogDarkCyan = 3,
	XsLogDarkRed = 4,
	XsLogDarkMagenta = 5,
	XsLogDarkYellow = 6,
	XsLogGrey = 7,
	XsLogDark_grey = 8,
	XsLogBlue = 9,
	XsLogGreen = 10,
	XsLogCyan = 11,
	XsLogRed = 12,
	XsLogPurple = 13,
	XsLogYellow = 14,
	XsLogWhite = 15
};
#define XS_NULL 0
#define XS_FALSE 0
#define XS_TRUE 1
#define XS_RED 0.976f, 0.117f, 0.265f
#define XS_DARK_GREEN 0.000f, 0.386f, 0.265f
#define XS_BLUE 0.000f, 0.703f, 0.917f
#define XS_PINK 1.000f, 0.867f, 0.894f
#define XS_DARK_BLUE 0.359f, 0.289f, 0.890f
#define XS_GREY 0.230f, 0.226f, 0.289f
#define XS_PURPLE 0.564f, 0.04f, 0.65f
#define XS_MEDIUM_PURPLE 0.576f, 0.439f, 0.858f
#define XS_ORANGE 1.00f, 0.36f, 0.09f
#define XS_YELLOW 0.91f, 1.00f, 0.21f
#define XS_LIME 0.55f, 0.90f, 0.06f
const enum XsKey {
	XS_KEY_A = 65,
	XS_KEY_B = 66,
	XS_KEY_C = 67,
	XS_KEY_D = 68,
	XS_KEY_E = 69,
	XS_KEY_F = 70,
	XS_KEY_G = 71,
	XS_KEY_H = 72,
	XS_KEY_I = 73,
	XS_KEY_J = 74,
	XS_KEY_K = 75,
	XS_KEY_L = 76,
	XS_KEY_M = 77,
	XS_KEY_N = 78,
	XS_KEY_O = 79,
	XS_KEY_P = 80,
	XS_KEY_Q = 81,
	XS_KEY_R = 82,
	XS_KEY_S = 83,
	XS_KEY_T = 84,
	XS_KEY_U = 85,
	XS_KEY_V = 86,
	XS_KEY_W = 87,
	XS_KEY_X = 88,
	XS_KEY_Y = 89,
	XS_KEY_Z = 90,
	XS_KEY_0 = 48,
	XS_KEY_1 = 49,
	XS_KEY_2 = 50,
	XS_KEY_3 = 51,
	XS_KEY_4 = 52,
	XS_KEY_5 = 53,
	XS_KEY_6 = 54,
	XS_KEY_7 = 55,
	XS_KEY_8 = 56,
	XS_KEY_9 = 57,
	XS_KEY_SPACE = 32,
	XS_KEY_ESC = 27,
	XS_KEY_DELETE = 8,
	XS_KEY_TAB = 9,
	XS_KEY_UP = 38,
	XS_KEY_DOWN = 40,
	XS_KEY_RIGHT = 39,
	XS_KEY_LEFT = 37,
	XS_KEY_SHIFT = 16,
	XS_KEY_ENTER = 13,
	XS_MOUSE_LEFT = 1,
	XS_MOUSE_RIGHT = 2,
	XS_MOUSE_MIDDLE = 16
};
const enum XsEnum {
	XS_POINT = 0x01,
	XS_LINE = 0x02,
	XS_TRIANGLE = 0x03,
	XS_QUAD = 0x04,
	XS_INT = 0x05,
	XS_FLOAT = 0x06,
	XS_DOUBLE = 0x07,
	XS_BOOL = 0x08,
	XS_STRING = 0x09,
	XS_CHAR = 0x0a,
	XS_ALL = 0x0b,
	XS_VERTEX = 0x0c,
	XS_NORMAL = 0x0d,
	XS_TEXTURE = 0x0e,
	XS_VERTEX_AND_TEXTURE = 0x0f,
	XS_VERTEX_AND_NORMAL = 0x10,
	XS_CEIL = 0x11,
	XS_TRUNC = 0x12,
	XS_FLOOR = 0x13,
	XS_REPEAT = 0x14,
	XS_REVERSE = 0x15,
	XS_SMOOTH = 0x16,
	XS_HARD = 0x17,
};
const enum XsSolidType {
	XS_CUBE = 0x01,
	XS_PRISM = 0x02,
	XS_SPHERE = 0x03,
	XS_CYLINDER = 0x04,
	XS_CONE = 0x05,
	XS_MONKE = 0x06,
	XS_ICOSPHERE = 0x07,
	XS_TORUS = 0x08,
	XS_SQUARE = 0x09,
	XS_TEAPOT = 0x0a,
	XS_STAR = 0x0b,
	XS_POLYGONE = 0x0c,
	XS_BOX = 0x0d,
};
enum XsInfoType {
	XsInfoDrag,
	XsInfoInput
};
#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <fstream>
#include <sstream>
#include <cstdarg>

#include <system/XsType.hpp>
//void glEnable(int _c, GLenum _e...) {
//	va_list vl;
//	va_start(vl, _e);
//	for (size_t i = 0; i < _c; i++) {
//		glEnable(va_arg(vl, GLenum));
//	};
//	va_end(vl);
//};
//void glDisable(int _c, GLenum _e...) {
//	va_list vl;
//	va_start(vl, _e);
//	for (size_t i = 0; i < _c; i++) {
//		glDisable(va_arg(vl, GLenum));
//	};
//	va_end(vl);
//};
int random(int min, int max) { return (std::rand() % (max - std::abs(min))) + min; };
float randomf(int min, int max) { return float(std::rand() % (max - std::abs(min))) + min; };
double randomd(int min, int max) { return double(std::rand() % (max - std::abs(min))) + min; };
bool randomb() { short int _t = std::rand() % 2; if (_t == 0) return false; return true; };
namespace std {
	int atoi(bool& v) { return v ? 1 : 0; };
	float atof(bool& v) { return v ? 1.f : 0.f; };
	bool atob(const char* v) { return std::string(v) == "true" || std::string(v) == "1" ? true : false; };
	bool atob(std::string v) { return v == "true" || v == "1" ? true : false; };
};
template <typename _t> void XsChangeConstVar(const volatile _t& _v, _t _new) {
	_t* px = (_t*)&_v;
	*px = _new;
};
void printx() { std::cout << '\n'; };
template <typename T, typename ...TAIL>
void printx(const T& v, TAIL... tail) {
	std::cout << v << ' ';
	printx(tail...);
}
std::string str(float v) {
	std::stringstream ss;
	ss << v;
	return ss.str();
}
std::string str(double v) {
	std::stringstream ss;
	ss << v;
	return ss.str();
}
std::string str(int v) {
	std::stringstream ss;
	ss << v;
	return ss.str();
}
std::string str(char v) {
	std::stringstream ss;
	ss << v;
	return ss.str();
}
std::string str(const char* v) {
	std::stringstream ss;
	ss << v;
	return ss.str();
}
const XsVertices XsSquareTexVert{
	-1.f, -1.f, 0.f,  0.f, 0.f,
	-1.f, 1.f, 0.f,  0.f, 1.f,
	1.f, 1.f, 0.f,  1.f, 1.f,
	1.f, -1.f, 0.f,  1.f, 0.f
};
const XsVertices XsSquareVert{
	-1.f, -1.f, 0.f,
	-1.f, 1.f, 0.f,
	1.f, 1.f, 0.f,
	1.f, -1.f, 0.f
};
bool XsAnyKeyPressed() {
	for (int i = 0; i <= 112; i++) {
		if (XsIsKeyPressed(i)) {
			return true;
		};
	};
	return false;
};
#include <chrono>
#include <system/XsTrash.hpp>
#include <system/XsLog.hpp>
#include <math/XsVex2.hpp>
#include <math/XsVex3.hpp>
#include <math/XsVex4.hpp>
#include <math/XsVex.hpp>
#include <math/XsVextor.hpp>
#include <math/XsMath.hpp>
#include <math/XsVexFunc.hpp>
#include <math/XsVexMath.hpp>

std::string str(vex2f __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y); };
std::string str(vex2d __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y); };
std::string str(vex2i __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y); };
std::string str(vex2b __stryno) { return std::to_string(__stryno.x) + ' ' + std::to_string(__stryno.y); };
std::string str(vex2h __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y); };
std::string str(vex3f __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z); };
std::string str(vex3d __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z); };
std::string str(vex3i __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z); };
std::string str(vex3b __stryno) { return std::to_string(__stryno.x) + ' ' + std::to_string(__stryno.y) + ' ' + std::to_string(__stryno.z); };
std::string str(vex3h __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z); };
std::string str(vex4f __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z) + ' ' + str(__stryno.w); };
std::string str(vex4d __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z) + ' ' + str(__stryno.w); };
std::string str(vex4i __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z) + ' ' + str(__stryno.w); };
std::string str(vex4b __stryno) { return std::to_string(__stryno.x) + ' ' + std::to_string(__stryno.y) + ' ' + std::to_string(__stryno.z) + ' ' + std::to_string(__stryno.w); };
std::string str(vex4h __stryno) { return str(__stryno.x) + ' ' + str(__stryno.y) + ' ' + str(__stryno.z) + ' ' + str(__stryno.w); };

const vex3f XsRed = vex3f(0.976f, 0.117f, 0.265f);
const vex3f XsDarkGreen = vex3f(0.000f, 0.386f, 0.265f);
const vex3f XsBlue = vex3f(0.000f, 0.703f, 0.917f);
const vex3f XsPink = vex3f(1.000f, 0.867f, 0.894f);
const vex3f XsDarkBlue = vex3f(0.359f, 0.289f, 0.890f);
const vex3f XsGrey = vex3f(0.230f, 0.226f, 0.289f);
const vex3f XsPurple = vex3f(0.564f, 0.04f, 0.65f);
const vex3f XsMediumPurple = vex3f(0.576f, 0.439f, 0.858f);
const vex3f XsOrange = vex3f(1.00f, 0.36f, 0.09f);
const vex3f XsYellow = vex3f(0.91f, 1.00f, 0.21f);
const vex3f XsLime = vex3f(0.55f, 0.90f, 0.06f);

void glColor3f(vex3f v) { glColor3f(v.x, v.y, v.z); };
void glColor3f(vex4f v) { glColor3f(v.x, v.y, v.z); };
void glColor3i(vex3i v) { glColor3i(v.x, v.y, v.z); };
void glColor3f(vex2f v, float v1) { glColor3f(v.x, v.y, v1); };
void glColor3f(float v1, vex2f v) { glColor3f(v1, v.x, v.y); };
void glColor4f(vex3f v) { glColor4f(v.x, v.y, v.z, 1); };
void glColor4i(vex3i v) { glColor4i(v.x, v.y, v.z, 1); };
void glColor4f(vex4f v) { glColor4f(v.x, v.y, v.z, v.w); };
void glColor4i(vex4i v) { glColor4i(v.x, v.y, v.z, v.w); };
void glColor4f(vex3f v, float v1) { glColor4f(v.x, v.y, v.z, v1); };
void glColor4f(float v1, vex3f v) { glColor4f(v1, v.x, v.y, v.z); };
void glColor4f(vex2f v, float v1, float v2) { glColor4f(v.x, v.y, v1, v2); };
void glColor4f(float v1, vex2f v, float v2) { glColor4f(v1, v.x, v.y, v2); };
void glColor4f(float v1, float v2, vex2f v) { glColor4f(v1, v2, v.x, v.y); };

void glTranslatef(vex2f v) { glTranslatef(v.x, v.y, 0); };
void glTranslatef(vex2f v, float v1) { glTranslatef(v.x, v.y, v1); };
void glTranslatef(vex3f v) { glTranslatef(v.x, v.y, v.z); };
void glTranslatef(vex4f v) { glTranslatef(v.x, v.y, v.z); };

void glRotatef(float v1, vex3f v) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(vex3f v, float v1) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(float v1, vex3d v) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(vex3d v, float v1) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(double v1, vex3f v) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(vex3f v, double v1) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(double v1, vex3d v) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(vex3d v, double v1) { glRotatef(v1, v.x, v.y, v.z); };
void glRotatef(vex3f v) { glRotatef(v.x, 1, 0, 0); glRotatef(v.y, 0, 1, 0); glRotatef(v.z, 0, 0, 1); };
void glRotatef(vex4f v) { glRotatef(v.w, v.x, v.y, v.z); };
void glRotatef(vex4d v) { glRotatef(v.w, v.x, v.y, v.z); };

void glScalef(vex2f v) { glScalef(v.x, v.y, 1); };
void glScalef(vex3f v) { glScalef(v.x, v.y, v.z); };
void glScalef(vex4f v) { glScalef(v.x, v.y, v.z); };
void glScalef(vex2d v) { glScalef(v.x, v.y, 1); };
void glScalef(vex3d v) { glScalef(v.x, v.y, v.z); };
void glScalef(vex4d v) { glScalef(v.x, v.y, v.z); };
void glScalef(vex2i v) { glScalef(v.x, v.y, 1); };
void glScalef(vex3i v) { glScalef(v.x, v.y, v.z); };
void glScalef(vex4i v) { glScalef(v.x, v.y, v.z); };

void glVertex3f(float v) { glVertex3f(v, v, v); };
void glVertex3f(double v) { glVertex3f(float(v), float(v), float(v)); };
void glVertex3f(int v) { glVertex3f(float(v), float(v), float(v)); };
void glVertex3f(vex2f v) { glVertex3f(v.x, v.y, 0.f); };
void glVertex3f(vex3f v) { glVertex3f(v.x, v.y, v.z); };
void glVertex3f(vex4f v) { glVertex3f(v.x, v.y, v.z); };
void glVertex3f(vex2d v) { glVertex3f(float(v.x), float(v.y), 0.f); };
void glVertex3f(vex3d v) { glVertex3f(float(v.x), float(v.y), float(v.z)); };
void glVertex3f(vex4d v) { glVertex3f(float(v.x), float(v.y), float(v.z)); };
void glVertex3f(vex2i v) { glVertex3f(float(v.x), float(v.y), 0.f); };
void glVertex3f(vex3i v) { glVertex3f(float(v.x), float(v.y), float(v.z)); };
void glVertex3f(vex4i v) { glVertex3f(float(v.x), float(v.y), float(v.z)); };
void glVertex2f(vex2f v) { glVertex2f(v.x, v.y); };
void glVertex2f(vex3f v) { glVertex2f(v.x, v.y); };
void glVertex2f(vex4f v) { glVertex2f(v.x, v.y); };
void glVertex2f(vex2d v) { glVertex2f(float(v.x), float(v.y)); };
void glVertex2f(vex3d v) { glVertex2f(float(v.x), float(v.y)); };
void glVertex2f(vex4d v) { glVertex2f(float(v.x), float(v.y)); };
void glVertex2f(vex2i v) { glVertex2f(float(v.x), float(v.y)); };
void glVertex2f(vex3i v) { glVertex2f(float(v.x), float(v.y)); };
void glVertex2f(vex4i v) { glVertex2f(float(v.x), float(v.y)); };

#include <system/XsSystem.hpp>

#include <system/XsClock.hpp>

#ifdef XS_USE_GLM
#include <system/XsCamera.hpp>
#endif

#include <system/XsEffect.hpp>

#include <system/XsShader.hpp>

#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb.h>
#include <stb/stb_image.h>

#include <loader/XsStbImage.hpp>

#include <math/XsCollission.hpp>

#include <shape/XsSolidShapes.hpp>
#include <shape/XsShape.hpp>
#include <shape/XsMesh.hpp>
#include <shape/XsShapeCreater.hpp>
#include <loader/XsConverter.hpp>
#include <loader/XsModel.hpp>
#include <loader/XsAnim.hpp>
#include <shape/XsShapeMath.hpp>
#include <shape/XsParticul.hpp>

#include <loader/XsObjLoader.hpp>

#include <shape/XsAnimation.hpp>

#include <shape/XsPopup.hpp>

#ifdef XS_USE_COLORS
#include <math/XsColor.hpp>
#endif

#ifdef XS_USE_PHYSX
#include <shape\XsPhysx.hpp>
#endif
#ifdef XS_USE_BULLET
#include <shape\XsBullet.hpp>
#endif

#include <shape/XsSkybox.hpp>

#ifdef XS_USE_IMGUI
#include "loader/XsImGui.hpp"
#endif

#include <system/XsSave.hpp>
