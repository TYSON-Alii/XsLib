struct XsAABBCollission {
	vex3f pos = vex3f(0, 0, 0);
	vex3f scale = vex3f(1, 1, 1);
	bool isTouch = false;
};
bool XsDetectCollission(XsAABBCollission& __vev, XsAABBCollission& __vev2) {
    if (volatile bool(__vev.pos.x + __vev.scale.x > __vev2.pos.x - __vev2.scale.x &&
        __vev.pos.x - __vev.scale.x < __vev2.pos.x + __vev2.scale.x)) {
        if (volatile bool(__vev.pos.y + __vev.scale.y > __vev2.pos.y - __vev2.scale.y &&
            __vev.pos.y - __vev.scale.y < __vev2.pos.y + __vev2.scale.y)) {
            if (volatile bool(__vev.pos.z + __vev.scale.z > __vev2.pos.z - __vev2.scale.z &&
                __vev.pos.z - __vev.scale.z < __vev2.pos.z + __vev2.scale.z)) {
                __vev.isTouch = true;
                __vev2.isTouch = true;
                return true;
            }
            else {
                __vev.isTouch = false;
                __vev2.isTouch = false;
                return false;
            };
        }
        else {
            __vev.isTouch = false;
            __vev2.isTouch = false;
            return false;
        };
    }
    else {
        __vev.isTouch = false;
        __vev2.isTouch = false;
        return false;
    };
};
bool XsDetectCollission(vex3f& __vev, XsAABBCollission& __vev2) {
	if (__vev.x > __vev2.pos.x - __vev2.scale.x &&
		__vev.x < __vev2.pos.x + __vev2.scale.x &&
		__vev.y > __vev2.pos.y - __vev2.scale.y &&
		__vev.y < __vev2.pos.y + __vev2.scale.y &&
		__vev.z > __vev2.pos.z - __vev2.scale.z &&
		__vev.z < __vev2.pos.z + __vev2.scale.z) {
		__vev2.isTouch = true;
		return true;
	}
	else {
		__vev2.isTouch = false;
		return false;
	};
};

bool XsKinematic(vex3f& pos, XsAABBCollission col) {
    if (XsDetectCollission(pos, col)) {
        if (fabs(pos.x - col.pos.x) > fabs(pos.y - col.pos.y) && fabs(pos.x - col.pos.x) > fabs(pos.z - col.pos.z)) {
            if (pos.x - col.pos.x > 0) {
                pos.x = col.pos.x + col.scale.x;
            }
            else {
                pos.x = col.pos.x - col.scale.x;
            };
        }
        else if (fabs(pos.y - col.pos.y) > fabs(pos.z - col.pos.z)) {
            if (pos.y - col.pos.y > 0) {
                pos.y = col.pos.y + col.scale.y;
            }
            else {
                pos.y = col.pos.y - col.scale.y;
            };
        }
        else {
            if (pos.z - col.pos.z > 0) {
                pos.z = col.pos.z + col.scale.z;
            }
            else {
                pos.z = col.pos.z - col.scale.z;
            };
        };
        return true;
    };
    return false;
};

bool XsKinematic(vex3f& pos, XsAABBCollission col, float v) {
    if (XsDetectCollission(pos, col)) {
        if (fabs(pos.x - col.pos.x) > fabs(pos.y - col.pos.y) && fabs(pos.x - col.pos.x) > fabs(pos.z - col.pos.z)) {
            if (pos.x - col.pos.x > 0) {
                pos.x = col.pos.x + col.scale.x + v;
            }
            else {
                pos.x = col.pos.x - col.scale.x - v;
            };
        }
        else if (fabs(pos.y - col.pos.y) > fabs(pos.z - col.pos.z)) {
            if (pos.y - col.pos.y > 0) {
                pos.y = col.pos.y + col.scale.y + v;
            }
            else {
                pos.y = col.pos.y - col.scale.y - v;
            };
        }
        else {
            if (pos.z - col.pos.z > 0) {
                pos.z = col.pos.z + col.scale.z + v;
            }
            else {
                pos.z = col.pos.z - col.scale.z - v;
            };
        };
        return true;
    };
    return false;
};

bool XsKinematic(vex3f& pos, vex3f& speed, XsAABBCollission col) {
    if (XsDetectCollission(pos, col)) {
        if (fabs(pos.x - col.pos.x) > fabs(pos.y - col.pos.y) && fabs(pos.x - col.pos.x) > fabs(pos.z - col.pos.z)) {
            if (pos.x - col.pos.x > 0) {
                pos.x = col.pos.x + col.scale.x;
            }
            else {
                pos.x = col.pos.x - col.scale.x;
            };
            speed.x = 0;
        }
        else if (fabs(pos.y - col.pos.y) > fabs(pos.z - col.pos.z)) {
            if (pos.y - col.pos.y > 0) {
                pos.y = col.pos.y + col.scale.y;
            }
            else {
                pos.y = col.pos.y - col.scale.y;
            };
            speed.y = 0;
        }
        else {
            if (pos.z - col.pos.z > 0) {
                pos.z = col.pos.z + col.scale.z;
            }
            else {
                pos.z = col.pos.z - col.scale.z;
            };
            speed.z = 0;
        };
        return true;
    };
    return false;
};

bool XsKinematic(vex3f& pos, vex3f& speed, XsAABBCollission col, float v) {
    if (XsDetectCollission(pos, col)) {
        if (fabs(pos.x - col.pos.x) > fabs(pos.y - col.pos.y) && fabs(pos.x - col.pos.x) > fabs(pos.z - col.pos.z)) {
            if (pos.x - col.pos.x > 0) {
                pos.x = col.pos.x + col.scale.x + v;
            }
            else {
                pos.x = col.pos.x - col.scale.x - v;
            };
            speed.x = 0;
        }
        else if (fabs(pos.y - col.pos.y) > fabs(pos.z - col.pos.z)) {
            if (pos.y - col.pos.y > 0) {
                pos.y = col.pos.y + col.scale.y + v;
            }
            else {
                pos.y = col.pos.y - col.scale.y - v;
            };
            speed.y = 0;
        }
        else {
            if (pos.z - col.pos.z > 0) {
                pos.z = col.pos.z + col.scale.z + v;
            }
            else {
                pos.z = col.pos.z - col.scale.z - v;
            };
            speed.z = 0;
        };
        return true;
    };
    return false;
};