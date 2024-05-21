#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

// tree from postorder and inorder
int findPosition(int in[],int element,int n){
    for(int i=n-1;i>=0;i--){
        if(in[i]==element){
            in[i]=INT_MIN;
            return i;
        }
    }
    return -1;
}
Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n){
    // base case
    if(index<0 || inorderStart>inorderEnd){
        return NULL;
    }
    
    int element = post[index--];
    Node* root = new Node(element);
    int position = findPosition(in,element,n);
    // recursive call
    root->right=solve(in,post,index,position+1,inorderEnd,n);
    root->left=solve(in,post,index,inorderStart,position-1,n);
    
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    int postOrderIndex=n-1;
    Node* ans=solve(in,post,postOrderIndex,0,n-1,n);
    return ans;
}

// tree from preorder and inorder
int findPosition(int in[],int element,int n){
    for(int i=0;i<n;i++){
        if(in[i]==element){
            in[i]=INT_MIN;
            return i;
        }
    }
    return -1;
}
Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
    // base case
    if(index>=n || inorderStart>inorderEnd){
        return NULL;
    }
    
    int element = pre[index++];
    Node* root = new Node(element);
    int position = findPosition(in,element,n);
    // recursive call
    root->left=solve(in,pre,index,inorderStart,position-1,n);
    root->right=solve(in,pre,index,position+1,inorderEnd,n);
    
    return root;
}
Node* buildTree(int in[],int pre[], int n){
    int preOrderIndex=0;
    Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;
}

int main() {
    
    return 0;
}