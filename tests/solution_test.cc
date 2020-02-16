#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
TEST(ParentIndexTest, ReturnsValidParentIndex) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=4;
  int actual=s.GetParentIndex(i);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}
TEST(LeftIndexTest, ReturnsValidLeftIndex) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetLeftIndex(i);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
TEST(RightIndexTest, ReturnsValidRightIndex) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetRightIndex(i);
  int expected = 4;
  EXPECT_EQ(expected, actual);
}
TEST(LargestChildIndexTest, ReturnsValidIndex) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetLargestChildIndex(i);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
/*TEST(LeftTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetLeft(i);
  int expected = 78;
  EXPECT_EQ(expected, actual);
}
TEST(RightTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetRight(i);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}
TEST(ParentTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int i=1;
  int actual=s.GetParent(i);
  int expected = 216;
  EXPECT_EQ(expected, actual);
}*/
TEST(TopTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int actual=s.top();
  int expected = 216;
  EXPECT_EQ(expected, actual);
}
TEST(PushTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  int val=625;
  s.push(val);
  int actual=s.top();
  int expected = 625;
  EXPECT_EQ(expected, actual);
}
TEST(PopTest, ReturnsValidElement) {
  vector<int> v={1,12,45,78,2,108,26,216};
  MaxHeap s(v);
  s.pop();
  int actual=s.top();
  int expected = 108;
  EXPECT_EQ(expected, actual);
}