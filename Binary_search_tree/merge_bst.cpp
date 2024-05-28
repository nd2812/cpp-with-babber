#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void convertIntoSortDLL(Node* root,Node * &head){
    // base case
    if(root==NULL){
        return;
    }
    convertIntoSortDLL(root->right,head);

    root->right=head;
    if(head!=NULL){
        head->left=root;
    }

    head=root;
    convertIntoSortDLL(root->left,head);
}

Node* mergeLL(Node* head1,Node*head2){
    Node* head=NULL;
    Node* tail=NULL;

    while(head1!=NULL && head2){
        if(head1->data<head2->data){
            if(!head){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            if(!head){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
    }
    while(head1){
        if(!head){
            head=head1;
            tail=head1;
            head1=head1->right;
        }
        else{
            tail->right=head1;
            head1->left=tail;
            tail=head1;
            head1=head1->right;
        }
    }
    while(head2){
        if(!head){
            head=head2;
            tail=head2;
            head2=head2->right;
        }
        else{
            tail->right=head2;
            head2->left=tail;
            tail=head2;
            head2=head2->right;
        }
    }
    return head;
}

int countNodes(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        cnt++;
        temp=temp->right;
    }
    return cnt;
}

Node* sortedLLToBST(Node* head,int n){
    // base case
    if(n<=0 || head==NULL){
        return NULL;
    }
    Node* left = sortedLLToBST(head,n/2);

    Node* root = head;
    root->left=left;
    head=head->right;
    root->right=sortedLLToBST(head,n-n/2-1);
    return root;
}

int main() {
    
    return 0;
}