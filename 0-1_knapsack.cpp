#include <bits/stdc++.h>
using namespace std;

int knapsack01_0(const vector<int> &w, const vector<int> &v, int C){
    assert(w.size() == v.size() && C >= 0);
    if (w.size() == 0 || C == 0)
        return 0;

    vector<int> dp(C + 1, -1);
    for (int j = 0; j <= C; j++)
        dp[j] = j >= w[0] ? v[0] : 0;

    for (int i = 1; i < w.size(); i++)
        for (int j = C; j >= w[i]; j--)
            dp[j] = max(dp[j], v[i] + dp[j - w[i]]);

    return dp.back();
}
int knapsack_1(const vector<int> &w, const vector<int> &v, int index, int C, vector<vector<int>> &memo, vector<bool> &ans){
    if (index < 0 || C <= 0)
        return 0;

    if (memo[index][C] != -1)
        return memo[index][C];

    int res = knapsack_1(w, v, index - 1, C, memo, ans);
    if (C >= w[index])
        res = max(res, v[index] + knapsack_1(w, v, index - 1, C - w[index], memo, ans));

    ans[index] = res != memo[index - 1][C];
    memo[index][C] = res;
    return res;
}
