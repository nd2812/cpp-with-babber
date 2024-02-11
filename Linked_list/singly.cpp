#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }

};

void InsertAtHead(Node* &head,int d){
    // new node create
    Node* temp= new Node(d);
    temp ->next=head; 
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    // new node create
    Node* temp= new Node(d);
    tail ->next=temp; 
    // tail=tail->next;
    tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int p,int d){
    // insert at start
    if(p==1){
        InsertAtHead(head,d);
        return;
    }

    // new node create
    Node* temp =head;
    for(int i=1;i<p-1;i++){
        temp=temp->next;
    }

    // inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }

    // creating a node for d
    Node* nodetoInsert= new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void DeleteNode(int position,Node* &head,Node* &tail){

    // deleting first or start node
    if(position==1){
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        // memory free start node ki
        delete temp;
    }

    else{
        // deleting any middle node or last nod
        Node* current = head;
        Node* pre=NULL;
        int cnt=1;
        while(cnt<position){
            pre=current;
            current=current->next;
            cnt++;
        }
        if(current->next==NULL){
            pre->next=NULL;
            tail=pre;
            delete current;
            return;
        }
        pre->next=current->next;
        current->next=NULL;
        delete current;
    }

}

int main() {
    // created a new node
    Node* node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<< node1->next<<endl;

    // head pointed to node1
    Node* head= node1;
    Node* tail= node1;
    print(head);
    // inserting new node
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtPosition(head,tail,3,30);
    print(head);

    DeleteNode(5,head,tail);
    print(head);
    cout<<" head "<<head->data <<endl;
    cout<<" tail "<<tail->data<<endl;

    return 0;
}