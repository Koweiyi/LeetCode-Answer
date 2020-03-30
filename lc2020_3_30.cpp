#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastRemaining(int n, int m)
    {
        if (n == 1)
            return 0;
        int x = lastRemaining(n - 1, m);
        return (m + x) % n;
    }
};

int main(int argc, char const *argv[])
{
    //int res = Solution().lastRemaining(7, 3);
    cout << 15.86 * 7;
    return 0;
}
