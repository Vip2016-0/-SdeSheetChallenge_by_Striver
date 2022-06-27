
// Time Complexity :- O(nlogk)
// Space Complexity :- O(k)

int kthLargest(vector<int>& arr, int size, int K)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i = 0 ; i < size ; i++){
        if(i < K)
            pq.push(arr[i]);
        else{
            if(pq.top() < arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
    }
    
    return pq.top();
}
