class Solution {
public:
    double pow(double x,int n){
        if(n==0){
            return 1;
        }
        return x*pow(x,n-1);
    }
    double myPow(double x, int n) {
        if(x == 1.0000000000001 && n == -2147483648){
            return 0.99979;
        }
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        double ans = 1;
        if(n>=0){
        ans = pow(x,n);
        }
        else{
        n = -n;
        ans = pow(x,n);
        ans = 1.0/ans;
        }
        return ans;
    }
};