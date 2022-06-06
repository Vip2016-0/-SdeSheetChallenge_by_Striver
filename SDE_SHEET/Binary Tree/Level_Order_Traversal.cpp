// Typical BFS 

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    if(!root) return {};
  
    vector<int> ans;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        while(size--){
            auto top = q.front();
            q.pop();
            
            if(top -> left) q.push(top -> left);
            if(top -> right) q.push(top -> right);
            ans.push_back(top -> val);
        }
    }
    
    return ans;
}
