class Solution {
public:
    int movingCount(int m, int n, int k) {
        vector<vector<int>> board(101,vector<int>(101));
        travel(board, 0 ,0, m,n,k);
        int cnt = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == 1) cnt++;
            }
        }
        return cnt;
    }
private:
    void travel(vector<vector<int>>& board, int i, int j, int m, int n, int k){
        if(i<0 || i>m-1|| j<0 || j>n-1 || !isOK(i, j, k) || board[i][j] == 1) return;
        board[i][j] = 1;
        travel(board,  i-1, j, m ,n, k);
        travel(board, i+1, j, m, n, k);
        travel(board,  i, j-1,m, n, k);
        travel(board, i, j+1,m, n, k);
        return;
    }

    bool isOK(int i, int j, int k){
        int sum = 0;
        while(i){
            sum+= i%10;
            i = i/10;
        }
        while(j){
            sum+= j%10;
            j = j/10;
        }
        if (sum <= k) return true;
        else return false;
    }
};
