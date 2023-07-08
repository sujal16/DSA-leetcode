class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int range1 = 0;
        int lastNum1 = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(lastNum1<=nums[i]){
                lastNum1 = nums[i];
            }
            else{
                range1 = i;
            }
        }
        int range2 = 0;
        int lastNum2 = INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            if(lastNum2>=nums[i]){
                lastNum2 = nums[i];
            }
            else{
                range2 = i;
            }
        }
        int ans = 0;
        if(range1==0 && range2==0){
            return 0;
        }
        else{
            ans = abs(range2-range1)+1;
        }
        return ans;
    }
};

