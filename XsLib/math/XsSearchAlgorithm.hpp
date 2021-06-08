template <typename _T>
void insertionSort(_T __arr[], int __size) {
    int __i, __key, __j;
    for (__i = 1; __i < __size; __i++) {
        __key = __arr[__i];
        __j = __i - 1;
        while (__j >= 0 && __arr[__j] > __key)
        {
            __arr[__j + 1] = __arr[__j];
            __j = __j - 1;
        }
        __arr[__j + 1] = __key;
    }
};
template <typename _T>
void insertionSort(std::vector<_T> __arr) {
    int __i, __key, __j;
    for (__i = 1; __i < __arr.size(); __i++) {
        __key = __arr[__i];
        __j = __i - 1;
        while (__j >= 0 && __arr[__j] > __key)
        {
            __arr[__j + 1] = __arr[__j];
            __j = __j - 1;
        }
        __arr[__j + 1] = __key;
    }
};