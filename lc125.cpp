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
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(!isalpha(s[i])&&!isdigit(s[i])) 
                i++;
            else if
                (!isalpha(s[j])&&!isdigit(s[j]))j--;
            else if(!(s[i]==s[j]||tolower(s[i])==s[j]||toupper(s[i])==s[j]))
                return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
};


int main(int argc, char const *argv[])
{
    string s = "0P";
    bool res = Solution().isPalindrome(s);
    cout<<res;
    return 0;
}
