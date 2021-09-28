void XsCreateFlatPlane(XsVertices& _v, vex3f _s, size_t _sub) {
	_v.clear();
	const int h = pow(4, (_sub - 1)) * 12;
	const int b = pow(2, (_sub - 1)) * 12;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	for (size_t i = 0; i < h; i += 12) {
		// 1
		_v[i] = _j; // x
		_v[i + 1] = _w; // y
		_v[i + 2] = 0; // z
		// 2
		_v[i + 3] = _j; // x
		_v[i + 4] = _s.y / c + _w; // y
		_v[i + 5] = 0; // z
		// 3
		_v[i + 6] = _s.x / c + _j; // x
		_v[i + 7] = _s.y / c + _w; // y
		_v[i + 8] = 0; // z
		// 4
		_v[i + 9] = _s.x / c + _j; // x
		_v[i + 10] = _w; // y
		_v[i + 11] = 0; // z
		_j += _s.x / c;
		if ((i + 12) % b == 0) {
			_w += _s.y / c;
			_j = 0;
		};
	};
};
XsVertices XsCreateFlatPlane(vex3f _s, size_t _sub) {
	XsVertices _v;
	const int h = pow(4, (_sub - 1)) * 12;
	const int b = pow(2, (_sub - 1)) * 12;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	for (size_t i = 0; i < h; i += 12) {
		// 1
		_v[i] = _j; // x
		_v[i + 1] = _w; // y
		_v[i + 2] = 0; // z
		// 2
		_v[i + 3] = _j; // x
		_v[i + 4] = _s.y / c + _w; // y
		_v[i + 5] = 0; // z
		// 3
		_v[i + 6] = _s.x / c + _j; // x
		_v[i + 7] = _s.y / c + _w; // y
		_v[i + 8] = 0; // z
		// 4
		_v[i + 9] = _s.x / c + _j; // x
		_v[i + 10] = _w; // y
		_v[i + 11] = 0; // z
		_j += _s.x / c;
		if ((i + 12) % b == 0) {
			_w += _s.y / c;
			_j = 0;
		};
	};
	return _v;
};
void XsCreateFlatPlane(XsVertices& _v, vex3f _s, size_t _sub, XsEnum mode) {
	_v.clear();
	const volatile int p = 0;
	const volatile int q = 0;
	switch (mode) {
	case XS_VERTEX:
		XsChangeConstVar<int>(p, 12);
		break;
	case XS_VERTEX_AND_NORMAL:
		XsChangeConstVar<int>(p, 24);
		XsChangeConstVar<int>(q, 3);
		break;
	case XS_ALL:
		XsChangeConstVar<int>(p, 24);
		XsChangeConstVar<int>(q, 3);
		break;
	default:
		XsChangeConstVar<int>(p, 12);
		break;
	};
	const int h = pow(4, (_sub - 1)) * p;
	const int b = pow(2, (_sub - 1)) * p;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	for (size_t i = 0; i < h; i += p) {
		// 1
		_v[i] = _j; // x
		_v[i + 1] = _w; // y
		_v[i + 2] = 0; // z
		// 2
		_v[i + 6] = _j; // x
		_v[i + 7] = _s.y / c + _w; // y
		_v[i + 8] = 0; // z
		// 3
		_v[i + 12] = _s.x / c + _j; // x
		_v[i + 13] = _s.y / c + _w; // y
		_v[i + 14] = 0; // z
		// 4
		_v[i + 18] = _s.x / c + _j; // x
		_v[i + 19] = _w; // y
		_v[i + 20] = 0; // z
		_j += _s.x / c;
		if ((i + p) % b == 0) {
			_w += _s.y / c;
			_j = 0;
		};
	};
};
XsVertices XsCreateFlatPlane(vex3f _s, size_t _sub, XsEnum mode) {
	XsVertices _v;
	const volatile int p = 0;
	const volatile int q = 0;
	switch (mode) {
	case XS_VERTEX:
		XsChangeConstVar<int>(p, 12);
		break;
	case XS_VERTEX_AND_NORMAL:
		XsChangeConstVar<int>(p, 24);
		XsChangeConstVar<int>(q, 3);
		break;
	case XS_ALL:
		XsChangeConstVar<int>(p, 24);
		XsChangeConstVar<int>(q, 3);
		break;
	default:
		XsChangeConstVar<int>(p, 12);
		break;
	};
	const int h = pow(4, (_sub - 1)) * p;
	const int b = pow(2, (_sub - 1)) * p;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	for (size_t i = 0; i < h; i += p) {
		// 1
		_v[i] = _j; // x
		_v[i + 1] = _w; // y
		_v[i + 2] = 0; // z
		// 2
		_v[i + 6] = _j; // x
		_v[i + 7] = _s.y / c + _w; // y
		_v[i + 8] = 0; // z
		// 3
		_v[i + 12] = _s.x / c + _j; // x
		_v[i + 13] = _s.y / c + _w; // y
		_v[i + 14] = 0; // z
		// 4
		_v[i + 18] = _s.x / c + _j; // x
		_v[i + 19] = _w; // y
		_v[i + 20] = 0; // z
		_j += _s.x / c;
		if ((i + p) % b == 0) {
			_w += _s.y / c;
			_j = 0;
		};
	};
	return _v;
};
void XsCreateFlatPlane(XsVertices& _v, vex2f _s, size_t _sub, XsCoord _axis) {
	_v.clear();
	const int h = pow(4, (_sub - 1)) * 12;
	const int b = pow(2, (_sub - 1)) * 12;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	switch (_axis) {
	case XS_Z_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = _j; // x
			_v[i + 1] = _w; // y
			_v[i + 2] = 0; // z
			// 2
			_v[i + 3] = _j; // x
			_v[i + 4] = _s.y / c + _w; // y
			_v[i + 5] = 0; // z
			// 3
			_v[i + 6] = _s.x / c + _j; // x
			_v[i + 7] = _s.y / c + _w; // y
			_v[i + 8] = 0; // z
			// 4
			_v[i + 9] = _s.x / c + _j; // x
			_v[i + 10] = _w; // y
			_v[i + 11] = 0; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	case XS_X_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = 0; // x
			_v[i + 1] = _w; // y
			_v[i + 2] = _j; // z
			// 2
			_v[i + 3] = 0; // x
			_v[i + 4] = _s.y / c + _w; // y
			_v[i + 5] = _j; // z
			// 3
			_v[i + 6] = 0; // x
			_v[i + 7] = _s.y / c + _w; // y
			_v[i + 8] = _s.x / c + _j; // z
			// 4
			_v[i + 9] = 0; // x
			_v[i + 10] = _w; // y
			_v[i + 11] = _s.x / c + _j; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	case XS_Y_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = _j; // x
			_v[i + 1] = 0; // y
			_v[i + 2] = _w; // z
			// 2
			_v[i + 3] = _j; // x
			_v[i + 4] = 0; // y
			_v[i + 5] = _s.y / c + _w; // z
			// 3
			_v[i + 6] = _s.x / c + _j; // x
			_v[i + 7] = 0; // y
			_v[i + 8] = _s.y / c + _w; // z
			// 4
			_v[i + 9] = _s.x / c + _j; // x
			_v[i + 10] = 0; // y
			_v[i + 11] = _w; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	};
};
XsVertices XsCreateFlatPlane(vex2f _s, size_t _sub, XsCoord _axis) {
	XsVertices _v;
	const int h = pow(4, (_sub - 1)) * 12;
	const int b = pow(2, (_sub - 1)) * 12;
	const float c = pow(2, (_sub - 1));
	_v.resize(h, 0);
	float _j = 0, _w = 0;
	switch (_axis) {
	case XS_Z_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = _j; // x
			_v[i + 1] = _w; // y
			_v[i + 2] = 0; // z
			// 2
			_v[i + 3] = _j; // x
			_v[i + 4] = _s.y / c + _w; // y
			_v[i + 5] = 0; // z
			// 3
			_v[i + 6] = _s.x / c + _j; // x
			_v[i + 7] = _s.y / c + _w; // y
			_v[i + 8] = 0; // z
			// 4
			_v[i + 9] = _s.x / c + _j; // x
			_v[i + 10] = _w; // y
			_v[i + 11] = 0; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	case XS_X_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = 0; // x
			_v[i + 1] = _w; // y
			_v[i + 2] = _j; // z
			// 2
			_v[i + 3] = 0; // x
			_v[i + 4] = _s.y / c + _w; // y
			_v[i + 5] = _j; // z
			// 3
			_v[i + 6] = 0; // x
			_v[i + 7] = _s.y / c + _w; // y
			_v[i + 8] = _s.x / c + _j; // z
			// 4
			_v[i + 9] = 0; // x
			_v[i + 10] = _w; // y
			_v[i + 11] = _s.x / c + _j; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	case XS_Y_AXIS:
		for (size_t i = 0; i < h; i += 12) {
			// 1
			_v[i] = _j; // x
			_v[i + 1] = 0; // y
			_v[i + 2] = _w; // z
			// 2
			_v[i + 3] = _j; // x
			_v[i + 4] = 0; // y
			_v[i + 5] = _s.y / c + _w; // z
			// 3
			_v[i + 6] = _s.x / c + _j; // x
			_v[i + 7] = 0; // y
			_v[i + 8] = _s.y / c + _w; // z
			// 4
			_v[i + 9] = _s.x / c + _j; // x
			_v[i + 10] = 0; // y
			_v[i + 11] = _w; // z
			_j += _s.x / c;
			if ((i + 12) % b == 0) {
				_w += _s.y / c;
				_j = 0;
			};
		};
		break;
	};
	return _v;
};
