#include <vector>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) return false;
        if (matrix[0].size() == 0) return false;
        int i = 0;
        int j = matrix.size()-1;
        while(i <= matrix[0].size()-1 && j >= 0){
            if (matrix[j][i] == target) return true;
            else if(matrix[j][i] < target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};