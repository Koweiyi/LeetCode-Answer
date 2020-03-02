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
    void reverseString(vector<char>& s) {

        int i = 0, j = s.size()-1;
        while (i<j)
            swap(s[i++],s[j--]);
    }
};

int main(int argc, char const *argv[])
{

    string s("hello");
    vector<char> str(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        str[i]=s[i];
    }
    
    Solution().reverseString(str);

    for (int i = 0; i < str.size(); i++)
    {
        cout<<str[i];
    }
    

    return 0;
}
