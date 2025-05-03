#include <iostream>

using namespace std;

int main(){
    int a, b,c ;

    cin>>a>>b>>c;

    if(a<b){
        if(b<c  && c>a){
            cout<<"c is max";
        }
        else if(b>c){
            cout<<"b is max";
        }
        else{
            cout<<"a is max";
        }
    }
    if(a>b){
        if(b>c){
            cout<<"a is max";
        }
        else if(b<c && c>a){
            cout<<"c is max";
        }
        else{
            cout<<"a is max";
        }
    }

    return 0;
}