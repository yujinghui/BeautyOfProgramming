#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include "../common/listnode.h"
using namespace std;

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *oddHead = head;
        ListNode *evenHead = head->next;
        if (evenHead == nullptr)
        {
            return oddHead;
        }
        ListNode *oddPtr = oddHead;
        ListNode *evenPtr = evenHead;
        int i = 1;
        while (evenPtr != nullptr && evenPtr->next != nullptr)
        {
            oddPtr->next = evenPtr->next;
            oddPtr = oddPtr->next;
            evenPtr->next = oddPtr->next;
            evenPtr = evenPtr->next;
        }
        oddPtr->next = evenHead;
        return oddHead;
    }
};

int main()
{
    Solution *s = new Solution();
    ListNode *l1 = new ListNode(5);
    ListNode *l2 = new ListNode(4, l1);
    ListNode *l3 = new ListNode(3, l2);
    ListNode *l4 = new ListNode(2, l3);
    ListNode *l5 = new ListNode(1, l4);
    ListNode *h = s->oddEvenList(l5);
    while (h != nullptr)
    {
        cout << h->val << " ";
        h = h->next;
    }
}