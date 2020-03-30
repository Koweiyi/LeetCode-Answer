#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        unordered_map<int, int> record;
        for(int num : nums1)
            record[num] ++;
        
        for(int num : nums2)
            if(record[num] > 0)
            {
                res.push_back(num);
                record[num] --;
            }
        
        return res;
    }
};