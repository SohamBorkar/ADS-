// create BT/BST and insert elements of user choice, find mirror
// image, count nodes.

#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
TreeNode *insertNode(TreeNode *root, int value)
{
    if (root == NULL)
    {
        return new TreeNode(value);
    }
    if (value < root->val)
    {
        root->left = insertNode(root->left, value);
    }
    else
    {
        root->right = insertNode(root->right, value);
    }
    return root;
}
int countNodes(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}
TreeNode *mirrorImage(TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode *right = mirrorImage(root->right);
    TreeNode *left = mirrorImage(root->left);
    root->left = right;
    root->right = left;
    return root;
}
void InorderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->val << " ";
    InorderTraversal(root->right);
}
int main()
{
    TreeNode *root = NULL;
    // root = insertNode(root, 10);
    // root = insertNode(root, 20);
    // root = insertNode(root, 30);
    // root = insertNode(root, 12);
    // root = insertNode(root, 5);
    // root = mirrorImage(root);
    // InorderTraversal(root);
    int choice;
    while (1)
    {
        cout << endl;
        cout << "1 - Insert node" << endl
             << "2 - Exit" << endl
             << "3 - Print Tree's Inorder" << endl
             << "4 - Print count of nodes" << endl
             << "5 - Mirror Image" << endl;
        cout << "Enter choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter the value to be inserted:";
            cin >> value;
            root = insertNode(root, value);
            break;
        case 2:
            return 0;
            break;
        case 3:
            InorderTraversal(root);
            cout << endl;
            break;
        case 4:
            cout << "Count of nodes:" << countNodes(root) << endl;
            break;
        case 5:
            root = mirrorImage(root);
            cout << "Mirror imaged tree:" << endl;
            InorderTraversal(root);
            cout << endl;
            break;
        default:
            cout << "Invalid input";
        }
    }
    return 0;
}