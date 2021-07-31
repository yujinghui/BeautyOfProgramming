#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
#include "listnode.h"

void deleteRandomNode(ListNode *ptr)
{
    if (ptr == nullptr)
    {
        cout << "prt is null" << endl;
    }
    ListNode *ptrNext = ptr->next;
    ptr->next = ptrNext->next;
    ptr->val = ptrNext->val;
    delete ptrNext;
}
int main()
{
    ListNode *l1 = new ListNode(21);
    ListNode *l2 = new ListNode(17, l1);
    ListNode *l3 = new ListNode(16, l2);
    ListNode *l4 = new ListNode(15, l3);
    ListNode *l5 = new ListNode(9, l4);
    ListNode *p = l5;
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
    p = l5;
    deleteRandomNode(l3);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
}