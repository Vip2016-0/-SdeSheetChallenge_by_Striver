
// Time complexity :- O(n * m)
// Space Complexity :- O(n * m)
  
int lcs(string s, string t)
{
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(s[i-1] == t[j-1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    return dp[n][m];
}



// Time Complexity :- O(n * m)
// Space Comlexity :- O(2 * m)

int lcs(string s, string t)
{
    int n = s.size();
    int m = t.size();
    
    vector<int> dp(m + 1, 0);
    for(int i = 1 ; i <= n ; i++){
        vector<int> temp(m + 1, 0);
        for(int j = 1 ; j <= m ; j++){
            if(s[i-1] == t[j-1])
                temp[j] = 1 + dp[j - 1];
            else
                temp[j] = max(dp[j], temp[j-1]);
        }
        
        dp = temp;
    }
    
    return dp[m];
}
