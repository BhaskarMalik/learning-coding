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

void insertAtHead(Node*&head,int d){//reference(&) is used so that another copy 
    Node*temp=new Node(d);          //wont get created, only original changes
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail= temp;
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

/*int reverse1(Node* head){
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    else{
        return reverse1(head->next);  
    }
} */

Node*reverse1(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
   
    Node* miniHead= reverse1(head->next);  

    head->next->next=head;
    head->next=NULL;

    return miniHead;

} 

Node* reverseLL(Node* &head){
    
    return reverse1(head);
    
    
    
    /*if(head==NULL || head->next==NULL){
        return head->data;
    }
    
    
    Node*prev=NULL;
    Node*curr=head;
    while(curr!=NULL){
        Node*forward=curr->next;
        
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev->data;*/
}

Node* reverseK(Node* head,int k){
    if(k==0){
        cout<<"A group of 0 elements cannot be created you dumb person"<<endl;
        return head;
    }
    
    if(head==NULL){
        return head;
    }
    else{
        Node* next=NULL;
        Node*curr=head;
        Node*prev=NULL;
        int cnt=0;

        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }

        if(next!=NULL){

            head->next=reverseK(next,k);
        }

        return prev;
    }
}

int getLength(Node* head){
    int len =0;
    while(head!=NULL){
        len++;
        head=head->next;
    }

    return len;
}

int middleNode(Node* head){
    int len=getLength(head)/2;

    //int ans=len/2;

    Node*temp=head;
    int cnt=0;
    while(cnt!=len){
        temp=temp->next;
        cnt++;
    }

    return temp->data;


}

int middleNode1(Node*head){
    if(head==NULL){
        return -1;
    }
    else if(head->next==NULL){
        return head->data;
    }
    
    else{
        Node*fast=head;
        Node*slow=head;
        while(fast!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==NULL){
                return slow->data;
            }
        }

        
        return slow->data;
    }
        
} 

void printLL(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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


int main(){
    Node*node1=new Node(10);

    Node*head=node1;
    Node*tail=node1;
    printLL(head);
    
    insertAtHead(head,12);
    printLL(head);
    insertAtHead(head,15);
    printLL(head);
    insertAtTail(tail,7);
    printLL(head);
    insertAtPosition(tail,head,4,22);
    printLL(head);
    deleteNode(4,head,tail);
    printLL(head);

    head=reverseK(head,2);//for getting the reversed linked list i have to 
    printLL(head);//change the head first rather than trying to print the head.
    //cout<<reverseLL(head)->data<<endl; //this line prints the head of the reversed LL rather than giving me the reverse LL itself.   
    
    //cout<<reverseK(head,2);
    
    if(checkCircular(tail)){
        cout<<"linked list is curcular"<<endl;
    }
    else{
        cout<<"linked list is not circular"<<endl;
    }

    
    //cout<<getLength(head)<<endl;
    //cout<<"the middle element in LL is: "<<middleNode1(head);

    return 0;

}