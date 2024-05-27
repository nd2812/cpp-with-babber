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

Node* insertIntoBST(Node* root,int d){
    // base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d > root->data){
        // right part me insert karna h
        root->right = insertIntoBST(root->right,d);
    }
    else{
        // left part me insert karna h
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}

void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
 
        if(temp==NULL){
            // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void inorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    // LNR
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    // NLR
    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    // LRN
    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";
}

int maximum(Node* root){
    Node* temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp->data;
}
int minimum(Node* root){
    Node* temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp->data;
}

Node* deleteFromBST(Node* root,int val){
    // base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        // 0 child
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // right child
        else if(root->right!=NULL && root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minimum(root->right);
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
        }
    }
    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
    return root;
}


int main() {
    Node* root=NULL;


    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);

    // cout<<"\nPrinting Inorder"<<endl;
    // inorder(root);

    // cout<<"\nPrinting preorder"<<endl;
    // preorder(root);

    // cout<<"\nPrinting postorder"<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<"minimum ";
    // cout<<minimum(root)<<endl;
    // cout<<"maximum ";
    // cout<<maximum(root)<<endl;

    root=deleteFromBST(root,10);
    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
    return 0;
}

