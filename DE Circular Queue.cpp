#include <iostream>

using namespace std;

class Dequeue{
    int * arr;
    int front;
    int rear;
    int size;
    public:

    Dequeue(int n){
        size=n;
        arr=new int[size];
        front = rear= -1;
    }

    bool pushFront(int x){
        if((front==0 && rear==size-1) || (rear=(front-1)%(size-1)) ){
            return false;
        }
        else if(front==-1){
            front =rear=0;
        }
        else if(front==0 && rear !=size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    bool pushRear(int x){
        if((front==0 && rear==size-1) || (rear=(front-1)%(size-1)) ){
            return false;
        }
        else if(front==-1){
            front =rear=0;
        }
        else if(rear==size-1 && front !=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    int popRear(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front == rear){
            int ans=arr[front];
            front=rear=-1;
            
        }
        else if(rear==0){
            int ans=arr[rear];
            rear = size-1;
            
        }
        else{
            int ans=arr[rear];
            front --;
            
        }
        return ans;

    }
    int popFront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else if(front == rear){
            int ans=arr[front];
            front=rear=-1;
            return ans;
        }
        else if(front==size-1){
            int ans=arr[front];
            front=0;
            return ans;
        }
        else{
            int ans=arr[front];
            front ++;
            return ans;
        }
    }


};

int main(){

    return 0;
}