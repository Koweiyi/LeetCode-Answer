#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *vtNode = new ListNode(0);
        ListNode *curNode = vtNode;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val >= l2->val)
            {
                curNode->next = l2;
                l2 = l2->next;
            }
            else
            {
                curNode->next = l1;
                l1 = l1->next;
            }
            curNode = curNode->next;
        }
        curNode->next = l1 == NULL ? l2 : l1;
        ListNode* retNode = vtNode->next;
        delete vtNode;
        return retNode;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
