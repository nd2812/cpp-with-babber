#include<bits/stdc++.h>
using namespace std;

class tNode {
    public:
    int data;
    tNode* left;
    tNode* right;
};
 
/* Function to traverse the binary tree without recursion
   and without stack */
void MorrisTraversal(struct tNode* root){
    tNode *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
 
            /* Find the inorder predecessor of current */
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            /* Make current as the right child of its
               inorder predecessor */
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            /* Revert the changes made in the 'if' part to
               restore the original tree i.e., fix the right
               child of predecessor */
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } /* End of if condition pre->right == NULL */
        } /* End of if condition current->left == NULL*/
    } /* End of while */
}
 
/* UTILITY FUNCTIONS */
/* Helper function that allocates a new tNode with the
   given data and NULL left and right pointers. */
 tNode* newtNode(int data){
    struct tNode* node = new tNode;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}

int main() {
    tNode* root = newtNode(1);
    root->left = newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root->left->right = newtNode(5);
 
    MorrisTraversal(root);
 
    return 0;
}