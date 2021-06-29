/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
#include<string>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }
        ListNode * fast = head;
        ListNode * slow = head;
        while (fast != NULL && fast->next != NULL && slow != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) {
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution* s = new Solution();
    s->hasCycle();
}