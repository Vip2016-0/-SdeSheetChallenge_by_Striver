
// Time Comlexity :- O(nlogk)
// Space Complexity :- O(2*k) = O(k)
  
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    priority_queue<int> pq_small;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0 ; i < n ; i++){
        if(i < k){
            pq.push(arr[i]);
            pq_small.push(arr[i]);
        }
        else{
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
            
            if(arr[i] < pq_small.top()){
                pq_small.pop();
                pq_small.push(arr[i]);
            }
        }
    }
    
    return {pq_small.top(), pq.top()};
}
