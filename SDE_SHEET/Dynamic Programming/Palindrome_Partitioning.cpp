
// Time Complexity :- O(n * 2 ^ n)   n = length of string
// Space Complexity :- O(n)

bool isPalindrome(string &s){
    int i = 0, j = s.size() - 1;
    
    while(i < j)
        if(s[i++] != s[j--])
            return false;
    return true;
}

void getAll(int idx, vector<string> temp, string &s, vector<vector<string>> &ans){
    if(idx >= (int)s.size()){
        ans.push_back(temp);
        return;
    }
    
    string t = "";
    
    for(int i = idx ; i < (int)s.size() ; i++){
        t += s[i];
        if(isPalindrome(t)){
            temp.push_back(t);
            getAll(i+1, temp, s, ans);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s) 
{
    vector<vector<string>> ans;
    getAll(0, {}, s, ans);
    
    return ans;
}
