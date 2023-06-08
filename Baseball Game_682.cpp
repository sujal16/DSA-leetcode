class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                int ans = s.top();
                s.push(2*ans);
            }
            else if(operations[i]=="+"){
                int ans1 = s.top();
                s.pop();
                int ans2 = s.top();
                s.push(ans1);
                s.push(ans1+ans2);
            }
            else{
                int ans3 = stoi(operations[i]);
                s.push(ans3);
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum+= s.top();
            s.pop();
        } return sum;
    }
};