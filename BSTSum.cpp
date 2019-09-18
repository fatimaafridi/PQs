class Solution
{
public:
    int sum = 0;
    int rangeSumBST(TreeNode *root, int L, int R)
    {
        if (root->val >= L && root->val <= R)
        {
            sum = sum + root->val;
        }
        if (root->left != NULL)
        {
            rangeSumBST(root->left, L, R);
        }
        if (root->right != NULL)
        {
            rangeSumBST(root->right, L, R);
        }
        return sum;
    }
};