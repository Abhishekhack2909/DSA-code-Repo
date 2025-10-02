//memoization method
// we will solve this with dp
// step 1->crete the dp array for store thee unrepeted ans;
// step2->analysise the base case and fill the dp  array;
// step3->cheak id already exist ,than return ans  ;

class Solution
{
public:
    // plain recursion 
    int solvewithrecur(int n)
    {
        // base case
        if (n == 0 || n == 1)
        {
            return n;
        }
        int ans = solvewithrecur(n - 1) + solvewithrecur(n - 2);
        return ans;
    }

    // dp-> up to down approach
    // recusion+ memoisation
    int solvewithmemoisation(int n, vector<int> &dp)
    {
        // base case
        if (n == 0 || n == 1)
        {
            return n;
        }
        // step3: check if already exist, then return ans;
        if (dp[n] != -1)
        {
            return dp[n];
        }

        // step2: store  ans in dp array
        dp[n] = solvewithmemoisation(n - 1, dp) + solvewithmemoisation(n - 2, dp);
        return dp[n];
    }

    int fib(int n)
    {
        // return solvewithrecur(n);-> for plain recursion
        // we will solve this with dp
        // step 1->crete the dp array for store thee unrepeted ans;
        // step2->analysise the base case and fill the dp  array;
        // step3->cheak id already exist ,than return ans  ;

        // step1;
        vector<int> dp(n + 1, -1); // for this we make a vector  first

        int ans = solvewithmemoisation(n, dp);
        return ans;
    }
};

// 2nd method called
// tabulation mathod( vvvvvvvv imp method) ----- later SO(space optmization)
// here if we know the intial data than we make remiaing ans based  on inital ans using recursion
// step1->create  a dp array in solevwithtabulation function
// step2-> make the interation ( for  loop like something ) in reverse of the base case 
//step3-> copy the recusive relation  for the recursion solution, and then edit  with dp logic and than take return as initial values

// here is the example of leetcode  number 1143 q is Longest Common Subsequence
class Solution {
public:
     int solveusingRecursion(string text1, string text2, int i, int j){ 
        //base case
        if(i>=text1.length()){
            return 0;
        }
        if(j>=text2.length()){
            return 0;
        }

        //recusive logic 
        int as =0;
        if(text1[i]==text2[j]){
             as =1+solveusingRecursion(text1, text2, i+1, j+1);
        }
        else{
            as= 0 + max(solveusingRecursion(text1, text2,i, j+1),solveusingRecursion(text1, text2, i+1,j));// this because when the element not matching, then we take one static and other in iterativ and than match , same in revere , and than we take the max of  both of them

        }
        return as;
     }


  // with memeo dp    
int solveusingmemo(string &text1, string &text2, int i , int j,vector<vector<int>>&dp){
         if(i>=text1.length()){
            return 0;
        }
        if(j>=text2.length()){
            return 0;
        }
        
        if(dp[i][j] !=-1){
            return dp[i][j];
        }


        if(text1[i]==text2[j]){
             dp[i][j] =1+solveusingmemo(text1, text2, i+1, j+1 ,dp);
        }
        else{
            dp[i][j]= 0 + max(solveusingmemo(text1, text2,i, j+1, dp),solveusingmemo(text1, text2, i+1,j,dp));
            // this because when the element not matching, then we take one static and other in iterativ and than match , same in revere , and than we take the max of  both of them

        }
        return dp[i][j];
     }


// with  tabulation dp 
// for tabulation steps

      int solveusingtabulation( string text1, string text2){
        vector<vector<int>>dp(text1.length()+1, vector<int>(text2.length()+1, 0));
         for( int i_index=text1.length()-1; i_index>=0; i_index--){
            for( int j_index=text2.length()-1;j_index>=0; j_index--){

          //recusive logic 
           int as =0;
        if(text1[i_index]==text2[j_index]){
             as=1+dp[i_index+1][j_index+1];
        }
        else{
            as= 0 + max(dp[i_index][j_index+1],dp[i_index+1][j_index]);// this because when the element not matching, then we take one static and other in iterativ and than match , same in revere , and than we take the max of  both of them

        }
        dp[i_index][j_index]=as;

                
            }
         }
         return dp[0][0];



        }

        


   //  space  optamization in tabulation methods , this will optimize the space based 
        int solveusingtabulationSO( string text1, string text2){
        //vector<vector<int>>dp(text1.length()+1, vector<int>(text2.length()+1, 0));
        vector<int>curr(a.length()+1, 0);
        vector<int>next(a.length()+1, 0);


         for( int i_index=text1.length()-1; i_index>=0; i_index--){
            for( int j_index=text2.length()-1;j_index>=0; j_index--){

          //recusive logic 
           int as =0;
        if(text1[i_index]==text2[j_index]){
             as=1+next[i_index+1];
        }
        else{
            as= 0 + max(next[i_index],curr[i_index+1]);// this because when the element not matching, then we take one static and other in iterativ and than match , same in revere , and than we take the max of  both of them

        }
        curr[i_index]=as;

                
            }
         }
         return next[0];
        }


      
    
 
    int longestCommonSubsequence(string text1, string text2) {
     int i =0;
     int j=0;
     

     // for recusiive
     //int ans = solveusingRecursion( text1, text2, i, j);
     //return  ans;


      // for memo dp 
     //vector<vector<int>>dp(text1.length()+1,vector<int>(text2.length()+1, -1));
     //int ans =solveusingmemo(text1, text2,i, j, dp);
     //return ans;

     // for dp with tabulation
      int ans = solveusingtabulation( text1, text2);
      return ans;
    
    }
};
// it is working

  
