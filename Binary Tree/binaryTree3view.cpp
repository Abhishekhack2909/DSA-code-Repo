#include <iostream>
#include <queue>
#include <map>
using namespace std;

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

Node *createTree()
{
    cout << "Enter the value for Node : ";
    int value;
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    // create Node;
    Node *root = new Node(value);
    cout << "Entering in left of: " << value << endl;
    root->left = createTree();
    cout << "Entering in right of: " << value << endl;
    root->right = createTree();
    return root;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout << endl;
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
// view mode
void printleftview(Node *root, int level, vector<int> &leftview)
{
    // we need to print only left view so thier is no right view
    // base case
    if (root == NULL)
    {
        return;
    }
    if (level == leftview.size())
    {
        leftview.push_back(root->data);
    }
    // recursion
    printleftview(root->left, level + 1, leftview);
    printleftview(root->right, level + 1, leftview);
}

// IMP
void printTopview(Node *root)
{
    // we use map because to store the index value(negative in left side and + in right side) and  value of root , if any root value is just  down of any other index value  than we   discard the   other value
    map<int, int> hdtomake;
    // we make queue to store the present root and index value(same as map's index value),  we need to cheak one by one to not to store the value which  is down of the top view
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;
        // we need to check  the the element is alredy stored in it or not

        if (hdtomake.find(hd) == hdtomake.end())
        {
            hdtomake[hd] = frontNode->data;
        }
        // now we code for his children
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1)); // hd-1 is that because  we iterrate in left side of tree
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1)); // hd+1 is that because we iterate in right side of tree
        }
    }

    cout << "printing the top view";
    for (auto i : hdtomake) // map me aesa hi karte hai
    {
        cout << i.second << " ";
    }
}

// bottom view
void printbottomview(Node *root)
{
    map<int, int> hdtomakeview;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        hdtomakeview[hd] = frontNode->data; // only this condition changes  for bottom view
        // now for children
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "Printing the bottom view " << endl;
    ;
    for (auto v : hdtomakeview)
    {
        cout << v.second << " ";
    }
}

void printleftboundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << " ";

    if (root->left != NULL)
    {
        printleftboundary(root->left);
    }
    else
    {
        printleftboundary(root->right);
    }
}
void printRightboundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    if (root->right != NULL)
    {
        printRightboundary(root->right);
    }
    else
    {
        printRightboundary(root->left);
    }
    cout << root->data << " ";
}

void printleafboundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    printleafboundary(root->left);
    printleafboundary(root->right);
}
void printboundary(Node *root)
{
    if (root == NULL)
        return;
    // more optimal way
    cout << root->data << " ";
    printleftboundary(root->left);
    printleafboundary(root->left);
    printleafboundary(root->right);
    printRightboundary(root->right);
}

int main()
{
    Node *root = createTree();
    // printTopview(root);
    printbottomview(root);
    // printboundary(root);
    // vector<int> leftView;
    //
    // printleftview(root, 0, leftView);
    //
    // cout << "Printing Left View: " << endl;
    //
    // for (int i = 0; i < leftView.size(); i++)
    //{
    //    cout << leftView[i] << " ";
    //}
    return 0;
}
