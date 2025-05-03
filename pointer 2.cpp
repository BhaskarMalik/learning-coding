#include<iostream>

using namespace std;

void change(int &a){// passs by reference using pointers(here & is not used as an address symbol it is a symbol used for alias)
    a=20;
}
void change1(int * ptr){// passs by reference using alias
    *(ptr)=20;
}


int main(){
    int a=10;
    //change(a);// rather give address of a to get the changed value
    //change(a);
    int arr[]={1,2,3,4,5};//name of the array is a pointer and give the address of 1st index of array
    cout<<*arr<<endl;// array pointer is a constant pointer i.e. it cannot be changed
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;

    
    int *ptr=&a;
    cout<<ptr<<endl;


    //ptr++;//pointer increment or decrement just increases or decreases the address by the size of datatypes
    ptr+=3;

    
    cout<<ptr<<endl;
    return 0;
} 