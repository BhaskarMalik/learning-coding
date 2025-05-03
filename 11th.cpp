#include <iostream>
using namespace std;

void checkPrime(int n){
    if(n<=1){
        cout<<"number cannot be 1,0,or negetive";
    }
    else{
        for(int i=2;i<=n;i++){
            if(n%i!=0){
                cout<<"number is prime";
                break;
            }
            else{
                cout<<"number is not prime";
                break;
            }
        }
        
    }

    //if(n%1!=0 && n%n!=0){
    //    cout<<n<<" is prime";
    //}
    //else{
    //    cout<<n<<" is not prime";
    //}
}

int main(){
    int a;
    cin>>a;

    checkPrime(a);

    return 0;
}