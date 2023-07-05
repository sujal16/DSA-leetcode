class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()>1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if(a!=b){
                a = abs(a-b);
                q.push(a);
            }
        }
        if(q.size()==1){
            int ans = q.top();
            return ans;
        }
        else{
            return 0;
        }
    }
};

