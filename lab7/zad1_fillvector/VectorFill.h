//
// Created by kinga on 4/16/19.
//

#ifndef ZAD1_FILLVECTOR_VECTORFILL_H
#define ZAD1_FILLVECTOR_VECTORFILL_H

#include <vector>

using namespace std;

class VectorFill : public std::vector<int> {
private:
    vector<int> vector_to_fill;
public:
    VectorFill() : vector() {}

    void UniformFIll(int);
    void IncrementalFill(int, int);
};


#endif //ZAD1_FILLVECTOR_VECTORFILL_H
