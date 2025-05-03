#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }

    int num=s.top();
    s.pop();  
    solve(s,x);

    s.push(num);
}


stack<int> insertAtBottom(stack<int> &stack,int x){
    

    solve(stack,x);
    return stack;


}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int num=s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,num);
    
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}


int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(25);
    s.push(30);
    s.push(39);
    insertAtBottom(s,5);
    print(s);
    cout<<"top= "<< s.top()<<endl;
    reverseStack(s);
    print(s);
    cout<<"top= "<< s.top()<<endl;
    return 0;
}