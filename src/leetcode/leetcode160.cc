#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <iostream>
#include "listnode.h"
using namespace std;

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        ListNode *pA = headA;
        ListNode *pB = headB;
        while (pA != pB)
        {
            pA = (pA == nullptr ? headB : pA->next);
            pB = (pB == nullptr ? headA : pB->next);
        }
        return pA;
    }
};

int main()
{
    Solution s;
    s.getIntersectionNode();
}