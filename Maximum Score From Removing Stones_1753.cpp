class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int k = 0;
        priority_queue <int> q;
        q.push(a);
        q.push(b);
        q.push(c);
        while(q.size()>1){
            int l = q.top();
            q.pop();
            int m = q.top();
            q.pop();
            if(l!=1){
                l-=1;
                q.push(l);
            }
            if(m!=1){
                m-=1;
                q.push(m);
            }
            cout<<k;
            k++;
        }
        return k;
    }
};

