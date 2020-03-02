#include<bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<=1)
        {
            return nums.size();
        }
        int j = 0;
        for(int i = 1;i < nums.size();i++){
            if(nums[i]!=nums[j])
                nums[++j]=nums[i];
        }
        return j+1;
    
    }
};


int main(int argc, char const *argv[])
{
    int arr[] = {1,1,2};
    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));

    int res = Solution().removeDuplicates(vec);

    for (int i = 0; i < res; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl<<res;
    
    return 0;
}
