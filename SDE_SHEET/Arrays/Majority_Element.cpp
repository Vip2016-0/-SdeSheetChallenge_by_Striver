
// Solved by using Boyer-Moore Voting Algorithm

// Time Complexity :- O(n)
// Space Complexity :- O(1)

int findMajorityElement(int arr[], int n) {
    
    int majority_element = -1;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(count == 0)
            majority_element = arr[i];
        
        if(arr[i] == majority_element)
            count++;
        else
            count--;
    }
    
    count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == majority_element)
            count++;
    }
    
    if((2 * count) <= n)
        return -1;
    
    return majority_element;
}
