
// Time Complexity :- O(n + m)
// Space Complexity :- O(n)

class Solution {
public:
    
    vector<int> getLPS(string &s){
        int n = s.size();
        
        vector<int> lps(n, 0);
        for(int i = 1, len = 0 ; i < n ; ){
            if(s[i] == s[len])
                lps[i++] = ++len;
            else if(len)
                len = lps[len-1];
            else
                lps[i++] = 0;
        }
        
        return lps;
    }
    
    int strStr(string haystack, string needle) {
        
        int n = haystack.size(), m = needle.size();
        
        vector<int> lps = getLPS(needle);
        for(int i = 0, j = 0 ; i < n ; ){
            if(haystack[i] == needle[j])
                i++, j++;
            
            if(j == m)
                return i - j;
            
            if(i < n && haystack[i] != needle[j]){
                j ? j = lps[j-1] : i++;
            }
        }
        
        return -1;
    }
};
