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

int searchInorder(int inorder[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (inorder[i] == target)
    {
      return i;
    }
  }
  return -1;
}

void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap)
{

  for (int i = 0; i < size; i++)
  {
    int element = inorder[i];
    int index = i;
    valueToIndexMap[element] = index;
  }
}

Node *constructTreeFromPreAndInorderTraversal(map<int, int> &valueToIndexMap, int preOrder[], int inOrder[], int &preIndex, int inOrderStart, int inOrderEnd, int size)
{
  // base case
  if (preIndex >= size || inOrderStart > inOrderEnd)
  {
    return NULL;
  }

  // 1 case main solve krta hu
  int element = preOrder[preIndex];
  preIndex++;
  Node *root = new Node(element);
  // element search krna padega  inorder me
  // int position = searchInorder(inOrder, size, element);
  int position = valueToIndexMap[element];
  // baaaki recursion sambhal lega
  root->left = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preOrder, inOrder, preIndex, inOrderStart, position - 1, size);

  root->right = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preOrder, inOrder, preIndex, position + 1, inOrderEnd, size);

  return root;
}

Node *constructTreeFromPostAndInorderTraversal(map<int, int> &valueToIndexMap, int postorder[], int inorder[], int &postIndex, int inorderStart, int inorderEnd, int size)
{

  if (postIndex < 0 || inorderStart > inorderEnd)
  {
    return NULL;
  }

  // 1 case main solve krunga
  int element = postorder[postIndex];
  postIndex--;
  Node *root = new Node(element);
  // search karo inorder me
  int position = valueToIndexMap[element];
  // baaki recursion sambhal lega
  // right ki call pehle lagegi
  root->right = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, position + 1, inorderEnd, size);

  root->left = constructTreeFromPostAndInorderTraversal(valueToIndexMap, postorder, inorder, postIndex, inorderStart, position - 1, size);

  return root;
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
