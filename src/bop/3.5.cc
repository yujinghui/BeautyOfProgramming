#include <stdio.h>
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
    p = reverse(l5);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
}