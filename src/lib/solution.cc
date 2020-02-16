#include "solution.h"
using namespace std;

MaxHeap::MaxHeap(vector<int>& v)
{
  for(auto& i:v)
    push(i);
}
int MaxHeap::GetParentIndex(int i)
{
  if(i==0)
    return -1;
  return (i-1)/2;  
}
int MaxHeap::GetLeftIndex(int i)
{
  if((2*i)+1>=data_.size())
    return -1;
  return 2*i+1;  
}
int MaxHeap::GetRightIndex(int i)
{
  if((2*i)+2>=data_.size())
    return -1;
  return 2*i+2; 
}
int MaxHeap::GetLargestChildIndex(int i)
{
  if((2*i)+1>=data_.size())
    return -1;
  else
  {
    if(((2*i)+2>=data_.size()))
      return (2*i+1);
    else{
      int right=GetRight(i);
      int left=GetLeft(i);
      if(right>left)
        return GetRightIndex(i);
      else
        return GetLeftIndex(i);
    }  
  }
}
int MaxHeap::GetLeft(int i)
{
  if((2*i)+1>=data_.size())
    return -1;
  return data_.at(2*i+1); 
}
int MaxHeap::GetRight(int i)
{
  if((2*i)+2>=data_.size())
    return -1;
  return data_.at(2*i+2);
}
int MaxHeap::GetParent(int i)
{
  if(i==0)
    return -1;
  return data_.at((i-1)/2);   
}
int MaxHeap::top()
{
  if(!data_.empty())
    return data_.at(0);
  return -1;  
}
void MaxHeap::push(int v)
{
  data_.push_back(v);
  int i=data_.size()-1;
  TrickleUp(i);
}
void MaxHeap::pop()
{
  if(!data_.empty())
  {
    data_[0]=data_.back();
    data_.pop_back();
    TrickleDown(0);
  }
}
void MaxHeap::TrickleUp(int i)
{// check if node at index i and its parent violates the heap property, and i can,t be 0
	while (i!=0 && (GetParent(i) < data_[i])) 
	{
		// swap the two if heap property is violated
		swap(data_[i], data_[GetParentIndex(i)]);
		// apply the same on parent
		i=GetParentIndex(i);
	}
}
void MaxHeap::TrickleDown(int i)
{
  // get left and right child indices of node at index i
		int left = GetLeftIndex(i);
		int right = GetRightIndex(i);
		int largest = i;
		// compare data_[i] with its left and right child and find largest value
		if (left < data_.size() && data_[left] > data_[i])
			largest = left;

		if (right < data_.size() && data_[right] > data_[largest])
			largest = right;
		// swap with child having greater value and call trickledown on the child
		if (largest != i) {
			swap(data_[i], data_[largest]);
			TrickleDown(largest);
		}
}