#include <iostream>
#include "src/lib/solution.h"

int main()
{
    
    vector<int> v={1,12,45,78,2,108,26,216};
    MaxHeap s(v);
    int i=1;
    cout<<"parent="<<s.GetParent(i)<<" parent index="<<s.GetParentIndex(i)<<endl;
    cout<<"top="<<s.top()<<endl;
    i=7;
    cout<<"largestchild of index 7 = "<<s.GetLargestChildIndex(i)<<endl;
    s.pop();
    cout<<"top after 1st pop = "<<s.top()<<endl;
    int val=525;
    s.push(val);
    cout<<"top after push of "<<val<<" = "<<s.top()<<endl;
    return EXIT_SUCCESS;
}