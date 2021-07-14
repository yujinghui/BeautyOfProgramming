#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftMaxDepth = maxDepth(root->left);
        int rightMaxDepth = maxDepth(root->right);
        return max(leftMaxDepth, rightMaxDepth) + 1;
    }
};

int main()
{
    TreeNode *node = new TreeNode();
    TreeNode *node1 = new TreeNode(0, node, nullptr);
    TreeNode *node2 = new TreeNode(0, node1, nullptr);
    TreeNode *node3 = new TreeNode(0, node2, nullptr);
    TreeNode *node4 = new TreeNode(0, node3, nullptr);

    Solution *s = new Solution();
    cout << s->maxDepth(node4) << endl;
}