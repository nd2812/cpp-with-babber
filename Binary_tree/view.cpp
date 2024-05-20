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

vector<int> topView(Node *root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    
    map<int,int> topNode;
    queue<pair<Node*,int>> q;
    
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd = temp.second;
        
        // maintain 1 to 1 maping
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=frontNode->data;
        }
        
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        ans.push_back(i.second);
    }
    return ans;
}

vector <int> bottomView(Node *root) {
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    
    map<int,int> topNode;
    queue<pair<Node*,int>> q;
    
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd = temp.second;
        
        topNode[hd]=frontNode->data;
        
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        ans.push_back(i.second);
    }
    return ans;
}

void solve(Node* root,int lvl,vector<int> &ans){
    // base case
    if(root==NULL){
        return;
    }
    if(lvl==ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left,lvl+1,ans);
    solve(root->right,lvl+1,ans);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve (root,0,ans);
   return ans;
}

void solve(Node* root,int lvl,vector<int> &ans){
    // base case
    if(root==NULL){
        return;
    }
    if(lvl==ans.size()){
        ans.push_back(root->data);
    }
    solve(root->right,lvl+1,ans);
    solve(root->left,lvl+1,ans);
}
//Function to return list containing elements of right view of binary tree.
vector<int> rightView(Node *root){
    vector<int> ans;
    solve (root,0,ans);
    return ans;
}

void solve(Node* root,map<int,vector<int>> &diagonal,int d){
    if(root==NULL){
        return;
    }
    diagonal[d].push_back(root->data);
    solve(root->left,diagonal,d+1);
    solve(root->right,diagonal,d);
}

vector<int> diagonal(Node *root)
{
   vector<int> ans;
   map<int,vector<int>> diagonal;
   solve(root,diagonal,0);
   for (auto it :diagonal)
    {
        vector<int> v=it.second;
        for(auto it:v)
          ans.push_back(it);
    }
   return ans;
}

int main() {
    
    return 0;
}