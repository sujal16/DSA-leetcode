class Solution {
public:
    void reverse(vector<int> &nums,int start,int end){
        int i = start;
        int j = end;
        while(i<j){
            swap(nums[i++],nums[j--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=k){
            k = k%nums.size();
        }
        if(k==0){

        }
        else{
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
        }
    }
};