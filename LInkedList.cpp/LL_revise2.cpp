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

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
//most imp  for interview  to add one in linked list; 

Node *addone(Node *head)
{
    // appraach is 1st reverse ,and add one and than reverse;
    // step 1. reverse
    head = reverse(head);
    // step 2. add one
    int carry = 1;
    Node *temp = head;
    while (temp != NULL)
    {
        int twosum = temp->data + carry;
        int digit = twosum % 10;
        carry = twosum / 10;
        temp->data = digit;
        temp = temp->next;
        if (carry == 0)
        {
            break;
        }
    }
    // process last node
    if (carry != 0)
    {
        int totalsum = temp->data + carry;
        int digit = totalsum % 10;
        carry = totalsum / 10;
        temp->data = digit;
        if (carry != 0)
        {
            Node *newNode = new Node(carry);
            temp->next = newNode;
        }
    }
    // step.3 reverse
    head = reverse(head);
}


// code for leetcode ans  of reverse nodes in k group question;
class Solution {
public:
   int getlength(ListNode*head){
    int len=0;
    ListNode*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
        
    }
     return len;

   }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;

        }
        if(head->next==NULL){
            return head;

        }
         ListNode*prev=NULL;
         ListNode*curr=head;
         ListNode*nextNode=curr->next;
         int pos=0;
         int len=getlength(head);
         if(len<k){
            return head;
         }
         while(pos<k){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            pos++;
         }
         ListNode*recursionans=NULL;
         if(nextNode!=NULL){
            recursionans=reverseKGroup(nextNode, k);
            head->next=recursionans;//most tricky line
         }
         return prev;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertathead(head, tail, 9);
    insertathead(head, tail, 9);
    insertathead(head, tail, 9);
    // insertatend(head, tail, 13);
    // insertatend(head, tail, 16);
    // insertatend(head, tail, 19);
    //  printlist(head);
    //  cout << "Length of ll is " << getlength(head);
    //  cout << endl;
    printlist(head);
    cout << endl;
    addone(head);

    // insertatpostion(head, tail, 100, 6);
    // printlist(head);
    // deleteposition(head, tail, 1);
    printlist(head);
    cout << endl;
    cout << endl;
}
