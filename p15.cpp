// C++ program to find height of tree/ depth of tree and number of nodes.
#include <iostream>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

node *insertNode(node *root, int value)
{
    if (root == NULL)
    {
        return new node(value);
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

int getHeight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(getHeight(root->left), getHeight(root->right)) + 1;
}
int countNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

int main()
{
    node *root = NULL;
    int choice;
    while (1)
    {
        cout << endl;
        cout << "1 - Insert node" << endl
             << "2 - Exit" << endl
             << "3 - Print Tree's Inorder" << endl
             << "4 - Print height of tree" << endl
             << "5 - Print count of nodes" << endl;
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
        case 4:
            cout << "Height of Tree: " << getHeight(root) << endl;
            break;
        case 5:
            cout << "Count of nodes: " << countNodes(root) << endl;
            break;
        default:
            cout << "Invalid input";
        }
    }
    return 0;
}