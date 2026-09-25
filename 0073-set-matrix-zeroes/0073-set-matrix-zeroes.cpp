class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeroPositions;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i ++){
            for(int j = 0; j < n; j++){
                if (matrix[i][j] == 0){
                    zeroPositions.push_back({i , j});
                }
            }
        }
        for(auto it: zeroPositions){
            for(int i = 0; i < m; i++){
                matrix[i][it.second] = 0; 
            }
            for(int j = 0; j < n; j++){
                matrix[it.first][j] = 0;
            }
        }
    }
};