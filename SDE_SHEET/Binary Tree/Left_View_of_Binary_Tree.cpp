
// Time COmplexity :- O(n)
// Space Complexity :- O(n)

vector<int> getLeftView(TreeNode<int> *root)
{
    if(!root) return {};
    
    vector<int> leftView;
    
    queue<TreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        leftView.push_back(q.front() -> data);
        while(size--){
            auto node = q.front();
            q.pop();
            
            if(node -> left) q.push(node -> left);
            if(node -> right) q.push(node -> right);
        }
    }
    
    return leftView;
}


