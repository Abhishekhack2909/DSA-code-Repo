////queue implemetation form linked list

#include<iostream>
using namespace std;
 class Node{
    public:
     int data ;
     Node*next;

      Node( int data ){
        this->data= data;
        this->next= NULL;
      }
 };
 class queue{
    Node*head;
    Node*tail;
    public:
    queue(){
        head=tail=NULL;

    }
     void push(int data){
        Node*newNode= new Node(data);
        if( head==NULL){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
     }
     void pop(){
        if( empty()){
        cout<<"queue is empty";
        return ;
        }

        Node*temp=head;
        head= head->next;
        delete temp;
     }
      int front(){
        if( empty()){
            cout<<"queue is empty";
            return -1 ;
            }
        return head->data;


     }
     bool empty(){
        return head==NULL;
     }

 };
 int main(){ 
    queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    while(!a.empty()){
    cout<<a.front()<<endl;
    a.pop();
    }

    return 0;
}
 



