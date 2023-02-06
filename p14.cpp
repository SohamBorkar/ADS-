// bt/bst tree traversal, inorder, preorder, postorder

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
};

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
};
int i = 0;
void postorder(node *root){
    if (root == NULL)
        return;
    i++;
    postorder(root -> right);
    postorder(root -> left);
    cout << root -> data << " ";
};

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    preorder(root);
    cout << " \n";
    inorder(root);
    cout << " \n";
    postorder(root);
        cout << "number of nodes are: "<< i;

    return 0;
}

/*
        1
    2       3
  4   5  6    7
*/