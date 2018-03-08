#ifndef __QUICK_HPP
#define __QUICK_HPP

#include "sort.hpp"

class Quick : public Sort {
   public:
    // 通过基点，不断分区执行排序，直到排序完成
    void sort(vector<int> &v) { qs(v, 0, v.size() - 1); }

   private:
    void qs(vector<int> &v, int begin, int end) {
        int mid;

        if (begin >= end) {
            return;
        }

        mid = partition(v, begin, end);

        qs(v, begin, mid - 1);
        qs(v, mid + 1, end);
    }

    int partition(vector<int> &v, int begin, int end) {
        int pivot = v[begin];
        int l = begin + 1, r = end;

        while (true) {
            while (v[l] <= pivot && r >= l) l++;
            while (v[r] > pivot && r >= l) r--;
            if (l > r) break;
            swap(v[r], v[l]);
        }
        swap(v[begin], v[r]);

        return r;
    }
};

#endif