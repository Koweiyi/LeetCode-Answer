
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> record(nums.begin(),nums.end());
        return nums.size() > record.size();
    }
};