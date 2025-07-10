#include <iostream>
#include <queue>

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

Node *tomaketree()
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

void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    // real traversal start from here
    while (q.size() > 1)
    { // here sir doing some mistake  as it run in loops  for infi|| so better to  make it more than 1 tree;
        Node *front = q.front();
        q.pop();
        // base case
        if (front == NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            // root node  case
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root = tomaketree();
    cout << root->data << endl;
    cout << "printing preordertraversal" << " ";
    preordertraversal(root);
    cout << endl;

    cout << "printing Inordertraversal" << " ";
    inordertraversal(root);
    cout << endl;
    cout << "printing postordertraversal" << " ";
    postordertraversal(root);
    cout << endl;

    cout << "Level order" << endl;
    levelordertraversal(root);
    // cout << endl;

    return 0;
}
