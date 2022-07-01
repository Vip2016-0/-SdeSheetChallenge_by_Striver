
// Time Complexity :- O(n)
// Space Complexity :- O(logn)

bool identicalTrees(BinaryTreeNode<int>* p, BinaryTreeNode<int>* q) {
      if(!p && !q) return true;

      if(p && !q || q && !p) return false;

      if(p -> data != q -> data) return false;

      return identicalTrees(p -> left, q -> left) && identicalTrees(p -> right, q -> right);
}
