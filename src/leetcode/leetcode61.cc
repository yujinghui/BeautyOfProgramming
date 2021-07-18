
#include <string>
#include <vector>
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == nullptr || k == 0)
        {
            return head;
        }
        ListNode *current = head;
        ListNode *tail = head;
        int size = 1;
        while (tail->next != nullptr)
        {
            tail = tail->next;
            size++;
        }
        if (k % size == 0)
        {
            return head;
        }
        int p = size - k % size - 1;
        while (p--)
            current = current->next;
        tail->next = head;
        head = current->next;
        current->next = nullptr;
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
    ListNode *cur = n1;
    while (cur != nullptr)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << "-->" << endl;
    Solution s;
    ListNode *nn = s.rotateRight(n1, 7);
    cur = nn;
    while (cur != nullptr)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
}