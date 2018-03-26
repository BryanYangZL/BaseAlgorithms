#ifndef __SELECT_HPP
#define __SELECT_HPP

#include "sort.hpp"

class Select : public Sort {
   public:
    void sort(vector<int> &v) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
            }
        }
    }
};

#endif