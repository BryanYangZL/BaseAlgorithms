#ifndef __MERGE_HPP
#define __MERGE_HPP

#include "sort.hpp"

class Merge : public Sort {
   public:
    void sort(vector<int> &v) { ms(v, 0, v.size() - 1); }

   private:
    void ms(vector<int> &v, int l, int r) {
        if (l >= r) return;

        int mid = (r + l) / 2;
        ms(v, l, mid);
        ms(v, mid + 1, r);

        merge(v, l, mid, r);
    }

    void merge(vector<int> &v, int l, int mid, int r) {
        vector<int> tmp(r - l + 1);
        int i = l, j = mid + 1;
        int k;

        for (k = 0; k < (r - l + 1); k++) {
            if (i <= mid && j <= r) {
                if (v[i] < v[j]) {
                    tmp[k] = v[i];
                    i++;
                } else {
                    tmp[k] = v[j];
                    j++;
                }
            } else if (i <= mid) {
                tmp[k] = v[i++];
            } else {
                tmp[k] = v[j++];
            }
        }

        for (k = 0; k < (r - l + 1); k++) {
            v[l + k] = tmp[k];
        }
    }
};

#endif