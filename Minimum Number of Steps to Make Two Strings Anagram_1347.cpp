class Solution {
public:
    int minSteps(string s, string t) {
        vector <int> svector(26,0);
        vector <int> tvector(26,0);
        for(int i=0;i<s.size();i++){
            int index1 = s[i]-'a';
            svector[index1]++;
            int index2 = t[i]-'a';
            tvector[index2]++;
        }
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int index = s[i]-'a';
            int num = svector[index] - tvector[index];
            //ye chij jaldi yaad nhi ayegi
            svector[index] = 0;
            if(num>0){
                ans += num;
            } 
        }
        return ans;
    }
};


