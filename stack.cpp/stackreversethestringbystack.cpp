#include<iostream>
#include<stack>
#include<string>
using namespace std;
 string reversestring(string str){
    string ans;
    stack<char> s;
    for( int i=0; i<str.size(); i++){
        s.push(str[i]);

    }
    while(!s.empty()){
        char top= s.top();
        ans+=top;
        s.pop();   
    }
    return ans;


 }
 int main(){
     string str="Abhishek";
     cout<<"reverse string  is ="<<reversestring(str)<<endl;
     return 0;

 }
    
    