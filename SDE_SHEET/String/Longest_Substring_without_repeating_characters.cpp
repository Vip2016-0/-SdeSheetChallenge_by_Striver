
// Time Complexity :- O(2*n)
// Space Complexity :- O(1)
  
int uniqueSubstrings(string s)
{
    int n = s.size();
    int fre[26] = {0};
    
    int ans = 0;
    int windowStart = 0, windowEnd = 0;
    
    while(windowEnd < n){
        fre[s[windowEnd] - 97]++;
        while(windowStart < windowEnd && fre[s[windowEnd] - 97] > 1){
            fre[s[windowStart] - 97]--;
            windowStart++;
        }
        
        ans = max(ans, windowEnd - windowStart + 1);
        windowEnd++;
    }
    
    return ans;
}
