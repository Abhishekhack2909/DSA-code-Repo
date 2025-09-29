#include<iostream>
#include<iostream>
using namespace std;

 int solveusingRecursion(int capacity, wt, profit, index, n ){
    //base case
   if(index ==n-1){
    if(wt[index]<=capacity){
        return profit[index];
    }
    else{
        return 0;
    }
   }
    //inclusion/exclusion
    



 }

 int main(){


    int capcacity=50;
    int wt[]={10,20, 30};
    int profit[]={60, 100, 120};
    int index=0;
    int n=3;

    int ans=solveusingRecursion(capacity, wt, profit, index, n );
    return ans;
 }

