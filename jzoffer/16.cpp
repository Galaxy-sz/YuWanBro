class Solution {
public:
    double myPow(double x, int n) {
        return longPow(x,n);
    }
private:
    double longPow(double x, long n) {
        if(n == 0) return 1;
        else if(n < 0){
            x = 1/x;
            n = 0-n;
        }
        if(n & 1){
            return x*myPow(x*x,n>>1);
        }else{
            return myPow(x*x,n>>1);
        }
    }
};