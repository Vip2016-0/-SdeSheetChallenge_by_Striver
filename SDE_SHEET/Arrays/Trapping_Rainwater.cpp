
// Time Complexity :- O(3*n) = o(n)
// Space Complexity := O(2*n)
  
long getTrappedWater(long *arr, int n){
    long ans = 0;
    
    vector<long> leftMax(n, 0);
    vector<long> rightMax(n, 0);
    
    leftMax[0] = *(arr + 0);
    for(int i = 1 ; i < n ; i++)
        leftMax[i] = max(*(arr + i), leftMax[i-1]);
    
    rightMax[n - 1] = *(arr + n - 1);
    for(int i = n - 2 ; i >= 0 ; i--)
        rightMax[i] = max(*(arr + i), rightMax[i+1]);
    
    for(int i = 1 ; i < n - 1 ; i++){
        ans += min(leftMax[i], rightMax[i]) - *(arr + i);
    }
    
    return ans;
}
