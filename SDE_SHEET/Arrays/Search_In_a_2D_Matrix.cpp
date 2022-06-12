
// Time Complexity :- O(2*logn)
// Space Complesity :- O(1)
  
bool findTargetInMatrix(vector<vector<int>> & mat, int m, int n, int target) {
    
    int low = 0, high = m - 1;
    
    int row = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(mat[mid][n-1] >= target){
            row = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    
    if(row == -1) return false;
    
    low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(mat[row][mid] == target) return true;
        
        if(mat[row][mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    return false;
}
