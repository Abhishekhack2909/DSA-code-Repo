// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// binary tree code
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *tomaketree( )
{

    // cout << "Enter the value for making the tree";
    int data;
    cin >> data;
    // base case
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = tomaketree();
    root->right = tomaketree();
    return root;
}

// preordertraversal run it NLR fashion  at evey tree segment
void preordertraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // N
    cout << root->data << "  ";
    // L
    preordertraversal(root->left);
    // R
    preordertraversal(root->right);
}
// inorder traversal  run in LNR fashion

void inordertraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // L
    inordertraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inordertraversal(root->right);
}

// postordertraversal run in LRN  fashion
void postordertraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // L

    postordertraversal(root->left);
    // R
    postordertraversal(root->right);
    // N
    cout << root->data << " ";
}

int main()
{
    Node *root = tomaketree();
    cout << root->data << endl;
    cout << "printing preordertraversal" << " ";
    preordertraversal(root);
    cout << endl;
    cout << "printing inordertraversal" << " ";
    inordertraversal(root);
    cout << endl;
    cout << "printing postordertraversal" << " ";
    postordertraversal(root);
    cout << endl;

    return 0;
}
