#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if(m == 0)
            return 0;
        int n = obstacleGrid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i = 0 ; i < n && !obstacleGrid[0][i]; i++)
            dp[0][i] = 1;

        for(int i = 0 ; i < m && !obstacleGrid[i][0]  ; i++)
            dp[i][0] = 1;
        
        for(int i = 1; i < m ; i ++)
            for(int j = 1 ; j < n ; j ++)
            {

                if(obstacleGrid[i][j] == 1)
                {
                    dp[i][j] == 0;
                    break;
                }
                if(obstacleGrid[i - 1][j] == 0)
                    dp[i][j] += dp[i - 1][j];
                if(obstacleGrid[i][j - 1] == 0)
                    dp[i][j] += dp[i][j - 1];
            }

        return dp[m - 1][n - 1];

    }
};
// @lc code=end

int main(int argc, char const *argv[])
{

    vector<vector<int>> o(3,vector<int>(3,0));
    o[1][1] = 1;
    cout << Solution().uniquePathsWithObstacles(o);
    return 0;
}
