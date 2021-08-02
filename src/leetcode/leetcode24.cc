#include <string>
#include <vector>
#include <iostream>
#include "listnode.h"
using namespace std;

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *p = head;
        if (p == nullptr || p->next == nullptr)
        {
            return head;
        }
        head = p->next;
        ListNode *lastP = head;
        while (p != nullptr && p->next != nullptr)
        {
            ListNode *next = p->next;
            ListNode *tmp = next->next;
            lastP->next = next;
            next->next = p;
            p->next = tmp;
            lastP = p;
            p = p->next;
        }
        return head;
    }
};

int main()
{
    ListNode *n5 = new ListNode(5);
    ListNode *n4 = new ListNode(4, n5);
    ListNode *n3 = new ListNode(3, n4);
    ListNode *n2 = new ListNode(2, n3);
    ListNode *n1 = new ListNode(1, n2);
    Solution s;
    ListNode *head = s.swapPairs(n1);
    while (head != nullptr)
    {
        cout << head->val << endl;
        head = head->next;
    }
}