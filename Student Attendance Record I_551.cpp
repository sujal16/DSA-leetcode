class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                absent++;
            }
            else if(s[i]=='L'){
                if((s[i+1]=='L' && i<s.length()-1) && (s[i+2]=='L' && i<s.length()-1)){
                    return false;
                }
            }
        }
        if(absent>=2){
            return false;
        } return true;
    }
};