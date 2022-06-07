
// Time Complexity :- O(n*n)
// Space Complexity :- O(n)
  
vector<vector<int>> pairSum(vector<int> &arr, int s){
    
    int n = arr.size();
    vector<vector<int>> ans;
    
    map<int, int> mp;
    for(auto &x:arr)
        mp[x]++;
    
    for(int i = 0 ; i < n ; i++){
        int curr = arr[i];
        int req = s - curr;
        
        if(mp[req] > 0){
            vector<int> v;
            if(curr > req) v = {req, curr};
            else v = {curr, req};
            
            int times = mp[req];
            if(curr == req) times--;
            while(times--)
                ans.push_back(v);
            mp[curr]--;
        }
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}
