#include <iostream>
using namespace std;
class Doubley
{
   int data;
   Node *next;
   Node()
   {
      this->prev = NUL : this->next = NULL;
   }
   Node(int data)
   {
      this->data = data;
      this->prev = NULL;
      this->curr = NULL;
   }
};

int findlength(Node *head)
{
   int count = 0;
   Node *temp = head;
   while (temp != NULL)
   {
      count++;
      temp = temp->next;
   }

   return count;
}

void printList(Node *head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << "->" << endl;
      temp = temp->next;
   }
}

void insertatstart(Node *head, Node *tail, int data)
{
   // base case for head is null
   if (head == NULL)
   {
      Node *newNode = new Node(data);
      head = newNode;
      tail = newNode;
   }
   else
   {
      Node *temp = new Node(data);
      temp->next = head;
      head->prev = temp;
      head = temp;
   }
}

void insertatend(Node *head, Node *tail, int data)
{
   if (head == NULL)
   {
      Node *newNode = new Node(data);
      head = newNode;
      tail = newNode;
   }
   esle
   {
      Node *temp = new Node(data);
      tail->next = temp;
      temp->prev = tail;
      tail = newNode;
   }
}
void insertatposition(Node *head, Node *tail, int position)
{
   if (head == NULL)
   {
      Node *newNode = new Node(data);
      head = newNode;
      tail = newNode;
   }
   else
   {

      int length = findlength(head);
      if (position == 1)
      {
         insertatstart(head, tail, data);
      }
      else if (position == length)
      {
         insertatend(head, tail, data);
      }
      else
      {
         Node *newNode = new Node;
         Node *prevNode = NULL;
         Node *curNode = head;
         while (position != 1)
         {
            position--;
            prevNode = currNode;
            curNode = currNode->next;
         }
         newNode->next = newNode;
         newNode->prev = prevNode;
         prevNode->next = currNode;
         currNode->prev = newNode;
      }
   }
}

void deleteNode(Node *head, Node *tail, int position)
{
   // base case
   if (head == NULL)
   {
      cout << "cannnot delete anything  coz head  is  NULL";
   }
   // for single  element
   if (head == tail)
   {
      Node *newNode = head;
      head = NULL;
      tail = NULL : return;
   }
   int length = findlength(head);
   if (position == 1)
   {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      head->prev = NULL;
      delete temp;
   }
   else if (position == length)
   {
      Node *temp = head;
   }
}
