class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long int sum = 0;
        priority_queue <int> q;
        for(int i=0;i<gifts.size();i++){
            q.push(gifts[i]);
        }
        while(k!=0){
            int front = q.top();
            q.pop();
            q.push(sqrt(front));
            k--;
        }
        while(!q.empty()){
            int ans = q.top();
            q.pop();
            sum += ans;
        }
        return sum;
    }
};

