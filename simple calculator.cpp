#include <iostream>

using namespace std;

int simpleCalculator(int a,int b,char op){
    if(op=='+'){
        return a+b;
    }
    else if(op=='-'){
        return a-b;
    }
    else if(op=='*'){
        return a*b;
    }
    else if(op=='/'){
        return a/b;
    }
    
}

int main(){
    int a,b;
    char op;
    cout<<"Enter the operation you want: ";
    cin>>a>>op>>b;

    cout<<"Solution = " <<simpleCalculator(a,b,op);

    return 0;
}