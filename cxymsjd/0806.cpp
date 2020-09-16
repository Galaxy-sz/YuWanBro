class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        int num = A.size();
        recursive(num,A,B,C);
    }
private:
    void recursive(int n, vector<int>& A, vector<int>& B, vector<int>& C){
        if(n == 0) return;
        else{
            recursive(n-1,A,C,B);
            C.push_back(A.back());
            A.pop_back();
            recursive(n-1,B,A,C);
            return;
        }
    }

};