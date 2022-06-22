
// Time Complexity :- O(n)
// Space Complexity :- O(1)

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    
    while(root){
        if(root -> data == x) return true;
        
        if(x > root -> data) root = root -> right;
        else root = root -> left;
    }
    
    return false;
}
