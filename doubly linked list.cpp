#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL; 
    }

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL; 
        }
        cout<<"memory freed for "<<value<<endl;
    }
};

void insertAtHead(Node* &tail,Node* &head,int data){
    
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp= new Node(data);

    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node*temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node*temp = new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }

}

void insertAtPosition(Node* &tail,Node*&head,int position,int d){
    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }
    
    Node*temp=head;
    int cnt=1;
    while(cnt!=position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node*nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    nodetoinsert->prev=temp;
    temp->next=nodetoinsert;

    

}

void deleteNode(Node* &head,Node* &tail, int position){
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{

        Node*temp=head;
        Node*curr=temp->next;
        int cnt=1;
        while(cnt!=position-1){
            temp=curr;  
            curr=curr->next;
            cnt++;
        }
        
        if(curr->next==NULL){
            temp->next=NULL;
            tail=curr->prev;
            curr->prev=NULL;
            delete curr; 
        }
        else{

            curr->next->prev=curr->prev;
            curr->prev=NULL;
            temp->next=curr->next;
            curr->next=NULL;
            
            delete curr;
        }
        
    }
        

}

void print(Node* &head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    Node*temp=head;
    
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;

}

int main(){
    //Node*node1=new Node(10);

    Node*head=NULL;
    Node*tail=NULL;
    print(head);
    getLength(head);
    insertAtHead(tail,head,12);
    print(head);
    insertAtHead(tail,head,15);
    print(head);
    insertAtTail(tail,head,7);
    print(head);
    insertAtPosition(tail,head,4,22);
    print(head);
    deleteNode(head,tail,4);
    print(head);
    return 0;

}