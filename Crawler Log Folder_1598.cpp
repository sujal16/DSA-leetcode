class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> s;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../"){
                if(s.size()>0){
                    s.pop();
                }
            }
            else if(logs[i]=="./"){
            }
            else{
                s.push(logs[i]);
            }
        } return s.size();
    }
};