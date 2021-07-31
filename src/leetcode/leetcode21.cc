#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "listnode.h"

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *header = NULL;
        ListNode *c1 = l1;
        ListNode *c2 = l2;
        if (c1 == NULL && c2 == NULL)
        {
            return header;
        }
        if (c1 == NULL)
        {
            return c2;
        }
        if (c2 == NULL)
        {
            return c1;
        }
        if (c1->val > c2->val)
        {
            header = c2;
            c2 = c2->next;
        }
        else
        {
            header = c1;
            c1 = c1->next;
        }
        ListNode *tail = header;
        while (c1 != nullptr || c2 != nullptr)
        {
            if (c1 == nullptr)
            {
                tail->next = c2;
                return header;
            }
            if (c2 == nullptr)
            {
                tail->next = c1;
                return header;
            }
            if (c1->val > c2->val)
            {
                tail->next = c2;
                tail = c2;
                c2 = c2->next;
            }
            else
            {
                tail->next = c1;
                tail = c1;
                c1 = c1->next;
            }
        }
        return header;
    }
};

int main()
{
    ListNode *l1 = new ListNode(21);
    ListNode *l2 = new ListNode(17, l1);
    ListNode *l3 = new ListNode(16, l2);
    ListNode *l4 = new ListNode(15, l3);
    ListNode *l5 = new ListNode(9, l4);

    ListNode *s1 = new ListNode(13);
    ListNode *s2 = new ListNode(7, s1);
    ListNode *s3 = new ListNode(6, s2);
    ListNode *s4 = new ListNode(5, s3);
    ListNode *s5 = new ListNode(3, s4);
    Solution *s = new Solution();
    ListNode *newList = s->mergeTwoLists(s5, l5);
    ListNode *current = newList;
    while (current != NULL && current->next != NULL)
    {
        cout << current->val << endl;
        current = current->next;
    }
    cout << "over" << endl;
}