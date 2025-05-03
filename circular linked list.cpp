#include <iostream>//this code is not working when deleting the 
                   // first element from the CLL.                 

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


void insertNode(Node* &tail,int val,int data){
    if(tail==NULL){
        Node*node1=new Node(data);
        tail=node1;
        node1->next=node1;
    }
    else{
        Node*curr=tail;
        while(curr->data!=val){
            curr=curr->next;
        }
        
        Node*temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node*tail,int val){
    
    if(tail==NULL){
        return;
    }
 

    else{

        Node*temp=tail;
        Node*curr=tail->next;
        while(curr->data!=val){
            temp=curr;
            curr=curr->next;
        }
        temp->next=curr->next;
        if(curr==temp){
            tail=NULL;
        }
        else if(tail==curr){
            tail=temp;
        }
        
        curr->next=NULL;
        delete curr;
    }

}

bool checkCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    else{
        return false;
    }
}

void print(Node* &tail){
    if(tail==NULL){
        return;
    }
    Node*temp=tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}




int main(){
    //Node*node1=new Node(10);
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,8);
    print(tail);
    insertNode(tail,8,10);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    deleteNode(tail,3);
    print(tail);

    if(checkCircular(tail)){
        cout<<"linked list is curcular"<<endl;
    }
    else{
        cout<<"linked list is not circular"<<endl;
    }

    return 0;

}