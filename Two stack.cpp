#include<iostream>

using namespace std;

class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }

    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"stack overflowed"<<endl;
        }

    }
    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"stack overflowed"<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        
        }
        else{
            cout<<"stack empty"<<endl;
        }
    }
    
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            cout<<"stack empty"<<endl;
        }
    }


};

int main(){

    TwoStack st(5);
    st.push1(2);
    st.push1(5);
    st.push2(8);

    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;



    return 0;
}