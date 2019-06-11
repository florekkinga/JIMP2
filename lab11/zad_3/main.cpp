#include <iostream>
#include <string>
using namespace std;

template <class T>
class Query {
private:
    string field_name;
    string field_value;
public:
    Query<T>(string name, string value): field_name{name}, field_value{value} {}
    string get_name() { return field_name; }
    string get_value() { return field_value; }
};

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

    virtual T FindBy(Query<T>) = 0;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
