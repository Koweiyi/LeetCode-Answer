#include<bits/stdc++.h>
using namespace std;


// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> record;
        for(char c : s)
            record[c] ++;
        
        int res = 0;
        bool has_one = false; 
        for(unordered_map<char,int>::iterator it = record.begin(); it != record.end() ; ++it){
            if(!has_one && it->second % 2)
                has_one = true;
            res += (it->second / 2) * 2;
        }
        if(has_one)
            res ++;
        return res;
    }
};

int main(int argc, char const *argv[])
{
    int res = Solution().longestPalindrome("bb");
    return 0;
}
