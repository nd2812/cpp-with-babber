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

void InsertAtHead(Node* &head,Node* &tail,int d){

    // empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail=temp;
    }

    // new node create
    Node* temp= new Node(d);
    temp ->next=head; 
    head=temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverseLinkedList(Node* &head) 
{
    Node* prev=NULL;
    Node* curr = head;
    Node* forward = head;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}

void reverse(Node* &head,Node* &curr,Node* &prev){
    // base case
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward=curr->next;
    reverse(head, forward, curr);
    curr->next=prev;

}

Node* reverse1(Node* &head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* chhotahead = reverse1(head->next);
    head->next->next=head;
    head->next=NULL;

    return chhotahead;
}


int main() {
    // created a new node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,tail,2);
    InsertAtHead(head,tail,5);
    InsertAtHead(head,tail,8);
    InsertAtHead(head,tail,9);
    InsertAtHead(head,tail,7);
    cout<<"Original LL"<<endl;
    print(head);
    reverseLinkedList(head);
    cout<<"After Reverse"<<endl;
    print(head);
    return 0;
} 