#include<iostrem>
using namespace std;
 class Node{
    public:
    int data;
    Node*next;
    Node*prev;
      Node(int val){
        data= val; 
        next=prev= NULL;
      }

 };
  class DoublyList{
     public:
      Node*head;
      Node*tail;

  };
   int main() {
     DoublyList dll;
     return 0;
     
   }
