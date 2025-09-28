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

// to find the middle of the linked list, see question of leetcode

class Solution
{
public:
    int getLength(ListNode *head)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode *middleNode(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
                // main yaha keh skta hu k fast ne 2 step chal liye h
                // ab slow ko bhi chalwao ek step
                slow = slow->next;
            }
        }

        return slow;

        // int n = getLength(head);
        // int position = n/2 + 1;

        // ListNode* temp = head;
        // while(position != 1) {
        //     position--;
        //     temp = temp -> next;
        // }
        // return temp;
    }
};
// end

// to reverse the linked list
// in leetcode q with two method , by recursion and by simple interate
class Solution
{
public:
    ListNode *reverseUsingRecursion(ListNode *prev, ListNode *curr)
    {
        // base case
        if (curr == NULL)
        {
            return prev;
        }
        // 1 case hum solve krenge
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;

        // baaaki kon sambhalega - recursion
        return reverseUsingRecursion(prev, curr);
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;

        return reverseUsingRecursion(prev, curr);

        // while(curr != NULL) {
        //     ListNode* nextNode = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nextNode;
        // }
        // return prev;
    }
};
// end

// to find the middle  of the node usign two pointer- slow and fast  pointer or called tortoise  algorithm
int middleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast = !NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        { // imp condition
            fast = fast->next;
        }
        slow = slow->next;
    }
}
return slow;
// here slow is the middle of the linked list;
// see if they say the we need to return the node one minus of middle , then
// only change is (fast->next!=NULL) in both place.

// for cheaking the cycle is present in the linked list or not, we use slow and fast pointer , haspmap approach in leetcode question
bool cyclecheck(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

// if we want to know the  statring point  for the cycle then
// appprooach is first make slow and fast as it is in previos , find the comman point of meeting than make slow pointer reset to head , and than move slow and fast pointer both with one by one step  , after that  they meet at a point than that  point is called starting point of cycle
// code for leetcode q is
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if (fast == slow)
            {
                break;
            }
        }
        if (fast == NULL)
        {
            return NULL;
        }
        slow = head; // reset to head

        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

// for detetion of loop and removal of loop from the starting point as form the previous steps
void removeloop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            break;
        }
        if (fast == NULL)
        {
            return NULL;
        }
        slow = head; // reset the slow to head ;

        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        Node *startingpoint = slow;

        Node *temp = slow; // code for removal  of staring point
        while (temp->next != startingpoint)
        {
            temp = temp->next;
        }
        temp->next = NULL;
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
