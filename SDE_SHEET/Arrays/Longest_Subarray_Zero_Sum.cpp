
// Time Comlexity :- O(n*log(n))
// Saace Complexity :- O(1)

int LongestSubsetWithZeroSum(vector < int > arr) {
    
    map<int, int> mp;
    int sum = 0;
    int ans = 0;
    for(int i = 0 ; i < (int)arr.size(); i++){
        sum += arr[i];
        if(sum == 0)
            ans = i + 1;
        
        if(mp.find(sum) != mp.end())
            ans = max(ans, i - mp[sum]);
        else
            mp[sum] = i;
    }
    
    return ans;
}
