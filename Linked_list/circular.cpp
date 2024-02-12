#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructer
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }

        cout<<" memory is free for node with data "<<val<<endl;
    }
};
void insertNode(Node* &tail,int element,int d){
    // assuming that the elemnt is present in the list

    // empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next=newNode;
    }

    else{
        // non-empty list

        Node* curr = tail;
        while (curr->data != element){
            curr = curr->next;
        }
        
        // element found -> curr is representing element wala node

        Node* temp = new Node(d);
        temp ->next = curr->next;
        curr->next= temp;

    }
}

void print(Node* tail){
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }

   
    Node* temp= tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    // empty list
    if(tail==NULL){
        cout<<" List is empty, please check again "<<endl;
        return;
    }
    else{
        // non-empty


        // assuming that value is present 
        Node* prev = tail;
        Node* curr = prev ->next;
        if(curr=prev){
            tail=NULL;
            return;
        }
        while(curr->data!=value){
            curr=curr->next;
            prev=prev->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail=curr->next;
        }
        curr->next=NULL;
        delete curr;
    }
}


int main() {
    Node* tail = NULL;

    // empty list me insert krre hai
    insertNode(tail,5,3);
    print(tail);

    // insertNode(tail,3,5);
    // print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,9);
    // print(tail);

    // insertNode(tail,5,6);
    // print(tail);

    // insertNode(tail,9,10);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    deleteNode(tail,3);
    print(tail);
    return 0; 
}