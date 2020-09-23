class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() == 0) return true;
        for(int i = 0;i<board.size();i++){
            for(int j = 0; j<board[0].size();j++){
                if(board[i][j] == word[0] && travel(board, word, i ,j, 0)) return true;
            }
        }
        return false;
    }
private:
    bool travel(vector<vector<char>>& board, string word,int i,int j,int cnt){
        if(cnt == word.size()) return true;
        if(i<0 || i>board.size()-1|| j<0 || j>board[0].size()-1 || board[i][j] != word[cnt]) return false;
        char temp = board[i][j];
        board[i][j] = '\0';
        if(
            travel(board, word, i-1, j,cnt+1) ||
            travel(board, word, i+1, j,cnt+1) ||
            travel(board, word, i, j-1,cnt+1) ||
            travel(board, word, i, j+1,cnt+1)
        ) {
            return true;
        } else{
            board[i][j] =temp;
            return false;
        }
    }
};
