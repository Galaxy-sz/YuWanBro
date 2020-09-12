class Solution {
public:
    int reverseBits(int num) {
        if (num == -1) return 32;// 原始数据后面有改动，必须开始就做判断
        int ans = 0;
        int cnt = 0, pre = 0;
        for (int i = 0; i < 32; i++) {
            if (num & 1) {
                cnt++;
            } else {
                ans = max(ans, cnt + pre + 1);
                pre = cnt;
                cnt = 0;
            }
            num >>= 1;
        }
        ans = max(ans, cnt + pre + 1);
        return ans;
    }
};


