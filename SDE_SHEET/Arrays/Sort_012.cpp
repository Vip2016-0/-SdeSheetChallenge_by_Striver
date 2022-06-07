// Time Complexity :- O(n)
// Space Complexity :- O(1)

void sort012(int *arr, int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(*(arr +i) == 0)
            c0++;
        else if(*(arr + i) == 1)
            c1++;
        else
            c2++;
    }
    
    for(int i = 0 ; i < c0; i++)
        *(arr + i) = 0;
    for(int i = c0 ; i < c0 + c1 ; i++)
        *(arr + i) = 1;
    for(int i = c0 + c1 ; i < c0 + c1 + c2 ; i++)
        *(arr + i) = 2;
}
