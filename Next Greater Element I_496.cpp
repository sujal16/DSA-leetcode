class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        for(int i=0;i<nums1.size();i++){
            int maxi = -1;
            int ans1 = 2000;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans1 = j;
                }
                if(ans1<j && nums1[i]<nums2[j]){
                    maxi = max(maxi,nums2[j]);
                    break;
                }
            }   ans.push_back(maxi);
        }   return ans;
    }
};