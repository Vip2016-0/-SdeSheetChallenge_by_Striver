
// Time Complexity :- O(n)
// Space Complexity :- O(n)

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    if(!root) return {};
        
    vector<int> ans;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    int level = 0;
    while(!q.empty()){
        int size = q.size();
        vector<int> temp(size);

        for(int i = 0 ; i < size ; i++){
            auto top = q.front();
            q.pop();

            int idx = level % 2 ? size - i - 1 : i;
            temp[idx] = top -> data;

            if(top -> left) q.push(top -> left);
            if(top -> right) q.push(top -> right);
        }
        
        for(auto &x:temp) ans.push_back(x);
        level++;
    }

    return ans;
}

