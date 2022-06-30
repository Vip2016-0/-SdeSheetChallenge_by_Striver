

string writeAsYouSpeak(int n) 
{
    if(n == 1) return "1";
        
    vector<string> ans;
    ans.push_back("1");

    for(int i = 1 ; i < n ; i++){
        string temp = ans[i-1];
        int size = temp.size();

        string curr = "";
        for(int j = 0 ; j < size ; ){
            char t = temp[j];

            int c = 0, k = j;
            while(k < size && temp[j] == temp[k]){
                c++;
                k++;
            }
            curr += (c + '0');
            curr += temp[j];
            j = k;
        }
        ans.push_back(curr);
    }

    return ans[n-1];
}
