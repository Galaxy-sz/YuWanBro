class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int front = 0, back = len-1;
        while(front < back){
            swap(s[front],s[back]);
            front ++;
            back --;
        }
    }
};