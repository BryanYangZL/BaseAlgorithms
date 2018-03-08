#include "bubble.hpp"
#include "insert.hpp"
#include "quick.hpp"

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **args) {
    vector<int> v = {100, 99, 18, 77, 26, 1, -1, 32, 99, 76};
    vector<int> m_v = v;
    vector<int> o_v = {-1, 1, 18, 26, 32, 76, 77, 99, 99, 100};
    Bubble bubble;
    Insert insert;
    Quick quick;

    bubble.sort(v);
    Sort::verify(v, o_v);

    v = m_v;
    insert.sort(v);
    Sort::verify(v, o_v);

    v = m_v;
    quick.sort(v);
    Sort::verify(v, o_v);

    cout << "sort test finish" << endl;

    return 0;
}