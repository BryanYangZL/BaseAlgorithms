#ifndef __SHELL_HPP
#define __SHELL_HPP

#include "sort.hpp"

class Shell : public Sort {
   public:
    void sort(vector<int> &v) { shell(v); }

   private:
    void insert(vector<int> &v, int dk) {
        int tmp, i, j, k;

        for (i = 0; i < dk; i++) {
            // insert sort
            for (j = i + dk; j < v.size(); j += dk) {
                tmp = v[j];
                for (k = j - dk; k >= 0 && tmp < v[k]; k -= dk) {
                    v[k + dk] = v[k];
                }
                v[k + dk] = tmp;
            }
        }
    }

    void shell(vector<int> &v) {
        int dk = v.size() / 2;
        while (dk > 0) {
            insert(v, dk);
            dk /= 2;
        }
    }
};

#endif