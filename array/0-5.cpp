#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        assert(nums.size() > 0);
        int ans = nums[0];
        if(nums.size() > 1)
            for(int i = 1 ; i < nums.size() ; i ++)
                ans ^= nums[i];
        
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<int> test = {2,2,1};
    int res = Solution().singleNumber(test);
    cout << res;
    
    return 0;
}
