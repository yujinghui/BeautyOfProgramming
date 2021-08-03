#include <string>
#include <vector>
#include <iostream>
#include "listnode.h"
using namespace std;
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr)
        {
            return false;
        }
        ListNode *p = head;
        int size = 0;
        vector<int> nums;
        while (p != nullptr)
        {
            size++;
            nums.push_back(p->val);
            p = p->next;
        }
        if (size == 1)
        {
            return true;
        }
        int i = 0, j = nums.size() - 1;
        while (true)
        {
            if (nums[i] != nums[j])
                return false;
            i++;
            j--;
            if (i >= j)
            {
                break;
            }
        }
        return true;
    }
};

int main()
{
    ListNode *l1 = new ListNode(5);
    ListNode *l2 = new ListNode(6, l1);
    ListNode *l3 = new ListNode(5, l2);

    Solution s;
    cout << s.isPalindrome(l3);
}