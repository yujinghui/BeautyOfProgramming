#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <queue>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }
        else if (p == nullptr || q == nullptr)
        {
            return false;
        }
        queue<TreeNode *> queue1, queue2;
        queue1.push(p);
        queue2.push(q);
        while (!queue1.empty() && !queue2.empty())
        {
            TreeNode *p1 = queue1.front();
            TreeNode *q1 = queue2.front();
            queue1.pop();
            queue2.pop();
            if (p1 == nullptr && q1 == nullptr)
            {
                continue;
            }
            if (p1 != nullptr && q1 != nullptr && p1->val != q1->val)
            {
                return false;
            }
            if (p1 == nullptr && q1 != nullptr)
                return false;
            if (q1 == nullptr && p1 != nullptr)
                return false;
            queue1.push(p1->left);
            queue1.push(p1->right);
            queue2.push(q1->left);
            queue2.push(q1->right);
        }
        return queue1.empty() && queue2.empty();
    }
};

int main()
{
    TreeNode *node = new TreeNode();
    TreeNode *node1 = new TreeNode(0, node, nullptr);
    TreeNode *node2 = new TreeNode(0, node1, nullptr);
    TreeNode *node3 = new TreeNode(0, node2, nullptr);
    TreeNode *node4 = new TreeNode(0, node3, nullptr);
    TreeNode *nnode = new TreeNode();
    TreeNode *nnode1 = new TreeNode(0, nnode, nullptr);
    TreeNode *nnode2 = new TreeNode(0, nnode1, nullptr);
    TreeNode *nnode3 = new TreeNode(0, nnode2, nullptr);
    TreeNode *nnode4 = new TreeNode(0, nnode3, nullptr);
    Solution *s = new Solution();
    cout << s->isSameTree(node4, nnode4) << endl;
}