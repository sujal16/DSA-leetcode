class Solution {
public:
    int maxCoins(vector<int>& piles) {
        priority_queue <int> q;
        for(int i=0;i<piles.size();i++){
            q.push(piles[i]);
        }
        int k = piles.size()/3;
        int ans = 0;
        while(k!=0){
            q.pop();
            int a = q.top();
            ans += a;
            q.pop();
            k--;
        }
        return ans;
    }
};


