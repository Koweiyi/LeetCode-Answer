
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
    void sortColors(vector<int> &nums)
    {
        int i = 0;//[0,i)为 0
        int j = nums.size();//[j,nums.size()-1]为 2
        int k = 0;
        while(k<j){
            if(nums[k]==0){
                swap(nums[i++],nums[k++]);
            }
            else if(nums[k]==2){
                nums[k]=nums[--j];
                nums[j]=2;
            }else{
                k++;
            }

        }
    }
};
int main(int argc, char const *argv[])
{
    int arr[] = {2, 0, 2, 1,1, 0 };
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    Solution().sortColors(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
