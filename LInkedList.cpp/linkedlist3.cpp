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
    public:
    Node*head;
    Node*tail;

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

    void removecycle( Node*head){
        //detect the cycle first
        Node*slow= head;
        Node*fast= head;
         bool iscycle= false;

        while( fast != NULL && fast-> next != NULL){
            slow= slow->next;
            fast= fast->next->next;
             if( slow== fast){
                cout<<"cycle exist\n";
                iscycle= true;
                break;


             }
        }
    if(!iscycle){
        cout<<"cycle does not exist\n";

    }
    slow= head ;
    if ( slow == head){// special case : tail->head
        while(fast->next !=slow){
            fast= fast->next;

        }
        fast->next= NULL;
    }
    else{
        Node*prev= fast;
        while( slow != fast){
            slow= slow->next;
            prev= fast;
            fast= fast->next;
        }
            
        prev->next=NULL;// to remove the cycle
        }


    }
// merge sort for linked list 
 Node* splitatmid(Node*head){// split code  in linked list
    Node*slow= head;
    Node*fast= head;
    Node*prev= NULL;

    while( fast != NULL && fast->next != NULL){
        prev= slow;
        slow= slow->next;
        fast= fast-> next->next;

    }
  if( prev != NULL){
    prev-> next= NULL; // split step
    

  }
  return slow;// slow= righthead;

 }
 

 Node*merge( Node*left, Node*right){//  sort the split code and merge code
  List ans;
    Node*i = left;
    Node*j = right;
    while( i!= NULL && j!= NULL){
        if( i->data <= j->data){
            ans.push_back( i->data);
            i= i->next;

        }else{
            ans.push_back(j->data);
            j=j->next;

        }
    }
        while( i!=NULL){
            ans.push_back(i->data);
            i=i->next;

            
        }
        while( j!= NULL){
            ans.push_back(j->data);
            j=j->next;

        }
        return ans.head;
    }
    

    
  Node*mergesort( Node*head){// call for both above code and  merge at last 

    if( head== NULL || head->next==NULL){
        return head;
    }
    
    Node*righthead= splitatmid(head);

    Node*left= mergesort(head);// left head
    Node*right=  mergesort( righthead);// right head
        return merge(left, right);// head of sorted ll


  }
  // leture 10 zig zag  linkkedd list
  // note- we cannot  travel backward in linkked list
  //  apprroach as step 1 is split at mid 
  //  2nd step is  reverse the 2nd part
  //on reverse the second part then merge the  two part alternatively
   Node* reverse( Node*head){
      Node*prev= NULL;
      Node* curr= head;
      Node* next= NULL;

       if ( curr=! NULL){
        next =curr->next;
       curr->next= prev;
        
        prev= curr;
        curr= next;
       }
        return prev; // prev is the head of reversed ll

   }
  Node* ZigZagLL( Node*head){

    Node* righthead=  splitatmid(head);// for righside part of ll
    Node* revrighthead= reverse( righthead);// revese the  right side part 
    // now alternaatively merging: ist of head and 2nd of righthead
     Node* left= head ;
     Node* right = revrighthead;
     Node*tail= right;
      while( left != NULL && right != NULL){
         Node* nextleft= left->next;
         Node* nextright= right->next;

          left->next= right;
          right-> next= nextleft;
          tail=right;

           left=nextleft;
           right= nextright;

        

      }
      if( right != NULL){
         tail->next=right;

      }
      return head;

   

   



  }
};


int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
   
    // 1->2->3->null
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(47); 

   // ll.printList();

   // 1->2->3->4->5->1->null

    //ll.tail->next= ll.head;  // for remove th cycle
    //ll.removecycle(ll.head);// for remove th cycle
    // output - cycle exist
    //          1->2->3->4->5->NULL       
   //ll.head= ll.mergesort(ll.head);
   //cout<<"Linked list after sort in ascending order\n";
    printList(ll.head);
    ll.head=ZigZagLL( ll.head);

  printList( ll.head);

    
}
