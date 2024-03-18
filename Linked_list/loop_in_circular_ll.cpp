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

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node* temp=head;
    while(temp!=NULL){
        // cycle is present
        if(visited[temp]){
           return 1; 
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void remove(Node* head){
    if(head==NULL){
        return;
    }
    Node* startofLoop= getStartingNode(head);
    Node* temp = startofLoop;
    while(temp->next!=startofLoop){
        temp=temp->next;
    }

    temp->next=NULL;
}

int main() {
    Node* tail = NULL;

    // empty list me insert krre hai
    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    insertNode(tail,5,6);
    insertNode(tail,9,10);
    insertNode(tail,3,4);
    print(tail);
    // tail->next=NULL;
    cout<<detectLoop(tail)<<endl;
    // if(floydDetectLoop(tail)!=NULL){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }
    cout<<"starting at "<<getStartingNode(tail)->data<<endl;
    return 0; 
}