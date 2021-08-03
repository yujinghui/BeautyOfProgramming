#include <string>
#include <vector>
#include <iostream>
#include "treenode.h"
using namespace std;

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return root;
        }
        TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

int main()
{
}