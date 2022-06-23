
// Time Complexity :- O(n)
// Space Complexity :- O(n)
  
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    if(!root) return -1;
    
    if(root -> data == x || root -> data == y)
        return root -> data;
    
    auto left = lowestCommonAncestor(root -> left, x, y);
    auto right = lowestCommonAncestor(root -> right, x, y);
    
    if(left != -1 && right != -1) return root -> data;
    
    return left != -1 ? left : right;
}
