#include <string>
#include <vector>
#include <set>
#include <iostream>
#include "3.4.ext.h"
using namespace std;
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        return reverse(head);
    }
};
int main()
{
    ListNode *l1 = new ListNode(21);
    ListNode *l2 = new ListNode(17, l1);
    ListNode *l3 = new ListNode(16, l2);
    ListNode *l4 = new ListNode(15, l3);
    ListNode *l5 = new ListNode(9, l4);
    ListNode *p = l5;
    Solution s;
    ListNode *c = s.reverseList(p);
    while (c != nullptr)
    {
        cout << c->val << endl;
        c = c->next;
    }
}