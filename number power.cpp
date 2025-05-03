#include <iostream>
#include <vector>

using namespace std;

double myPow(double x, int n){
    if(n==0){
        return 1.0;
    }
    if(x==0){
        return 0.0;
    }
    if(x== 1){
        return 1.0;
    }
    if(x== -1 && n%2==0){
        return 1.0;
    }
    if(x== -1 && n%2!=0){
        return -1.0;
    }
    
    
    long binf=n;
    if(x<0){
        x=1/x;
        binf= -binf;
    }
    double ans=1;

    while(binf>0){
        if(binf%2==1){
            ans*=x;
        }
        x*=x;
        binf/=2;
    }

    return ans;
}

int main(){
    int n;
    double x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power to calculate of the number: ";
    cin>>n;

    cout<<"The answer = "<<myPow(x,n);


    return 0;
}