#include <iostream>

using namespace std;

int main(){
    int a,fac=1;
    cin>>a;
    if(a<0){
        cout<<"fac cannot be determined";

    }
    else{
        int i= 1;
        while(i<=a){
           fac =fac*i;
           i++;
        }
        cout<<"factorial of "<<a<<" = "<<fac;
    } 
    return 0;
}