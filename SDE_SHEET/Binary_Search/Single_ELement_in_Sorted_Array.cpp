
// Time Complexity :- O(logn)
// Space Complexity :- O(1)

int uniqueElement(vector<int> nums, int n)
{
    if(n == 1) return nums[0];
        
    int unique = -1;
    int low = 0, high = n - 1;
    while(low <= high){ 
        int mid = low + (high - low) / 2;

        if((mid - 1) >= 0 && nums[mid] == nums[mid-1]){
            if((n - mid) % 2)
                high = mid - 1;
            else low = mid + 1;
        }
        else if((mid + 1) < n && nums[mid] == nums[mid+1]){
            if((n - mid) % 2 == 0)
                high = mid - 1;
            else low = mid + 1;
        }
        else{
            unique = nums[mid];
            break;
        }
    }

    return unique;
}
