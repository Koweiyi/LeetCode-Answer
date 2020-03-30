#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {

private:

    vector<vector<vector<int>>> memo;

    pair<int,int> check(string str){
        int first = 0, second = 0;
        for(char c : str){
            if(c == '0')
                first ++;
            else 
                second ++;
        }
        return make_pair(first, second);
    } 
    int tryFindMAXFrom(const vector<string>& strs, int m, int n, int index){
        
        if(index == strs.size() || m < 0 || n < 0 )
            return 0;

        if(memo[m][n][index] != -1)
            return memo[m][n][index];
        
        pair<int,int> p = check(strs[index]);
        int res = tryFindMAXFrom(strs, m, n, index + 1);
        if(m - p.first >=0 && n - p.second >= 0)
            res = max(res, 1 + tryFindMAXFrom(strs, m - p.first, n - p.second, index + 1));

        memo[m][n][index] = res;
        return res;
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        if(strs.size() == 0)
            return 0;

        memo = vector<vector<vector<int>>>(m + 1, vector<vector<int>>(n + 1, vector<int>(strs.size(), -1)));
        
        return tryFindMAXFrom(strs, m, n, 0);

    }   
};

int main(int argc, char const *argv[])
{
    vector<string> test;
    test.push_back("10");
    test.push_back("0001");
    test.push_back("111001");
    test.push_back("1");
    test.push_back("0");
    int res = Solution().findMaxForm(test, 4, 3);
    
    return 0;
}
