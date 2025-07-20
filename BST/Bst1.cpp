#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *InsertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = InsertIntoBST(root->left, data);
    }
    else
    {
        root->right = InsertIntoBST(root->right, data);
    }
    return root;
}
void createBST(Node *&root)
{
    cout << "Enter the value for making the tree " << endl;
    ;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = InsertIntoBST(root, data);
        cout << "Enter the value for making the tree";
        cin >> data;
    }
}
void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {

                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
// preorde traversal  for binary search tree
// run in NLR fashion
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// inorder run on binary search tree in fashionn of LNR
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// postotrder run on binary search tree in fashion on LRN
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node *minval(Node *root)
{
    if (root == NULL)
    {
        cout << "No min value existed";
        return NULL;
    }
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxval(Node *root)
{
    if (root == NULL)
    {
        cout << "No max value";
        return NULL;
    }
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
} // working fine

int main()
{
    Node *root = NULL;
    createBST(root);
    levelordertraversal(root);

    // Node *gh = minval(root);
    // if (gh == NULL)
    //{
    //     cout << "there is no element that is minimum";
    // }
    // else
    //{
    //     cout << "minimum val is :" << gh->data << endl;
    // }
    // return 0;

    Node *hg = maxval(root);
    if (hg == NULL)
    {
        cout << "there is no element that is maximum";
    }
    else
    {
        cout << "maxium val is :" << hg->data << endl;
    }
    return 0;
}
