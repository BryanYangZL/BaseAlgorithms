#ifndef __BUBBLE_HPP
#define __BUBBLE_HPP

#include "sort.hpp"

class Bubble : public Sort {
   public:
    // 相邻的逐个比较，每次冒泡一个数
    void sort(vector<int> &v) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size() - i; j++) {
                if (v[j] > v[j + 1]) {
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }
};

#endif