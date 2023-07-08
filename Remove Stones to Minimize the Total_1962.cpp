class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue <int> q;
        for(int i=0;i<piles.size();i++){
            q.push(piles[i]);
        }
        while(k!=0){
            int a = q.top();
            q.pop();
            if(a%2==0){
                q.push(a/2);
            }
            else{
                q.push(a/2+1);
            }
            k--;
        }
        int sum = 0;
        while(!q.empty()){
            int a = q.top();
            q.pop();
            sum += a;
        }
        return sum;
    }
};

