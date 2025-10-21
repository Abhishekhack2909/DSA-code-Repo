 //knap sack problem type 

#include<iostream>
#include<vector>
using namespace std;

 int solveusingRecursion(int capacity, int wt[],  int profit[], int index, int n ){
    //base case
     if(index>=n){
        return 0;
     }

   if(index ==n-1){
    if(wt[index]<=capacity){
        return profit[index];
    } 
    else{
        return 0;
    }
   }
    //inclusion/exclusion
    int inclusion=0;
    if(wt[index]<=capacity){
        inclusion=profit[index]+solveusingRecursion(capacity-wt[index], wt, profit, index+1,n);
        
    }
    
    // exclusion step
   
    int exclusion= 0+solveusingRecursion(capacity, wt, profit, index+1, n);

     int as=max(inclusion, exclusion);
     return as;
 }


 // with dp using memo
 
  int solveusingmemo(int capacity , int wt[], int profit[], int index, int n ,vector<vector<int>> &dp){
    if(index>=n ){
        return 0;
    }

   if(dp[capacity][index]!=-1){
    return dp[capacity][index];



   }
    //inclusion/exclusion
    int inclusion=0;
    if(wt[index]<=capacity){
        inclusion=profit[index]+solveusingmemo(capacity-wt[index], wt, profit, index+1,n, dp);
        
    }
    
    // exclusion step
    int exclusion= 0+solveusingmemo(capacity, wt, profit, index+1, n, dp);

     dp[capacity][index]=max(inclusion, exclusion);
     return dp[capacity][index];


  }

 int main(){


    int capacity=50;
    int wt[]={10,20, 30};
    int profit[]={60, 100, 120};
    int index=0;
    int n=3;

    //dp vector
    vector<vector<int>>dp(capacity+1 ,vector<int>(n+1, -1));
    int ans=solveusingmemo(capacity , wt, profit, index,n, dp);
    cout<<"Ans is this "<<ans<<endl;

    //int ans=solveusingRecursion(capacity, wt, profit,index, n );
    //cout<<"Ans is this "<<ans<<endl;
 }

