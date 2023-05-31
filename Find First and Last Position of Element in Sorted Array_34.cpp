class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans1 = -1;
        while(s<=e){
            if(nums[mid]==target){
                ans1 = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            } mid = s+(e-s)/2;
        } ans.push_back(ans1);
        int s1 = 0;
        int e1 = nums.size()-1;
        int mid1 = s1+(e1-s1)/2;
        int ans2 = -1;
        while(s1<=e1){
            if(nums[mid1]==target){
                ans2 = mid1;
                s1 = mid1+1;
            }
            else if(nums[mid1]>target){
                e1 = mid1-1;
            }
            else{
                s1 = mid1+1;
            } mid1 = s1+(e1-s1)/2;
        } ans.push_back(ans2);
        return ans;
    }
};