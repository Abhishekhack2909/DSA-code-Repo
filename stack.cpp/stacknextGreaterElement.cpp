#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// approach similer to stockspan problem but in this we need too check  the lemet in right side 
void nextgreaterelement( vector<int>arr, vector<int>ans){
    stack<int>s ;
    int idx= arr.size()-1;
    arr[idx]=-1;
    s.push(arr[idx]);

     for(idx= idx-1; idx>=0; idx--){
        int curr= arr[idx];
        while(!s.empty()&& curr>= s.top()){// removing invalid elmentt from stack
            s.pop();

        }
        if(s.empty()){
            ans[idx]=-1;

        }else{
            ans[idx]= s.top();

        }
        s.push(curr);
     }
      
     for (int i=0;i<arr.size(); i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl;
}
 int main(){
    vector<int>arr= {6,8,0,1,3};
    vector<int>ans = {0,0,0,0,0};
    nextgreaterelement(arr, ans);
    return 0;
 }