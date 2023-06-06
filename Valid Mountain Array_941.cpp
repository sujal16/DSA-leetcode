// class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max = *max_element(arr.begin(),arr.end());
        if(arr[0]>=max || arr[arr.size()-1]>=max){
            return false;
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
        }
        int cnt = 0;
        bool b = false;
        for(int i=0;i<arr.size()-1;i++){
            if(b==false && arr[i]>arr[i+1]){
                cnt++;
                b = true;
            }
            if(b==true && arr[i]<arr[i+1]){
                b = false;
                cnt++;
            }
        }
        if(cnt>1){
            return false;
        }
        return true;
    }
};