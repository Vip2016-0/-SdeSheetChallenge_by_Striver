
// Time Complexity :- O(n)
// Space Complexity :- O(n)

string reverseWords(string s) {
        
    int n = s.size();
    string ans = "";

    vector<string> v;

    for(int i = 0 ; i < n ; i++){
        if(s[i] != ' '){
            string temp = "";
            temp += s[i];
            int j = i + 1;
            while(j < n && s[j] != ' '){
                temp += s[j];
                j++;
            }
            v.push_back(temp);
            i = j;
        }   
    }

    for(int i = (int)v.size() - 1 ; i >= 0 ; i--){
        ans += v[i];
        if(i != 0) ans += " ";
    }

    return ans;
}





// Time Complexity :- O(n)
// Space Complexity :- O(1)

string reverseWords(string s) {
        
    int n = s.size();
    string ans = "";

    for(int i = n - 1 ; i >= 0 ; i--){
        if(s[i] != ' '){
            string temp = "";
            temp += s[i];

            int j = i - 1;
            while(j >= 0 && s[j] != ' ')
                temp += s[j--];

            reverse(temp.begin(), temp.end());
            ans += temp;
            ans += " ";

            i = j;
        }   
    }

    ans.pop_back();
    return ans;
}

