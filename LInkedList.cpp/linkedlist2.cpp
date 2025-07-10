
#include<iostream>
using namespace std;
// when ll is empty

 
class Node{
    public:
    int data; 
    Node*next;

Node(int val){
     data=val;
     next=NULL;

}
};
class List{
    Node*head;
    Node*tail;
public:
      List(){
       head= NULL;
       tail=NULL;
      }
// for push_front
     void push_front(int val){
    Node*newNode= new Node(val);//  new keyboard for dynamic memory allocation
   // Node*newNode(val);// for static memory allocation
    if(head==NULL){
         head= tail=newNode;
      }
      else{
         newNode->next= head;
         head = newNode;

      }  
 }
 // for pushback
 void push_back(int val){
    Node*newNode= new Node(val);
    if(head==NULL){
        head=tail= newNode;
    }
    else{
        tail->next=newNode;
        tail= newNode;
    }
    // for print the ll
 }
 void printList(){
    Node*temp=head;
    while( temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL\n";
 }  
//insert the new node in  any part of linked list
 void insert( int val, int pos){
    Node*newNode= new Node(val);
    Node*temp=head;
    for( int i=0;i<pos-1; i++){
        if(temp==NULL){
            cout<<"position is INVALID\n";
            return ;

        }
        temp= temp->next;

    }
    //temp is now at pos-1 i.e. prev/left

    newNode->next= temp->next;
    temp->next=newNode;    
 }
 // for  delete a node from front

void pop_front() {
    if( head== NULL){
        cout<<"ll is empty";
        return ;           

    }

     Node*temp= head;
     head= head-> next;
     temp->next= NULL;
      delete temp;

  }
 //// for  delete a node form last
    void pop_back(){
        Node*temp= head;
        while ( temp-> next->next != NULL){
            temp = temp-> next;

        }
        temp->next= NULL;// temp = tail's prev
         delete tail; 
         tail = temp;

       
    }

// for search a node in  linked list  insimple search
 int searchitr( int key){
    Node* temp= head;
     int idx=0;
    while( temp != NULL){
         if( temp-> data== key){
            return idx;

         }
          temp = temp-> next;
           idx++;

    }
    return -1;

 }
// for search a node in linked list  by recursion method
 int helper ( Node*head, int key){
     
     if(head== NULL){
        return -1;

     }
      if( head->data== key){
        return 0;

      }
       int idx= helper( head-> next, key);
        if( idx == -1){
            return -1;
        }
        return idx+1;
       
 }
 int searchRec( int key ){
     return helper( head, key);
 }
// for the reverse a linked list

 void reverse() {
     Node*curr=head;
     Node*prev= NULL;
      

    while( curr !=NULL){
        Node*next= curr->next;
        curr->next=prev;

         // updation for next  itr
          prev= curr;
          curr= next;

    }
    
     head =prev;
     // because the  curr end is NULL now so prev is new 

 }

// remove the nth nod  from the last 

  
int getsize(){
    int sz=0;
    Node*temp= head;
    while( temp != NULL){
        temp= temp->next;
        sz++;
    }
    return sz;

  }
 void removeNth( int n ){
    int size= getsize();
    Node*prev= head;
    
    for( int i  =1; i<(size-n); i++){
        prev = prev->next;
 }
  Node* todel= prev->next;
  cout<<"going th delete the  nth node now of "<< todel->data<<endl;

   prev->next= prev->next->next;

 }


 // TO detect the  cycle in ll
 bool iscycle(Node*head){
    
    
    Node*slow= head;
    Node*fast= head;


    while(fast !=NULL && fast-> next != NULL){
        slow= slow->next;
        fast= fast->next->next;
         if ( slow== fast){
            cout<<" cycle  exits";
            return true;
         }
         cout<<"cycle does not exists";
         return false;

    }
 }
 

};

  int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3); 

    // 1->2->3->null
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next= ll.head;
    iscycle(ll.head);
    //iscycle(ll.head);// it tell weather cycle exist or not in linked list



    //ll.push_back(2);
    //ll.push_back(1);
    //ll.printList ();
    //ll. removeNth(3);// 1  ->2->4->5->NULL
    //ll.printList();

    

    //ll.reverse();
    // ll.printList();
    // 
   // cout<<ll.searchitr(2)<<endl;
   // cout<<ll.searchRec(4)<<endl;

 //   ll.pop_back();
  //  ll.insert(100,2);
   // ll.printList();
   // ll.pop_front();
    
   
   return 0;
 


 


    
}