#include <iostream>
#include <stack>

using namespace std;

bool isValidParanthesis(string brackets){
    stack<char> s;
    for(int i=0;i<brackets.length();i++){
        char ch=brackets[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top=s.top();
                if(ch==')' && top=='(' || ch==']' && top=='[' || ch=='}' && top=='{'){
                    s.pop();
                }
                else{
                return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    string st="({})[]";
    

    cout<<isValidParanthesis(st)<<endl;
    return 0;
}