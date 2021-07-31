#include "listnode.h"


ListNode *reverse(ListNode *head)
{
    ListNode *p = head;
    ListNode *tmp = p->next;
    p->next = nullptr;
    while (tmp != nullptr)
    {
        ListNode *tmp1 = tmp->next;
        tmp->next = p;
        p = tmp;
        tmp = tmp1;
    }
    return p;
}