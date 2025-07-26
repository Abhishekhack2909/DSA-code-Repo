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

// binary search in tree
bool binarysearchinBST(Node *root, int target) // time complexity is 0(logn)
{
    if (root == NULL)
    {
        return false;
    }
    // sirf ye wala case solve karna hai mujhe
    if (root->data == target)
    {
        return true;
    }
    // baki ka recursion sambha lenaga
    bool leftans = false;
    bool rightans = false;
    // pta kaise chalenga ke left yha right kidhar jana hai islye compare karenge
    if (target > root->data)
    {
        rightans = binarysearchinBST(root->right, target);
    }
    else
    {
        leftans = binarysearchinBST(root->left, target);
    }
    return leftans || rightans;
}

// one of the most important case
// asked in many companies
// to delete the  Node into the tree
Node *deleteBST(Node *root, int target)
{
    /// for this  4 case
    // 1.if root is NULL
    // 2. if root val  equal to target
    // 2.a-> if left and right both  are null
    // 2.b-> if if right is only NULL then work on left
    // 2.c-> if left is only null then work on right
    // 2.d->if right is only null then work on left.

    // 3. if root val is greater than target
    // 4. if root vval is lesser  thn target

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == target)
    {
        // main kaam yha hoga
        // time for 4 cases
        // 1st case
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 2nd case
        else if (root->left != NULL && root->right == NULL)
        {
            Node *childsubtree = root->left; // stor into new node
            delete root;                     // delete  this node
            return childsubtree;             // return the remaining subtree
        }
        else if (root->right != NULL && root->left == NULL)
        {
            Node *childsubtree = root->right;
            delete root;
            return childsubtree;
        }
        else
        {
            // last and most imp case
            // see if both node alive then either we need to return left max element  or need to return right min element
            //  so we retuurn the min left value
            Node *maxi = maxval(root->left);
            // root ka data maxi me store kiya
            root->data = maxi->data;
            root->left = deleteBST(root->left, maxi->data);
            ;
            return root;
        }
    }
    else if (root->data > target)
    {
        // left me chalo value dudh ne
        root->left = deleteBST(root->left, target);
    }
    else
    {
        root->right = deleteBST(root->right, target);
    }
    return root;
}

// BST using inorder  traversal
Node *bstusinginorder(int inorder[], int s, int e)
{
    // base case
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    root->left = bstusinginorder(inorder, s, mid - 1);  // we need to  make the end as mid-1 because it goes to left part
    root->right = bstusinginorder(inorder, mid + 1, e); // we need to make  start as mid+1, sa goes to right side
    return root;
}

int main()
{ nod
    // sample value for making tree-> 50 30 60 25 40 70 80 55 -1

    // Node *root = NULL;
    // createBST(root);
    // levelordertraversal(root);

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

    // Node *hg = maxval(root);
    // if (hg == NULL)
    //{
    //     cout << "there is no element that is maximum";
    // }
    // else
    //{
    //     cout << "maxium val is :" << hg->data << endl;
    // }
    // return 0;

    // int t;
    // cout << "Enter the target ";
    // cin >> t;
    // while (t != -1)
    //{
    //     bool ans = binarysearchinBST(root, t);
    //     if (ans == true)
    //     {
    //         cout << "found" << endl;
    //     }
    //     else
    //     {
    //         cout << "Not Found" << endl;
    //     }
    //     cout << "Enter the target";
    //     cin >> t;
    // }

    // int target;
    // cout << endl;
    // cout << "Enter the target for delete" << endl;
    // cin >> target;
    //
    // while (target != -1)
    //{
    //    root = deleteBST(root, target);
    //    cout << endl
    //         << "Printing level order traversel" << endl;
    //    levelordertraversal(root);
    //
    //    cout << "Enter the target for delete " << endl;
    //    cin >> target;
    // }

    // for bst  using inorder
    int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 8;
    Node *root = bstusinginorder(inorder, s, e);
    levelordertraversal(root);
    return 0;
}
