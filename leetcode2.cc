#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        ListNode *head = new ListNode();
        ListNode *current = head;
        int carray = 0;
        while (n2 != NULL || n1 != NULL)
        {

            int v2 = n2->val;
            int v1 = n1->val;
            int sum = v1 + v2 + carray;
            int remain = sum % 10;
            carray = sum / 10;
            current->next = new ListNode(remain);
        }
        if (carray > 0)
        {
            current->next = new ListNode(carray);
        }
        ListNode *new_head = head->next;
        free(head);
        return new_head;
    }
};

int main()
{
    Solution *s = new Solution();
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(7, l1);
    ListNode *l3 = new ListNode(6, l2);
    ListNode *l4 = new ListNode(5, l3);
    ListNode *l5 = new ListNode(9, l4);

    ListNode *s1 = new ListNode(1);
    ListNode *s2 = new ListNode(7, s1);
    ListNode *s3 = new ListNode(6, s2);
    ListNode *s4 = new ListNode(5, s3);
    ListNode *s5 = new ListNode(9, s4);
    s->addTwoNumbers(l1, s1);
}