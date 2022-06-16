
// Time Complexity :- O(n)
// Space Complexity :- O(n)

void getPreOrder(TreeNode* root, vector<int> &preOrder){
    if(!root) return;
    
    preOrder.push_back(root -> data);
    getPreOrder(root -> left, preOrder);
    getPreOrder(root -> right, preOrder);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> preOrder;
    
    getPreOrder(root, preOrder);
    return preOrder;
}
