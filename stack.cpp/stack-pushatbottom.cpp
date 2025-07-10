//approach first delete the one by one element in stack by recursion 
// then push the value at bottam  followed by remaining element 
#include<iostream>
#include<stack>
using namespace std;

 void pushAtbottam(stack<int>&s, int x ){// function for push at bottom
    if(s.empty()){
// base case when whole stack is empty
        s.push(x);
        return;
    }

// recursive case : pop from stack and store into temp
  int temp= s.top();// storing all the element  into temp
  s.pop();
   
  // calling the pushatbottom function for x'
   pushAtbottam(s,x);

   // pushback the stored element 
    s.push(temp);    
 }
  void display(stack<int>s){
    while(!s.empty()){
    
    cout<<s.top()<<endl;
    s.pop();
    }
    cout<<endl;

  }

  int main(){
    stack<int> s;
     s.push(300);
     s.push(200);
     s.push(100);
      
     cout<<"original stack"<<endl;
     display(s);
    
    pushAtbottam(s,24);
     cout<<"after pushing the element" <<endl;; 
     display(s);
     return 0;

  }