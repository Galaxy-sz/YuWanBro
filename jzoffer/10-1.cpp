class Solution {
public:
    int fib(int n) {
        int firstNum = 0, secondNum=1;
        for(int i = 0; i<n; i++){
            int firstTemp = firstNum;
            firstNum = secondNum%(1000000007);
            secondNum = (secondNum+firstTemp)%(1000000007);
        }
        return firstNum;
    }
};