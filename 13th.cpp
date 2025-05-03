//Write a function to find the sum of the digits of a number.

#include <iostream>

using namespace std;


int sumOfdigits(int n){
    int count=0;
    while(n>0){
        count+= (n%10);
        n=n/10;
    }
    return count;
}

int main(){
    int a;
    cin>>a;
    cout<<"sum of all digits of "<<a<<" is :"<<sumOfdigits(a);


    return 0;
}