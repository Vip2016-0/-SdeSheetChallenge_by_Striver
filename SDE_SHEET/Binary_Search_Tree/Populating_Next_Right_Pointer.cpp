/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

// Time Complexity :- O(n)
// Space Complexity :- O(n)
  
#include<bits/stdc++.h>
void connectNodes(BinaryTreeNode< int > *root) {
    if(!root) return;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        while(size--){
            BinaryTreeNode<int>* top = q.front();
            q.pop();
            if(size){
                top -> next = q.front();
            }
            
            if(top -> left) q.push(top -> left);
            if(top -> right) q.push(top -> right);
        }
        
    }
    
}
