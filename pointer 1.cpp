#include<iostream>
#include <vector>

using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    int ** parptr=&ptr;
    int * null=NULL;
    



    // * is used to get the value stored in the pointer or address 
    // & is used to get the address of the variable or the pointer


    // pass by reference is: when rather than creating a copy of the original variable in the main function
    // the original variable itself is passed or given to a function (this change the value
    // of the original variable)

    // pass by reference can be done in ways either by using pointer to the variable
    // or by giving the reference(alias: i.e. another name for the same variable or we can say person) of variable


    //cout<<null<<endl;
    //cout<<*(null)<<endl;       this line give an error as the pointer is a null pointer and it cannot be dereferenced
    //cout<<&a<<endl;
    //cout<<ptr<<endl;
    //cout<<&ptr<<endl;
    //cout<<parptr<<endl;


    
    //cout<<*(&a)<<endl;
    //cout<<*(ptr)<<endl;
    //cout<<*(parptr)<<endl;
    //cout<<**(parptr)<<endl;

    return 0;
}