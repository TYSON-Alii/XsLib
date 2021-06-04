template <typename _t>
class vextor {
private:
	volatile size_t _size = 0;
	_t* elem = new _t[0];
public:
	size_t size() { return _size; };
	_t& front() { return elem[0]; };
	_t& back() { return elem[_size - 1]; };
	_t& operator[](size_t _n) { return elem[_n]; };
	void resize(size_t _n, _t _s) {
		if (_n < _size) {
			_t* _copy = new _t[_size];
			for (size_t i = 0; i < _size; i++)
				_copy[i] = elem[i];
			elem = new _t[_n];
			for (size_t i = 0; i < _size; i++) {
				elem[i] = _copy[i];
			};
			_size = _n;
			delete _copy;
		}
		else {
			_t* _copy = new _t[_size];
			for (size_t i = 0; i < _size; i++)
				_copy[i] = elem[i];
			elem = new _t[_n];
			for (size_t i = 0; i < _size; i++) {
				elem[i] = _copy[i];
			};
			for (size_t i = _size; i < _n; i++) {
				elem[i] = _s;
			};
			_size = _n;
			delete _copy;
		};
	};
	void resize(size_t _n) {
		_t* _copy = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			_copy[i] = elem[i];
		elem = new _t[_n];
		for (size_t i = 0; i < _size; i++) {
			elem[i] = _copy[i];
		};
		_size = _n;
		delete _copy;
	};
	void erase(size_t _v) {
		_size--;
		_t* _copy = new _t[_size];
		for (size_t i = 0; i < _v; i++)
			_copy[i] = elem[i];
		for (size_t i = _v; i < _size; i++)
			_copy[i] = elem[i + 1];
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void insert(size_t _v, _t _c) {
		_size++;
		_t* _copy = new _t[_size];
		for (size_t i = 0; i < _v; i++)
			_copy[i] = elem[i];
		_copy[_v] = _c;
		for (size_t i = _v + 1; i < _size; i++)
			_copy[i] = elem[i - 1];
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void push_back(_t _v) {
		_t* _copy = new _t[_size + 1];
		for (size_t i = 0; i < _size; i++)
			_copy[i] = elem[i];
		_copy[_size] = _v;
		_size++;
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void pop_back(_t _v) {
		_t* _copy = new _t[_size - 1];
		for (size_t i = 0; i < _size - 1; i++)
			_copy[i] = elem[i];
		_size--;
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void push_front(_t _v) {
		_t* _copy = new _t[_size + 1];
		_copy[0] = _v;
		for (size_t i = 1; i < _size; i++)
			_copy[i] = elem[i];
		_size++;
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void pop_front(_t _v) {
		_t* _copy = new _t[_size - 1];
		for (size_t i = 1; i < _size; i++)
			_copy[i - 1] = elem[i];
		_size--;
		elem = new _t[_size];
		for (size_t i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void swap() {
		_t* _copy = new _t[_size];
		for (int i = 0; i < _size; i++)
			_copy[i] = elem[_size - i - 1];
		for (int i = 0; i < _size; i++)
			elem[i] = _copy[i];
		delete _copy;
	};
	void copy(vextor<_t>& _v) {
		_v.resize(_size, NULL);
		for (size_t i = 0; i < _size; i++)
			_v[i] = elem[i];
	};
	void fill(_t _v) {
		for (size_t i = 0; i < _size; i++)
			elem[i] = _v;
	};
	void fill(vextor<_t> _v) {
		if (_v < _size)
			for (size_t i = 0; i < _v; i++)
				elem[i] = _v[i];
		else
			for (size_t i = 0; i < _size; i++)
				elem[i] = _v[i];
	};
};