class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for(int i=nums.size();i>0;i--){
            for(int j=0;j<i-1;j++){
                nums[j] = nums[j]+nums[j+1];
                if(nums[j]>9){
                    nums[j]%=10;
                }
            }
        }
        return nums[0];
    }
};


