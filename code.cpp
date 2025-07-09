class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string test="" , ans1="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(test!="") ans.push_back(test);
                test = "";
            }
            else test+=s[i];
        }
        if(test!="") ans.push_back(test);
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            ans1 += ans[i];
            ans1+=' ';
        }
        ans1.pop_back();
        return ans1;
    }
};
