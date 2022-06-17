
// Time Complexity :- O(n)
// Space Complexity :- O(n)

vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans(n, -1);
    
    stack<int> st;
    for(int i = n - 1; i >= 0 ; i--){
        if(st.empty()){
            ans[i] = -1;
            st.push(arr[i]);
        }
        else{
            while(!st.empty() && st.top() <= arr[i])
                st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            
            st.push(arr[i]);
        }
    }
    
    return ans;

}
