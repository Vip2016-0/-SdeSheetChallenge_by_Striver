
// Time Complexity :- O(nlogk)
// Space Complexity :- O(k)

vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
    vector<int> ans;
        
    map<int, int> mp;
    for(auto &x:nums)
        mp[x]++;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for(auto &x:mp){
        if(pq.size() < k)
            pq.push({x.second, x.first});
        else{
            if(pq.top().first < x.second){
                pq.pop();
                pq.push({x.second, x.first});
            }
        }
    }

    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}
