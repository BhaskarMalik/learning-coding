#include <iostream>

using namespace std;

void swapN(int &a, int &b){
    int temp= a;
    a=b;
    b=temp;
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<"the orginal numbers are a = "<<a<<" and b = "<<b<<endl;
    swapN(a,b);
    cout<<"after sawpping numbers are a = "<<a<<" and b = "<<b<<endl;
    return 0;
}