class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        while(n!=0){
            int cnt = n/5;
            ans += cnt;
            n/=5;
        }
        return ans;
    }
};

