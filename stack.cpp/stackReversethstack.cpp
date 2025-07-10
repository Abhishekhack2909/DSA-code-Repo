#include<iostream>
#include<stack>
#include<string>
using namespace std;
 
void pushatbottam(stack<int>&s, int val ){
    if(s.empty()){
        s.push(val);
        return ;
    }
      int temp = s.top();
      s.pop();
      pushatbottam(s, val);
      s.push(temp);

}
void reverse(stack<int> &s){
 
    if(s.empty()){
        return; 

    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushatbottam(s, temp);
}
 void printstack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();


    }
    cout<<"\n";

 }
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    printstack(s);
    reverse(s);
  
    printstack(s);

    return 0 ;    
}


