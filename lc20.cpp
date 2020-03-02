#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for(auto c :s){
            if(c == '('||c =='[' ||c=='{')
                charStack.push(c);
            else{
                if(charStack.empty())
                    return false;
                char temp = charStack.top();
                charStack.pop();
                if((temp=='('&&c!=')')||(temp=='['&&c!=']')||(temp=='{'&&c!='}'))
                    return false;
            }
        }
        if(charStack.empty())
            return true;
        return false;
    }
};
int main(int argc, char const *argv[])
{

    bool res = Solution().isValid("(]");
    cout<<res;
    return 0;
}