const char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
const char ALPHABET[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
typedef int vnsvkjbzczvbvhsdbhbdsvndjsvjjnksdjznmnjdkvnjzvbdnvjknszjvjz;
int* nullint;
float* nullfloat;
double* nulldouble;
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
#define XS_LOG_RED 12
#define XS_LOG_BLUE 9
#define XS_LOG_GREEN 10
#define XS_LOG_BLACK 0
#define XS_LOG_WHITE 15
#define XS_LOG_YELLOW 14
#define XS_LOG_PURPLE 13
#define XS_LOG_GREY 7
#define XS_NULL 0
#define XS_FALSE 0
#define XS_TRUE 1
#define XS_COLOR_RED 0.976f, 0.117f, 0.265f
#define XS_COLOR_DARK_GREEN 0.000f, 0.386f, 0.265f
#define XS_COLOR_BLUE 0.000f, 0.703f, 0.917f
#define XS_COLOR_PINK 1.000f, 0.867f, 0.894f
#define XS_COLOR_DARK_BLUE 0.359f, 0.289f, 0.890f
#define XS_COLOR_GREY 0.230f, 0.226f, 0.289f
#define XS_COLOR_PURPLE 0.564f, 0.04f, 0.65f
#define XS_COLOR_MEDIUM_PURPLE 0.576f, 0.439f, 0.858f
#define XS_COLOR_ORANGE 1.00f, 0.36f, 0.09f
#define XS_COLOR_YELLOW 0.91f, 1.00f, 0.21f
#define XS_COLOR_LIME 0.55f, 0.90f, 0.06f
#define XS_KEY_A 65
#define XS_KEY_B 66
#define XS_KEY_C 67
#define XS_KEY_D 68
#define XS_KEY_E 69
#define XS_KEY_F 70
#define XS_KEY_G 71
#define XS_KEY_H 72
#define XS_KEY_I 73
#define XS_KEY_J 74
#define XS_KEY_K 75
#define XS_KEY_L 76
#define XS_KEY_M 77
#define XS_KEY_N 78
#define XS_KEY_O 79
#define XS_KEY_P 80
#define XS_KEY_Q 81
#define XS_KEY_R 82
#define XS_KEY_S 83
#define XS_KEY_T 84
#define XS_KEY_U 85
#define XS_KEY_V 86
#define XS_KEY_W 87
#define XS_KEY_X 88
#define XS_KEY_Y 89
#define XS_KEY_Z 90
#define XS_KEY_0 48
#define XS_KEY_1 49
#define XS_KEY_2 50
#define XS_KEY_3 51
#define XS_KEY_4 52
#define XS_KEY_5 53
#define XS_KEY_6 54
#define XS_KEY_7 55
#define XS_KEY_8 56
#define XS_KEY_9 57
#define XS_KEY_SPACE 32
#define XS_KEY_ESC 27
#define XS_KEY_DELETE 8
#define XS_KEY_TAB 9
#define XS_KEY_UP 38
#define XS_KEY_DOWN 40
#define XS_KEY_RIGHT 39
#define XS_KEY_LEFT 37
#define XS_KEY_SHIFT 0x004
#define XS_KEY_ENTER 3
#define XS_MOUSE_LEFT 1
#define XS_MOUSE_RIGHT 2
#define XS_MOUSE_MIDDLE 16
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
	XS_CUBE = 0x11,
	XS_PRISM = 0x12,
	XS_SPHERE = 0x13,
	XS_CYLINDER = 0x14,
	XS_CONE = 0x15,
	XS_MONKE = 0x16,
	XS_ICOSPHERE = 0x17,
	XS_TORUS = 0x18,
	XS_SQUARE = 0x19,
	XS_TEAPOT = 0x1a,
	XS_STAR = 0x01b,
	XS_POLYGONE = 0x1c,
	XS_CEIL = 0x1d,
	XS_TRUNC = 0x1e,
	XS_FLOOR = 0x1f,
	XS_BOX = 0x20,
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
#include <list>
#include <ctime>
#include <fstream>
#include <sstream>
#include <chrono>
#include <stdio.h>
#include <conio.h>
#include <array>
#include <algorithm>
#include <typeinfo>
#include <system/XsTrash.hpp>
#include <system/XsLog.hpp>
#include <math/XsVex4.hpp>
#include <math/XsVex3.hpp>
#include <math/XsVex2.hpp>
#include <math/XsVex.hpp>
#include <math/XsMath.hpp>
#include <math/XsVexFunc.hpp>
#include <math/XsVexMath.hpp>
#include <math/XsVarConverter.hpp>
#include <math/XsSearchAlgorithm.hpp>

#include <system/XsSystem.hpp>

#include <system/XsClock.hpp>

#include <system/XsCamera.hpp>

#if defined(XS_USE_STB)
#define STB_IMAGE_IMPLEMENTATION
#define STB_PERLIN_IMPLEMENTATION
#include <stb/stb.h>
#include <stb/stb_image.h>
#include <stb/stb_perlin.h>

#include <loader/XsStbImage.hpp>
#endif

#include <loader/XsTexture.hpp>

#include <math/XsCollission.hpp>

#include <shape/XsShape.hpp>
#include <loader/XsConverter.hpp>
#include <loader/XsModel.hpp>
#include <shape/XsShapeMath.hpp>
#include <shape/XsParticul.hpp>

#include <physics/XsPhysics.hpp>

#include <loader/XsObjLoader.hpp>

#include <shape/XsAnimation.hpp>

#include <shape/XsPopup.hpp>

#include <shape/XsSkybox.hpp>
#include <shape/XsSolidShapes.hpp>