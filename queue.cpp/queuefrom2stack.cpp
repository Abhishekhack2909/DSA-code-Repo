#include<iostream>
#include<stack>
using namespace std;
class queue{
    // making of queue form the 2 stacks
    //Approach make two stack by stl than firs we transfer data form s1 to s2  with push and pop sam etime form s1 than s2

    public:
    stack<int> s1;
    stack<int> s2;
    void push(int data){
        while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();

        }
        s1.push(data);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
   }
    
     void pop(){
        s1.pop();

     }
    int front(){
        return s1.top();

    }
    bool empty(){
        return s1.empty();
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
      while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
      }
      return 0;


}



