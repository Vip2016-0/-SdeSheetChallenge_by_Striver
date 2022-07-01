
// Time Complexity :- O(nlogn)
// Space Complexity :- O(n)

int getPos(int num, vector<int> &LIS){
    
    int low = 0, high = LIS.size() - 1;
    
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(LIS[mid] >= num) high = mid - 1;
        else low = mid + 1;
    }
    
    return low;
}

int longestIncreasingSubsequence(int arr[], int n)
{
    vector<int> LIS;
    LIS.push_back(arr[0]);
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > LIS[LIS.size() - 1])
            LIS.push_back(arr[i]);
        else{
            int pos = getPos(arr[i], LIS);
            if(pos >= LIS.size()) continue;
            
            LIS[pos] = arr[i];
        }
    }
    
    return (int)LIS.size();
}
