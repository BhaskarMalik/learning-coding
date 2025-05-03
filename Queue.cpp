#include <iostream>

using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(){
       size=100001;
       arr=new int[size];
       front=0;
       rear=0; 
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void Enqueue(int data){
        if(rear==size){
            cout<<"Queue is full "<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    int Dequeue(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            int ans= arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }

    int Front(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }
};


int main(){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(4);
    q.Enqueue(6);
    q.Enqueue(8);

    cout<<q.Dequeue()<<endl;

    cout<<q.isEmpty()<<endl;

    cout<<q.Front()<<endl;
    return 0;
}