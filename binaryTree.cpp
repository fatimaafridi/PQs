#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    node *left = NULL;
    node *right = NULL;
    int val;
};
node *root = NULL;
class Tree
{
public:
    void insertValues(int val)
    {
        node *newNode = new node();
        newNode->val = val;
        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            insertValues(val, root);
        }
    }
    void inorderTraverse(node *start)
    {
        if (start != NULL)
        {
            inorderTraverse(start->left);
            cout << start->val << endl;
            inorderTraverse(start->right);
        }
    }

    void insertValues(int val, node *leaf)
    {
        if (leaf->left == NULL)
        {
            leaf->left = new node();
            leaf->left->val = val;
        }

        else if (leaf->right == NULL)
        {
            leaf->right = new node();
            leaf->right->val = val;
        }
        else
        {
            insertValues(val, leaf->left);
        }
    }
};

int main()
{
    Tree tree;
    tree.insertValues(1);
    tree.insertValues(2);
    tree.insertValues(3);
    tree.insertValues(4);
    tree.inorderTraverse(root);
}
