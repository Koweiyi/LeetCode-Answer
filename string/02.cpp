#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x); 

        if(s[0] == '-')
            std::reverse(s.begin() + 1, s.end());
        else 
            std::reverse(s.begin(), s.end());

        long long temp = stol(s);
        return (int)temp == temp ? temp : -1;
    }
};