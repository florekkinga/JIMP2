//
// Created by kinga on 4/16/19.
//

#include "VectorFill.h"

void VectorFill::UniformFIll(int value=0) {
    for (auto &n : vector_to_fill) {
        n = value;
    }
}

void VectorFill::IncrementalFill(int start, int step = 1) {
    int i = start;
    for (auto n : vector_to_fill) {
        n = i;
        i += step;
    }
}

