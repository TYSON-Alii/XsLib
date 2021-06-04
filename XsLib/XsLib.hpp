const char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
const char ALPHABET[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
typedef int vnsvkjbzczvbvhsdbhbdsvndjsvjjnksdjznmnjdkvnjzvbdnvjknszjvjz;
int* nullint = nullptr;
float* nullfloat = nullptr;
double* nulldouble = nullptr;
const enum XsUseVertices {};
const enum XsUseVertex {};
#define and &&
#define or !!
#define not !=
#define newln std::cout<<std::endl;
#define NEWLINE std::cout<<std::endl;
#define prnt std::cout
int random(int min, int max) { return (rand() % (max - min)) + min; };
float randomf(int min, int max) { return (float(rand() % (max - min)) + min); };
double randomd(int min, int max) { return (double(rand() % (max - min)) + min); };
bool randomb() { short int _t = rand() % 2; if (_t == 0) return false; return true; };
#define XS_PI 3.141592
#define XS_HALF_PI 1.570796
#define XS_TWO_PI 6.283185
#define XS_FI 1.618033
const enum XsLogColor {
	XS_LOG_RED = 12,
	XS_LOG_BLUE = 9,
	XS_LOG_GREEN = 10,
	XS_LOG_BLACK = 0,
	XS_LOG_WHITE = 15,
	XS_LOG_YELLOW = 14,
	XS_LOG_PURPLE = 13,
	XS_LOG_GREY = 7
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
	XS_KEY_SHIFT = 4,
	XS_KEY_ENTER = 3,
	XS_MOUSE_LEFT = 1,
	XS_MOUSE_RIGHT = 2,
	XS_MOUSE_MIDDLE = 16
};
enum XsEnum {
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
	XS_STAR = 0x00b,
	XS_POLYGONE = 0x0c,
	XS_BOX = 0x0d,
};
typedef float XsFloat;
typedef double XsDouble;
typedef int XsInt;
typedef bool XsBool;
typedef unsigned int XsTexture;

#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <fstream>
#include <sstream>
#include <chrono>
#include <stdio.h>
#include <conio.h>
#include <system/XsTrash.hpp>
#include <system/XsLog.hpp>
#include <math/XsVex5.hpp>
#include <math/XsVex4.hpp>
#include <math/XsVex3.hpp>
#include <math/XsVex2.hpp>
#include <math/XsVex.hpp>
#include <math/XsVextor.hpp>
#include <math/XsMath.hpp>
#include <math/XsVexFunc.hpp>
#include <math/XsVexMath.hpp>
#include <math/XsVarConverter.hpp>
#include <math/XsSearchAlgorithm.hpp>

#include <system/XsSystem.hpp>

#include <system/XsClock.hpp>

#ifdef XS_USE_GLM
#include <system/XsCamera.hpp>
#endif

#include <shader/XsShader.hpp>

#if defined(XS_USE_STB)
#define STB_IMAGE_IMPLEMENTATION
#define STB_PERLIN_IMPLEMENTATION
#include <stb/stb.h>
#include <stb/stb_image.h>

#include <loader/XsStbImage.hpp>
#endif

#ifndef XS_USE_COLOR
#include <math/XsColor.hpp>
#endif

#include <loader/XsTexture.hpp>

#include <math/XsCollission.hpp>

//#include <system/XsMeshSystem.hpp>

#include <shape/XsSolidShapes.hpp>
#include <shape/XsShape.hpp>
#include <loader/XsConverter.hpp>
#include <loader/XsModel.hpp>
#include <loader/XsAnim.hpp>
#include <shape/XsShapeMath.hpp>
#include <shape/XsParticul.hpp>
#include <shape/XsView.hpp>

#include <shape/XsGui.hpp>

#include <physics/XsPhysics.hpp>

#include <loader/XsObjLoader.hpp>

#include <shape/XsAnimation.hpp>

#include <shape/XsPopup.hpp>

#include <shape/XsSkybox.hpp>