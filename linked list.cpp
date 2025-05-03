#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
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

void insertAtHead(Node*&head,int d){//reference is used so that another copy 
    Node*temp=new Node(d);          //wont get created, only original changes
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail= tail->next;
}

void insertAtPosition(Node* &tail,Node*&head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    Node*temp=head;
    int cnt=1;
    while(cnt!=position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node*nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

    

}

void deleteNode(int position,Node* &head,Node* &tail){
    if(position==1){
        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return; 
    }
    Node*temp=head;
    Node*curr=head->next;
    int cnt=1;  
    while(cnt!=position-1){
        temp=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr->next==NULL){
        tail=temp;
    }
    temp->next= curr->next;
    curr->next=NULL;
    delete curr;


}

Node* reverseLL(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    
    Node*prev=NULL;
    Node*curr=head;
    while(curr->next!=NULL){
        Node*forward=curr->next;
        
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

void printLL(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    Node*node1=new Node(10);

    Node*head=node1;
    Node*tail=node1;
    printLL(head);
    
    insertAtHead(head,12);
    printLL(head);
    insertAtHead(head,15);
    printLL(head);
    insertAtTail(head,7);
    printLL(head);
    insertAtPosition(tail,head,4,22);
    printLL(head);
    deleteNode(4,head,tail);
    printLL(head);
    return 0;

}