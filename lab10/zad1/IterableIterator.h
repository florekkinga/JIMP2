//
// Created by kinga on 5/14/19.
//

#ifndef ZAD1_ITERABLEITERATOR_H
#define ZAD1_ITERABLEITERATOR_H

#include <string>
#include <vector>
using namespace std;


class IterableIterator {

public:
    virtual pair<int, string> Dereference() const = 0;
    virtual IterableIterator &Next() = 0;
    virtual bool NotEquals(const IterableIterator &other) const = 0;
    ~IterableIterator() = default;

};


class ZipperIterator : public IterableIterator {
private:
    vector<int>::const_iterator left_begin;
    vector<string>::const_iterator right_begin;
    vector<int>::const_iterator left_end;
    vector<string>::const_iterator right_end;

public:

    ZipperIterator(vector<int>::const_iterator left_begin,
                   vector<string>::const_iterator right_begin,
                   vector<int>::const_iterator left_end,
                   vector<string>::const_iterator right_end);

    virtual pair<int, string> Dereference() const;
    virtual IterableIterator &Next();
    virtual bool NotEquals(const IterableIterator &other) const;

};

#endif //ZAD1_ITERABLEITERATOR_H
