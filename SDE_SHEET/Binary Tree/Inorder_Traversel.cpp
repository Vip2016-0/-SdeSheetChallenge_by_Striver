
// Time Complexity :- O(n)
// Space Complexity :- O(n)

void inOrder(TreeNode* root, vector<int>& ans){
    if(!root) return;
    
    inOrder(root -> left, ans);
    ans.push_back(root -> data);
    inOrder(root -> right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    
    inOrder(root, ans);
    return ans;
}
