#include <iostream>

using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:

    CircularQueue(int n){
        size=100001;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    bool Enqueue(int value){
        if(front==0 && rear ==size-1 || rear==(front-1) %(size -1)){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=value;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;

        }
    }


    int Dequeue(){
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