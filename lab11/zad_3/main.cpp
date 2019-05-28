#include <iostream>
using namespace std;
template <class T>
class Repository{
    T *list_;
    size_t size_;
public:
    Repository(size_t size): list_{new T[size]}, size_ {size}{};
    ~Repository() {
        delete[] list_;
    }
    T &operator[](size_t index){
        return list_[index];
    }

    size_t Size() {
        return size_;
    }

    size_t NextId(){
        size_t id = 0;
        while(list_[id] != NULL)
            id+=1;
        return id+1;
    }

    auto FindBy(Query){

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}