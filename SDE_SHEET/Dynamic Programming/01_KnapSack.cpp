// Time Complexity :- O(n*w)
// Space Complexity :- O(n*w)

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    
    for(int i = 1 ; i <= n ; i++){
        for(int currWeight = 1 ; currWeight <= w ; currWeight++){
            if(weights[i-1] <= currWeight)
                dp[i][currWeight] = max(values[i-1] + dp[i-1][currWeight - weights[i-1]], dp[i-1][currWeight]);
            else
                dp[i][currWeight] = dp[i-1][currWeight];
        }
    }
    
    return dp[n][w];
}
