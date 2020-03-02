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
        if (nums.size()<=2)
            return nums.size();
        
        int num1 = 0,num2 = 1;
        for (int i = 2; i < nums.size(); i++)
        {
            if(nums[i]!=nums[num2]||nums[num1]!=nums[num2]){
                nums[++num2]=nums[i];
                num1++;   
            }
        }
        return num2+1;
        
    }
};


int main(int argc, char const *argv[])
{
    vector<int> vec{1,1,1,2,2,3};
    int size = Solution().removeDuplicates(vec);

    for (int i = 0; i < size; i++)
    {
        cout<< vec[i]<<" ";
    }
    
    return 0;
}
