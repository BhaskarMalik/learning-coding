#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &inputStack,int count,int N){
    if(count==N/2){
        inputStack.pop();
        return;
    }
    int num =inputStack.top();
    inputStack.pop();
    solve(inputStack,count+1,N);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack,int N){
    int count=0;

    solve(inputStack,count,N);

}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(25);
    s.push(30);
    s.push(39);
    print(s);
    deleteMiddle(s,5);

    print(s);
    return 0;
}