#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next= NULL;
        }
        cout<<" memory free for node with data "<<val<<endl;
    }
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
    
}

// getting length of linked list
int getLength(Node* head){
    Node* temp = head;
    int cnt=0;
    while(temp){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

void insertAtHead(Node* &tail,Node* &head,int d){

    // empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail=temp;
    }

    else{
        Node* temp = new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;

    }

}

void insertAtTail(Node* &tail,Node* &head,int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail=temp;
        head=temp;
    }

    else{
        Node* temp = new Node(d);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int p,int d){

    // insert at Start
    if(p==1){
        insertAtHead(tail,head,d);
        return;
    }

     // new node create
    Node* temp =head;
    for(int i=1;i<p-1;i++){
        temp=temp->next;
    }

    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return ;
    }

    // creating a node for d
    Node* nodetoInsert= new Node(d);
    nodetoInsert->next=temp->next;

    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}

void DeleteNode(int position,Node* &head,Node* &tail){

    // deleting first or start node
    if(position==1){
        Node* temp= head;
        temp->next->prev=NULL;
        head=temp->next;
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
        current->prev=NULL;
        pre->next=current->next;
        current->next=NULL;
        delete current;
    }

}


int main() {
    // Node* node1= new Node(10);
    // Node* head= node1;
    // Node* tail= node1;
    Node* head= NULL;
    Node* tail= NULL;

    // cout<<getLength(head)<<endl;
    insertAtHead(tail,head,11);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtHead(tail,head,13);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtHead(tail,head,8);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtTail(tail,head,25);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    insertAtPosition(head,tail,5,100);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    DeleteNode(5,head,tail);
    print(head);
    cout<<" head "<<head->data<<endl;
    cout<<" tail "<<tail->data<<endl;

    return 0;
}