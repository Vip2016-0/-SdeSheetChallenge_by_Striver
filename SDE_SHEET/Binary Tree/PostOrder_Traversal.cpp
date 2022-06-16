
// Time Complexity :- O(n)
// Space Complexity :- O(n)

void getPostOrder(TreeNode* root, vector<int> &postOrder){
    if(!root) return;
    
    getPostOrder(root -> left, postOrder);
    getPostOrder(root -> right, postOrder);
    postOrder.push_back(root -> data);
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> postOrder;
    
    getPostOrder(root, postOrder);
    return postOrder;
}
