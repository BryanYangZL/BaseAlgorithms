#include "bubble.hpp"
#include "insert.hpp"
#include "merge.hpp"
#include "quick.hpp"
#include "select.hpp"
#include "shell.hpp"

#include <iostream>
#include <vector>

#include "gtest/gtest.h"

class SortTest : public testing::Test {
   protected:
    virtual void SetUp() { m_v = v; }
    virtual void TearDown() { ASSERT_TRUE(Sort::verify(v, o_v)); }

   public:
    vector<int> v = {100, 99, 18, 77, 26, 1, -1, 32, 99, 76, 78};
    vector<int> m_v = v;
    vector<int> o_v = {-1, 1, 18, 26, 32, 76, 77, 78, 99, 99, 100};
};

TEST_F(SortTest, Bubble) {
    Bubble bubble;
    bubble.sort(v);
}

TEST_F(SortTest, Insert) {
    Insert insert;
    insert.sort(v);
}

TEST_F(SortTest, Quick) {
    Quick quick;
    quick.sort(v);
}

TEST_F(SortTest, Merge) {
    Merge merge;
    merge.sort(v);
}

TEST_F(SortTest, Select) {
    Select select;
    select.sort(v);
}

TEST_F(SortTest, Shell) {
    Shell shell;
    shell.sort(v);
}