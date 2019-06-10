#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template <class T>
class Array {
    T* array_;
    size_t size_;
public:
    Array() : array_ {new T[1]}, size_{1} {}

    explicit Array (size_t size): array_{new T[size]}, size_{size} {}
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


    auto &operator[](size_t index) {
        if (index <size_)
            return array_[index];
        else


    }

    void append(T new_el){
        array_[size_ +1] = new_el;
        size_=+1;
    }
};

template <class T>
class Tree {

public:
    Array<T> nodes;
    explicit Tree(T node) {
        nodes = Array<T> (1);
        nodes.append(node);
    }
    void Insert ( T node){
        nodes.append(node);
    }
    void left(){
        return nodes []
    }
};




template <class T>
auto InOrder (Tree<T> tree){
    vector<T> result;
    vector<T> s;

    T node = tree.nodes[0];
    s.emplace_back(node);
    while(s.empty() == false){
        try {
            while (true){
                s.emplace_back(node);
                node = node.
            }
        }
    }
    return result;
}


template <class T>
auto PostOrder (Tree<T> tree){
    vector<T> result;
    while(tree.nodes[0] != NULL || tree.nodes.empty() == false)
        return result;
}


template <class T>
auto PreOrder (Tree<T> tree){
    vector<T> result;
    while(tree.nodes[0] != NULL || tree.nodes.empty() == false)
        return result;
}


int main() {
    Tree<int> tree{5};
    tree.Insert(9);

    cout << "PreOrder: ";
    for(const int &value_in_tree : PreOrder(tree)) {
        cout<<value_in_tree << " ";
    }
    cout << "InOrder: ";
    for(const int &value_in_tree : InOrder(tree)) {
        cout<<value_in_tree << " ";
    }
    cout << "PostOrder: ";
    for(const int &value_in_tree : PostOrder(tree)) {
        cout<<value_in_tree << " ";
    }
    return 0;
}