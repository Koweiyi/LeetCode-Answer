#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> record;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if (record.find(temp) != record.end())
            {
                vector<int> vec{record[temp], i};
                return vec;
            }
            record[nums[i]]=i;
        }
        vector<int> vec{-1, -1};
        return vec;
    }
};              

int main(int argc, char const *argv[])
{

    vector<int> vec{2, 7, 11, 15};
    vector<int> res(2);

    res = Solution().twoSum(vec, 9);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
