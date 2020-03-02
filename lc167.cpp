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
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        int i = 0;
        int j = numbers.size() - 1;
        vector<int> res(2);
        while (i < j){
            int sum = numbers[i] + numbers[j];
            if (sum == target){
                res[0] = i + 1;
                res[1] = j + 1;
                return res;
            }
            else if (sum > target)
                j--;
            else
                i++;
        }
        res[0] = -1;
        res[1] = -1;
        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> vec{2, 7, 11, 19};
    vector<int> res(2);

    res = Solution().twoSum(vec, 9);

    for (int i = 0; i < res.size(); i++)
    {
        /* code */
        cout << res[i] << " ";
    }

    return 0;
}
