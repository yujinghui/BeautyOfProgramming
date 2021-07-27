#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include "../common/listnode.h"
using namespace std;

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        ListNode *head = new ListNode(-1);
        ListNode *tail = head;
        int carray = 0;
        while (n2 != NULL || n1 != NULL)
        {
            int v2 = 0, v1 = 0;
            if (n2 != NULL)
            {
                v2 = n2->val;
                n2 = n2->next;
            }
            if (n1 != NULL)
            {
                v1 = n1->val;
                n1 = n1->next;
            }
            int sum = v1 + v2 + carray;
            int remain = sum % 10;
            carray = sum / 10;
            tail->next = new ListNode(remain);
            tail = tail->next;
        }
        if (carray > 0)
        {
            tail->next = new ListNode(carray);
        }
        ListNode *new_head = head->next;
        return new_head;
    }
};

int main()
{
    Solution *s = new Solution();
    ListNode *l1 = new ListNode(9);
    ListNode *l2 = new ListNode(9, l1);
    ListNode *l3 = new ListNode(9, l2);
    ListNode *l4 = new ListNode(9, l3);
    ListNode *l5 = new ListNode(9, l4);

    ListNode *s1 = new ListNode(9);
    ListNode *s2 = new ListNode(9, s1);
    ListNode *s3 = new ListNode(9, s2);
    ListNode *s4 = new ListNode(9, s3);
    ListNode *result = s->addTwoNumbers(l1, s1);
    while (result != NULL && result->next != NULL)
    {
        cout << result->val;
    }
}