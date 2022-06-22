
// Time Complexity :- O(n)
// Space Complexity :- O(logn)

TreeNode<int>* constructTree(int left, int right, vector<int>& arr){
    if(left > right) return NULL;
    
    int mid = (left + right) / 2;
    TreeNode<int>* root = new TreeNode<int>(arr[mid]);
    
    root -> left = constructTree(left, mid - 1, arr);
    root -> right = constructTree(mid + 1, right, arr);
    
    return root;
}

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return constructTree(0, n - 1, arr);
}
