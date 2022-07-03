
// Time Complexity :- O(nlog(sum))
// Space Complexity :- O(1)

#define ll long long int
bool check(ll mx, int days, int n, vector<int>&time){
    days--;
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(time[i] > mx) 
            return false;
        sum += time[i];
        
        if(sum > mx){
            sum = time[i];
            days--;
        }
    }
    
    return days >= 0;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
    long long sum = accumulate(time.begin(), time.end(), 0ll);
    
    ll low = 0, high = sum;
    ll ans = sum;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        
        if(check(mid, n, m, time)){
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    
    return ans;
}
