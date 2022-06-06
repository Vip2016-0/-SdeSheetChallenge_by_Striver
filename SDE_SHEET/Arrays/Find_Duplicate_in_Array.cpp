

int findDuplicate(vector<int> &arr, int n){
    
    for(int i=0;i<arr.size();i++){
        if(arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            return abs(arr[i]);
    }
    return -1;
}

