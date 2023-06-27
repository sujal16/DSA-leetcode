class Solution {
public:
    int findSquare(int n){
        int num = 0;
        while(n!=0){
            int digit = n%10;
            num += digit*digit;
            n/=10;
        }
        return num;
    }
    bool isHappy(int n) {
        while(n!=1){
            if(n<5){
                break;
            }
            n = findSquare(n);
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};
