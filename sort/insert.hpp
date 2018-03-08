#ifndef __INSERT_HPP
#define __INSERT_HPP

#include "sort.hpp"

class Insert : public Sort {
   public:
    // 把第一个数当成己经排序好的
    // 之后的数依次在己经排序好的序列中找到位置插入
    void sort(vector<int> &v) {
        int tmp;
        int i, j;

        for (i = 1; i < v.size(); i++) {
            tmp = v[i];
            for (j = i - 1; j >= 0 && tmp < v[j]; j--) {
                v[j + 1] = v[j];
            }
            v[j + 1] = tmp;
        }
    }
};

#endif