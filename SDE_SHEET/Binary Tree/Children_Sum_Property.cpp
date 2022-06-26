/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

// Time Complexity :- O(n)
// Space Compleaity :- O(n)

int makeChange(BinaryTreeNode<int>*root){
    if(!root) return 0;
    if(!root -> left && !root -> right) return root -> data;
    
    int sum = 0;
    if(root -> left) sum += root -> left -> data;
    if(root -> right) sum += root -> right -> data;
    
    if(root -> data > sum){
        if(root -> left) root -> left -> data = root -> data;
        if(root -> right) root -> right -> data = root -> data;
    }
    
    int leftSum = makeChange(root -> left);
    int rightSum = makeChange(root -> right);
    
    root -> data = leftSum + rightSum;
    return root -> data;
}

void changeTree(BinaryTreeNode < int > * root) {
    makeChange(root);
}  









/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include<bits/stdc++.h>
void makeChange(BinaryTreeNode<int>*root, int mx){
    if(!root) return;
    
    if(!root -> left && !root -> right){
        root -> data = mx;
        return;
    }
    
    makeChange(root -> left, mx);
    makeChange(root -> right, mx);
    
    int sum = 0;
    if(root -> left) sum += root -> left -> data;
    if(root -> right) sum += root -> right -> data;
    
    root -> data = sum;
}

int findMax(BinaryTreeNode < int > * root){
    if(!root) return 0;
    return max({findMax(root -> left), findMax(root -> right), root -> data});
}

void changeTree(BinaryTreeNode < int > * root) {
    int mx = findMax(root);
    makeChange(root, mx);
}  
