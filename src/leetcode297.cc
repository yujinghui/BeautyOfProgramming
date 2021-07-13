#include <stdio.h>
#include <string>
#include <stack>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
    }

    // Decodes your encoded data to tree. -1001, 1001
    TreeNode *deserialize(string data)
    {
        TreeNode *root = data[0];
        TreeNode *current = root;
        TreeNode *upperNode = root;
        int lastVal = root->val;
        for (int i = 1; i < data.size(); i++)
        {
            int currentVal = data[i];
            if (currentVal == -1001)
            {
                current->left = NULL;
            }
            else if (currentVal = 1001)
            {
                current->right = NULL;
            }
            else
            {
                TreeNode *treeNode = new TreeNode();
                treeNode->val = currentVal;
                if (lastVal == -1001)
                {

                    current->right = treeNode;
                }
                else if (lastVal = 1001)
                {
                    upperNode->right = treeNode;
                }
                else
                {
                    current->left = treeNode;
                    current = treeNode;
                }
            }
            lastVal = currentVal;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));