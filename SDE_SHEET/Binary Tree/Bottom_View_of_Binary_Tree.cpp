/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

// Time Complexity :- O(n)
// Space Complexity :- O(2*n) = O(n)
  

#include<bits/stdc++.h>
vector<int> bottomView(BinaryTreeNode<int> * root){
    if(!root) return {};
    
    vector<int> bottomView;
    queue<pair<BinaryTreeNode<int>*, int>> q;
    q.push({root, 0});
    
    map<int, int> mp;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            auto node = q.front();
            q.pop();
            
            mp[node.second] = node.first -> data;
            if(node.first -> left) q.push({node.first -> left, node.second + 1});
            if(node.first -> right) q.push({node.first -> right, node.second - 1});
        }
    }
    
    for(auto &x:mp)
        bottomView.push_back(x.second);
    
    reverse(bottomView.begin(), bottomView.end());
    return bottomView;
}


