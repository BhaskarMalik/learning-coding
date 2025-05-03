#include <iostream>

using namespace std;

int HCF(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int LCM(int a, int b){
    return (a*b/HCF(a,b));
}

int main(){ 
    int a, b;
    cin>>a>>b;
    cout<<"the HCF of the numbers is: "<<HCF(a,b)<<endl;
    cout<<"the lcm of the numbers is: "<<LCM(a,b)<<endl;
    return 0;
}