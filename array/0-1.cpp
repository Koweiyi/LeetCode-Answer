#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        if(nums.size() == 0 || nums.size() == 2)
            return -1;
        if(nums.size() == 0)
            return 0;
        
        int suml = 0;
        int sumr = 0;
        for(int i = 1 ; i < nums.size() ; i ++)
            sumr += nums[i];

        for(int i = 0; i < nums.size() ; i ++)
        {
            if(suml == sumr)
                return i;
            if(i == nums.size() - 1)
                break;
            suml += nums[i];
            sumr -= nums[i + 1];
        }

        return -1;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {-1,-1,-1,0,1,1};
    int res = Solution().pivotIndex(nums);
    cout << res;
    return 0;
}
