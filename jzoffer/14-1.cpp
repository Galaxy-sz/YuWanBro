class Solution {
public:
    int cuttingRope(int n) {
        int dp[60] = {0};
        dp[2] = 1;
        dp[3] = 2;
        for(int i = 4; i<=n; i++){
            for(int j = 1; j<i; j++){
                dp[i] = max(dp[i],max(j*(i-j),j*dp[i-j]));
            }
        }
        return dp[n]; 
    }
};