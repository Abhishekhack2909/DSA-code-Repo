#include <bits/stdc++.h>
#include<vector>
using namespace std;

    //vector< int> vec;
    //vec.push_back(2);
    //vec.push_back(4);
    //vec.push_back(3);
    //cout<<vec.size()<<endl;
    //cout<<vec.capacity()<<endl;
    //return 0; 

 //pair<int, pair< char, int>>p={1,{'a', 2}};
 //cout<<p.first<<endl;
 //cout<<p.second.second<<endl;
 //cout<<p.second.first<<endl;

//stack<int>s;
//s.push(8);
//s.push(45);
//
//cout<<"on top: "<<s.top()<<endl;
//stack<int>s2;
//s2.swap(s);
//cout<<"sze of s2 :"<<s2.size()<<endl;
//
//priority_queue<int>pq;
//pq.push(3);
//pq.push(4);
//pq.push(10);
//pq.push(5);
//int i  =1; 
//
// 
//while(!pq.empty()){
// 
//for( int i=1; i<=4; i++)  { 
//
//
//cout<<i<<"st"<<" top of  functin is : "<<pq.top()<<endl;
//      pq.pop();
//}
//
//}
//cout<<endl;


// alogorithms
// to sort a array 

//int arr[5] = {2,3,4,55,56};
//sort(arr,arr+5 );
//// to sort the array in reverse order 
////we use the    sort(arr, arr+5, greater<int>());
//
//for(int val:arr){
//      cout<<val << " ";
//
//
//}
//cout<<endl;

//// for vector 
//vector<int>v= {2,3,4,56,7,5};
//
//sort(v.begin(), v.end());
//for( int val:v){
//      cout<<val<<" ";
//
//}
//cout<<endl;
//return 0;


//pair wise sorting
   //bool comparator for sorting of second pair or any type of sort in pair .



bool comparator( pair<int,int>p1, pair<int,int >p2){
   if(p1.second < p2.second) return true;
   if ( p1.second>p2.second) return false;
   if (p1.first<p2.first) return true;
   else return false;
}
int main(){

vector<pair<int,int>>vec= {{3,34},{23,44},{12,2},{13,34}};
sort(vec.begin(),vec.end(), comparator);
for( auto p:vec){
      cout<<p.first<<" "<<p.second<<endl;
      

}
return 0;












}














