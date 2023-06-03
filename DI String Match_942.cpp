class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector <int> ans;
        int k = 0;int j = s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                ans.push_back(k++);
            }
            else{
                ans.push_back(j--);
            }
        } ans.push_back(k++);return ans;
    }
};