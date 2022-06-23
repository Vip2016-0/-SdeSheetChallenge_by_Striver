
// Time Complexity :- O(n)
// Space Complexity :- O(1)


TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    if(!root) return root;
    
    TreeNode<int>* curr = root;
    
    while(curr){
        if(curr -> left){
            TreeNode<int>* pred = curr -> left;
            while(pred -> right)
                pred = pred -> right;
            
            pred -> right = curr -> right;
            curr -> right = curr -> left;
            curr -> left = NULL;
        }
        curr = curr -> right;
    }
    
    return root;
}

