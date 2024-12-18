// https://leetcode.com/problems/minimum-path-sum

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        // vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(),0));

        // dp[0][0] = grid[0][0];
        int m = grid.size();
        int n = grid[0].size();

        for(int i=1; i<m; i++){
            grid[i][0] = grid[i-1][0] + grid[i][0];
        }

        for(int i=1; i<n; i++){
            grid[0][i] = grid[0][i-1] + grid[0][i];
        }

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                grid[i][j] = grid[i][j] + min(grid[i-1][j],grid[i][j-1]);
            }
        }

        return grid[m-1][n-1];  
    }
};