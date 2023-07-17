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
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]++;
            }
            int num = reverse(nums[i]);
            if(mp.find(num)==mp.end()){
                mp[num]++;
            }
        }
        return mp.size();
    }
};


