#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert the node in starting head
void insertathead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // to iss case me head aur  tail ko same valuue pe store kardenge
        Node *temp = new Node(data); // always make new node to avoid the mistakes
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

// to  insert the node at the end of linked list
void insertatend(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

// to print the linked list
void printlist(Node *head)
{

    Node *newNode = head;
    while (newNode != NULL)
    {
        cout << newNode->data << "->";
        newNode = newNode->next;
    }
}

// to find the length of ll
int getlength(Node *head)
{
    int flength = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        flength++;
        temp = temp->next;
    }
    return flength;
}

// to insert the element at any position  of link list
void insertatpostion(Node *head, Node *tail, int data, int position)

{
    int length = getlength(head);
    if (position == 1)
    { // if position is 1st than we call above function
        insertathead(head, tail, data);
    }
    else if (position > length)
    { // if  position is last or furthur, than we call above function
        insertatend(head, tail, data);
    }
    else
    {
        Node *temp = new Node(data);

        Node *prev = NULL;
        Node *curr = head;
        int currposition = 1;
        while (position != currposition)
        {
            prev = curr;
            curr = curr->next;
            position--;
            // till we not reach the correct position
        }
        prev->next = temp;
        temp->next = curr;
    }
}

// for delete the element from the node
void deleteposition(Node *head, Node *tail, int position)
{
    //  for single node
    if (head == tail)
    {
        Node *temp = head;
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    int length = getlength(head);

    if (position == 1)
    {
        Node *newNode = head; // first case
        head = head->next;
        newNode->next = NULL;
        delete newNode;
    }
    else if (position == length)
    { // last case
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;
    }
    else
    {

        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        { // case when we need to reach that position
            prev = curr;
            curr = curr->next;
            position--;
        }
        prev->next = curr->next;
        Node *temp = curr;
        curr->next = NULL;
        delete temp;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertatend(head, tail, 9);
    insertatend(head, tail, 10);
    insertatend(head, tail, 12);
    insertatend(head, tail, 13);
    insertatend(head, tail, 16);
    insertatend(head, tail, 19);
    // printlist(head);
    // cout << "Length of ll is " << getlength(head);
    // cout << endl;
    printlist(head);
    cout << endl;

    // insertatpostion(head, tail, 100, 6);
    // printlist(head);
    deleteposition(head, tail, 1);
    printlist(head);
}
