#include <string>
#include <vector>
#include <iostream>
#include "../common/listnode.h"
using namespace std;

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *tail = head;
        ListNode *ptr = head;
        int n = k;
        while (true)
        {
            if (tail == nullptr)
            {
                return ptr;
            }
            if (n--)
            {
                return ptr;
            }
            tail = tail->next;
        }
        ptr = tail;
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
    vector<string> result = s.reverseKGroup(n1, 9);
    for (auto x : result)
    {
        cout << x << endl;
    }
}