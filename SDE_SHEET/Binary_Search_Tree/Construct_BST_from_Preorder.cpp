// Time Complexity :- O(n)
// Space Complexity :- O(1)

class Solution {
    int idx;
public:
    
    TreeNode* constructTree(int upper_bound, vector<int>&preorder){
        if(idx >= (int)preorder.size() || preorder[idx] > upper_bound) return NULL;
        
        TreeNode* root = new TreeNode(preorder[idx++]);
        
        root -> left = constructTree(root -> val, preorder);
        root -> right = constructTree(upper_bound, preorder);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        idx = 0;
        
        return constructTree(INT_MAX, preorder);
    }
};


// Time Complexity :- O(n*n)
// Space Complexity := O(n*n)

TreeNode<int>* constructTree(vector<int> &v){
    if((int)v.size() == 0) return NULL;
    
    TreeNode<int>* root = new TreeNode<int>(v[0]);
    
    vector<int> left;
    vector<int> right;
    
    for(int i = 1 ; i < (int)v.size() ; i++){
        if(v[i] < v[0]) left.push_back(v[i]);
        else right.push_back(v[i]);
    }
    
    root -> left = constructTree(left);
    root -> right = constructTree(right);
    
    return root;
}

TreeNode<int>* preOrderTree(vector<int> &preOrder){
    return constructTree(preOrder);
}

