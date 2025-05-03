#include<iostream>

using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int n){
        
        if(top+1<size){
            top++;
            arr[top]=n;
        }
        else{
            cout<<"space unavailable"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty";
        }
        else{
            //cout<<arr[top]<<" ";
            top--;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
};



int main(){

    stack st(5);


    st.push(10);
    st.push(15);
    st.push(22);
    st.push(29);
    st.push(38);
    cout<<st.peek()<<endl;
    //st.pop();
    st.push(100);
    //cout<<st.peek()<<endl;

    //st.pop();
    //cout<<st.peek()<<endl;
    
    //st.pop();

    if(st.isEmpty()){
        cout<<"stack empty"<<endl;
    }   
    else{
        cout<<"stack not empty"<<endl;
    }


    return 0;
}