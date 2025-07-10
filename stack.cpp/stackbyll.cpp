// stack by linked list which is in STL(list)
//#include <iostream>
//#include <string>
//#include <list>
//#include <vector>
//using namespace std;
//template <class T>
//class stack
//{
//  list<T> ll;
//
//public:
//  void push(T val)
//  {
//    ll.push_front(val);
//  }
//  void pop()
//  {
//    ll.pop_front();
//  }
//  T top()
//  {
//    return ll.front();
//  }
//  bool isempty()
//  {
//    return ll.size() == 0;
//  }
//};
//
//int main()
//{
//  stack<int> s;
//  s.push(3);
//  s.push(2);
//  s.push(1);
//
//  while (!s.isempty())
//  {
//    cout << s.top() << " ";
//    s.pop();
//  }
//  cout << endl;
//  return 0;
//}



//stack by linked list where ll is made by node class
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>

class Node{
  public: 
  T data;
  Node*next;
     Node(T val){
      data= val;
      next= NULL;

     }
};

template< class T>

 class Stack{

  Node<T>*head;
  public:

  Stack(){
    head=NULL;
   }

   void push(T val){
    // push fornt
    Node<T>*newNode=  new Node<T>(val);
    if(head == NULL){
      head= newNode; 
    }
      else{
        newNode->next= head;
       head= newNode;   
      }

    }
   
    void pop(){
      //pop front 
      Node<T>*temp=head;
      head= head->next;
      temp->next= NULL;
      delete temp;

    }
     T top(){
      return head->data;
     }
      
      bool isempty(){
        return head==NULL;

      }


  
 };


int main()
{
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(1);

  while (!s.isempty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}
// for STL stack we need to include the stack as header file.
//as include<stack>
//and in main function 
// we  make stack<int>s
// only (!s.isempty) changes to (!s.empty)







