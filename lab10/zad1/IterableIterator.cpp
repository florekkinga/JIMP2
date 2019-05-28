//
// Created by kinga on 5/14/19.
//

#include "IterableIterator.h"
#include <vector>
using namespace std;

ZipperIterator::ZipperIterator(vector<int>::const_iterator left_begin,
                               vector<string>::const_iterator right_begin,
                               vector<int>::const_iterator left_end,
                               vector<string>::const_iterator right_end) {
    this->left_begin = left_begin;
    this->right_begin = right_begin;
    this->left_end = left_end;
    this->right_end = right_end;
}

pair<int, string> ZipperIterator::Dereference() const{
    int intvalue = *left_begin;
    string stringvalue = *right_begin;
    return make_pair(intvalue, stringvalue);
}

IterableIterator& ZipperIterator::Next() {

    if(left_begin <=left_end)
        ++left_begin;

    if(right_begin <=right_end)
        ++right_begin;
}

bool ZipperIterator::NotEquals(const IterableIterator &other) const {
    if (make_pair(*left_begin, *right_begin) == other.Dereference())
        return false;
    else
        return true;
}


