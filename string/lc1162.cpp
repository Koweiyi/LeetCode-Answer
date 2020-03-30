#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:

    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        queue<vector<int>> q;
        for(int i = 0 ; i < n ; i ++ )
            for(int j = 0 ; j < n ; j ++ )
                if(grid[i][j])
                    q.push({i, j});
        
        if(q.size() == 0 || q.size() == n * n )
            return -1;

        int res = -1;
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0 ; i < size ; i ++ ){
                vector<int> f = q.front(); q.pop();
                for(int j = 0 ; j < 4 ; j ++ ){
                    int nx = f[0] + d[j][0];
                    int ny = f[1] + d[j][1];
                    if(nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 0 )
                    {
                        q.push({nx, ny});
                        grid[nx][ny] = -1;
                    }
                }
            }
            res ++;
        }

        return res;
    }
};
// @lc code=end

int main(int argc, char const *argv[])
{
    vector<vector<int>> test = {{1,0,1}, {0,0,0}, {1,0,1}};
    int res = Solution().maxDistance(test);
    cout << res;   
    return 0;
}