class Solution {
public:
    int findTheWinner(int n, int k) {
        queue <int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        int cnt = 1;
        while(q.size()!=1){
            if(cnt%k==0){
                q.pop();
            }
            else{
                int a = q.front();
                q.pop();
                q.push(a);
            }
            cnt++;
        } return q.front();
    }
};
