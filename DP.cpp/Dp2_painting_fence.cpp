//with this type of algorithm question ,after conclusion of painting fence algrorithm
// we conclude that   f(n)=k-1[f(n-1)+f(n-2)]  vvvv imp function


#include<iostream>
#include<vector>
using  namespace std;

 int solveusingRecursion( int n, int k){
    // base case
    if(n==1){
        return k;

    }
    if( n==2){
        return (k+ k*(k-1));
    }
 int ans = solveusingRecursion(n-1, k)*(k-1)+solveusingRecursion(n-2, k)*(k-1);
 return ans;
 }
 // solve using dp with memo method

 int usingmemeoisation( int n, int k , vector<int>&dp){
    // base case
    if(n==1){
        return k;

    }
    if( n==2){
        return (k+ k*(k-1));
    }
     if(dp[n] !=-1){
        return dp[n];
     }

 dp[n] = usingmemeoisation(n-1, k, dp)*(k-1)+usingmemeoisation(n-2, k, dp)*(k-1);
 return dp[n];
 }

 //solve using  dp with tabulation method
 int usingtabulation(int n ,int k){
    vector<int>dp(n+1,-1);
    dp[1]=k;
    dp[2]=k +k*(k-1);
      for( int i=3;i<=n; i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
      }
      return dp[n];
 }

 int main(){
    int n =5;
    int k =4;
    
    //vector<int>dp(n+1,-1);
    // int ans=usingmemeoisation(n,k,dp);
    //cout<<"Ans for that "<< ans;


    //int ans=solveusingRecursion(n,k, );
    //cout<<"Ans for that "<< ans;

     int ans=usingtabulation( n, k);
     cout<<"Ans for that "<<ans;




 }
 //working ans is 24