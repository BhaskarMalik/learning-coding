//Write a function to calculate a^b  using a loop.

#include <iostream>

using namespace std;

int calPower(int a,int b){
    int ans=1;
    if(b==0){
        return 1;
    }
    else{
        while(b>0){
            ans*= a;
            b--;
            
        }
        return ans;
        
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"a^b using loop = "<<calPower(a,b);

    return 0;
}