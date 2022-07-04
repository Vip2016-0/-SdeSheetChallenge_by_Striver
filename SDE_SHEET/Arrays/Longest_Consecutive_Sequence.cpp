
// Time Complexity :- O(nlogn)
// Space Complexity :- O(n)

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    int ans = 0;
    unordered_set<int> st;
    for(auto &x:nums)
        st.insert(x);

    for(int i = 0 ; i < n ; i++){
        if(!st.count(nums[i] - 1)){
            int count = 0;
            int curr = nums[i];
            while(st.count(curr)){
//                 st.erase(curr);
                curr++;
                count++;
            }

            ans = max(ans, count);
        }
    }

    return ans;
}
