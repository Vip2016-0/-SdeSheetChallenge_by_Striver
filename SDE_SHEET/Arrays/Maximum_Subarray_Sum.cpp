
// Time Complexity :- O(n)
// Space Complexity :- O(1)
  
long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        
        if(sum < 0) sum = 0;
        
        ans = max(ans, sum);
    }
    
    return ans;
}
