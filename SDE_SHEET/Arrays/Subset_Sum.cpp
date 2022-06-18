// Time Complexity :- O(nlogn)
// Space Complexity :- O(1)

vector<int> subsetSum(vector<int> &num)
{
    int n = num.size();
    
    vector<int> ans;
    
    for(int i = 0 ; i < (1 << n); i++){
        int currSum = 0;
        for(int j = 0 ; j < n ; j++){
            if((i >> j) & 1)
                currSum += num[j];
        }
        ans.push_back(currSum);
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}
