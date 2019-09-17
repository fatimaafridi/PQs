
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    int count = 1;
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;
        if (root->right != NULL)
        {
            count++;
            countNodes(root->right);
        }
        else if (root->left != NULL)
        {
            count++;
            countNodes(root->left);
        }
        return count;
    }
};