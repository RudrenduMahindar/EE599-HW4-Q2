#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <string>
#include <vector>
using namespace std;
// Only methods which are marked by "GT" should be tested
class MaxHeap {
public:
MaxHeap(); // default constructor
MaxHeap(vector<int>& v);//overloaded constructor for initializing vector
int GetParentIndex(int i); // *GT*
int GetLeftIndex(int i); // *GT*
int GetRightIndex(int i); // *GT*
int GetLargestChildIndex(int i); // *GT*

int GetLeft(int i);
int GetRight(int i);
int GetParent(int i);

int top(); // GT
void push(int v); // GT
void pop(); // GT
void TrickleUp(int i);
void TrickleDown(int i);

private:
vector<int> data_;
};
#endif