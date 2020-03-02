
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprofit = 0 ;
        for (int i = 1; i < prices.size(); i++)
        {
            if(prices[i]>prices[i-1])
                maxprofit+=prices[i]-prices[i-1];
        }
        return maxprofit;

    }
};

int main(int argc, char const *argv[])
{
    vector<int> vec{7,1,5,3,6,4};
    int maxprofit = Solution().maxProfit(vec);
    cout<<maxprofit;
    return 0;
}

