#include<iostream>

using namespace std;

int main(){

    int *ptr2;//if ptr2=100
    int *ptr1=ptr2+2;//then ptr1 = 108(i.e. increased by 2 int spaces i.e. by 8 bytes)
    
    cout<<ptr1-ptr2<<endl;//this will give me the number of blocks of the given datatype(here it is int)
    int *ptr;
    int *ptr0;
    cout<<(ptr<=ptr0);
    cout<<(ptr==ptr0);    
    return 0;
} 