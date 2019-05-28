#include <iostream>
using namespace std;

template <class T>
class Array {
    T* array_;
    size_t size_;
public:
    Array (size_t size): array_{new T[size]}, size_{size} {};
    ~Array() {
            delete[] array_;
    }

    T max() {
        T max_el;
        for (int i = 0; i<size_; i++){
            T el  = array_[i];
            if(el > max_el) {
                max_el = el;
            }
        }
        return max_el;
    }


    T &operator[](size_t index) {
        return array_[index];
    }
};

int main() {
    Array<int> arr(3);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    cout<< arr.max();
    return 0;
}