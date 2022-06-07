
// Time Complexity :- O(m + n)
// Space Complexity :- O(1)

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int len = m + n - 1;
    
    m--, n--;
    while(m >= 0 && n >= 0){
        if(arr1[m] > arr2[n])
            arr1[len--] = arr1[m--];
        else
            arr1[len--] = arr2[n--];
    }
    
    while(n >= 0)
        arr1[len--] = arr2[n--];
    
    return arr1;
}
