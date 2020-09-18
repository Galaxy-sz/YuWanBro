class Solution {
public:
    int add(int a, int b) {
        unsigned int sum = a;
        unsigned int carry = b;
        while(carry){
            auto tempSum = sum;
            sum = sum ^ carry;
            carry = (carry & tempSum) << 1;
        }
        return (int)sum;
    }
};