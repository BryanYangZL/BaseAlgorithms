#ifndef __SORT_HPP
#define __SORT_HPP

#include <iostream>
#include <vector>

using namespace std;

class Sort {
   public:
    virtual void sort(vector<int> &v) = 0;

    static void dump(vector<int> &v) { dump(v, 0, v.size()); };

    static void dump(vector<int> &v, int begin, int end) {
        for (int i = begin; i < end; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    };

    static bool verify(vector<int> &v, vector<int> &o_v) {
        bool successful = false;

        if (v.size() == o_v.size()) {
            successful = true;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] != o_v[i]) {
                    successful = false;
                    break;
                }
            }
        }

        if (!successful) {
            dump(v);
            dump(o_v);
        }

        return successful;
    };
};

#endif