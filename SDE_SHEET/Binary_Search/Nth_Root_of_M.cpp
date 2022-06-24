
// Time Complexity :- O(logn)
// Space Complexity :- O(1)


long double check(long double number, int n) {
    long double ans = 1.0;
    for(int i = 1; i <= n; i++) {
        ans *= number;
    }
    return ans; 
}

double findNthRootOfM(int n, long long m) {
    long double low = 1.0;
    long double  high = (long double)m;
    long double eps = 1e-9;
    
    while((high - low) > eps) {
        long double mid = low + (high - low) / 2.0;
        if(check(mid, n) > (long double)m)
            high = mid; 
        else
            low = mid; 
     }
    
    return low;
}
