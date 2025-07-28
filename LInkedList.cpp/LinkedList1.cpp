#include <iostream>
// using namespace std;
//// when ll is empty
//
//
// class Node{
//    public:
//    int data;
//    Node*next;
//
// Node(int val){
//     data=val;
//     next=NULL;
//
//}
//};
// class List{
//    Node*head;
//    Node*tail;
// public:
//      List(){
//       head= NULL;
//       tail=NULL;
//      }
//// for push_front
//     void push_front(int val){
//    Node*newNode= new Node(val);//  new keyboard for dynamic memory allocation
//   // Node*newNode(val);// for static memory allocation
//    if(head==NULL){
//         head= tail=newNode;
//      }
//      else{
//         newNode->next= head;
//         head= newNode;
//
//      }
// }
// void push_back(int val){
//    Node*newNode= new Node(val);
//    if(head==NULL){
//        head=tail= newNode;
//    }
//    else{
//        tail->next=newNode;
//        tail= newNode;
//    }
//
// }
// void printList(){
//    Node*temp=head;
//    while( temp!=NULL){
//        cout<<temp->data<<"->";
//        temp= temp->next;
//    }
//    cout<<"NULL\n";
// }
//};
//
//  int main(){
//    List ll;
//    ll.push_front(3);
//    ll.push_front(2);
//    ll.push_front(1);
//    // 1->2->3->null
//    ll.push_back(5);
//    ll.printList();
//    return 0;
//
//
//
//
//
//
//}

using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }
  void push_back(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {

      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void printList()
  {
    Node *temp = head;
    while (temp = !NULL)
    {
      cout << temp->data << "->" temp = temp->next;
    }
  }
};
int main()
{
  ll.push_back(3);
  ll.push_back(4);
  ll.printList();
  return 0;
}