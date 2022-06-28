
// Time Complexity :- O(n*n)
// Space Complexity :- O(1)

string longestPalinSubstring(string s)
{
    int n = s.size();
    string ans;
    
    int maxLen = 1;
    int pos = 0;
    
    for(int i = 0 ; i < n ; i++){
        int rightPos = i;
        while(i < n && s[i] == s[rightPos])
             rightPos++;
        
        int leftPos = i - 1;
        while(leftPos >= 0 && s[leftPos] == s[rightPos])
            leftPos--, rightPos++;
        
        int len = rightPos - leftPos - 1;
        if(len > maxLen){
            maxLen = len;
            pos = leftPos + 1;
        }
    }
    
    ans = s.substr(pos, maxLen);
    return ans;
}
