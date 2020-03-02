#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {

//         int k = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i]!=val)nums[k++]=nums[i];
//         }
//         return k;
//     }
// };


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int pos = 0;
        while (pos < len) {
            if (nums[pos] == val)
                nums[pos] = nums[--len];
            else
                ++pos;
        }

        return len;
    }
};


int main(int argc, char const *argv[])
{
    int arr[]={3,2,2,3};
    vector<int> vec (arr,arr+sizeof(arr)/sizeof(int));
    int res = Solution().removeElement(vec,3);
    for(int i=0;i<res;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    cout<<res;
    return 0;
}
