#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {

        unordered_map<char, int> record;
        for (auto c : t)
            record[c]++;
        int cnt = 0, mxlength = s.size() + 1, left = 0, start = left;
        for (int i = 0; i < s.size(); i++)
        {
            if (--record[s[i]] >= 0)
                cnt++;
            while (cnt == t.size())
            {
                if (mxlength > i - left + 1)
                {
                    mxlength = i - left + 1;
                    start = left;
                }
                if (++record[s[left++]] > 0)
                    cnt--;
            }
        }
        return s.substr(start, mxlength);
    }
};
int main(int argc, char const *argv[])
{
    string str = Solution().minWindow("ADOBECODEBANC", "ABC");
    cout << str;
    return 0;
}
