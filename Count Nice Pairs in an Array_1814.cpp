class Solution {
public:
    int reverse(int num){
        int ans = 0;
        while(num!=0){
            ans = ans*10 + num%10;
            num/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map <int,int> mp;
        int m = 1e9+7;
        int cnt = 0;
        for(int i=nums.size()-1;i>=0;i--){
            int diff = nums[i]-reverse(nums[i]);
            if(mp.count(diff)==true){
                cnt = (cnt+mp[diff])%m;
            }
            mp[diff]++;
        } 
        return cnt;
    }
};


