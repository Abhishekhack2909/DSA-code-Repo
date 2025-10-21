// Dynamic programming  with binary search

//leetcode question  is 
//longest increasing sub subsequenece....... very very  reapting question , 
// same pattern for  these question  -longest incresing subsequenece, the differnece  betweenn  adajacent numberis 1 or k , max stacking cuboid , russian doll,  
// when the game is like ek badi cheez ke ander choti cheez m aur chotti cheez ke ander ek aur choti cheez aese chalte jaye toh  then longest subsequenece pattern 

///imp imp  jabb bhi insertion ki baart ho , jab bhi stacking ki baat ho , placement ki baat hoo  based on some condition , then longest sub sequenece pattern

//longets increasing sub sequenece:::: it coontains the binary search method;

class Solution {
public:

    int solvewithrecursion(vector<int>&nums, int curr, int prev){
        //base case
         if( curr>=nums.size()){
            return 0;

         }
         // inlcusion or exclusion condition
         int inclusion =0;
         if( prev==-1|| nums[curr]>nums[prev]){
            inclusion=1+solvewithrecursion(nums, curr+1,curr);
         }
         int exclusion=0+solvewithrecursion(nums, curr+1, prev);
        int  as= max(inclusion, exclusion);
        return as;
    }

     int solvewithmemo(vector<int>&nums, int curr , int prev,  vector<vector<int>> &dp){
        // we take help of indexing shifting because we  got runtime error, as prev is declare -1  and in dp(memo) , -1 cannot we access 
        if( curr>=nums.size()){
            return 0;
         }
           if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
           }
         // inlcusion or exclusion condition
         int inclusion =0;
         if( prev==-1|| nums[curr]>nums[prev]){
            inclusion =1+solvewithmemo(nums, curr+1,curr, dp);
         }
         int exclusion=0+solvewithmemo(nums, curr+1, prev, dp);
        dp[curr][prev+1]= max(inclusion, exclusion);
        return dp[curr][prev+1];

     }
    int solvewithTabulation(vector<int>&nums){
        int n =nums.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        //  based on rule:iteation according to base but in reverse
        for(int curr_index=n-1; curr_index>=0;curr_index--){
            for(int prev_index=curr_index-1; prev_index>=-1; prev_index--){

         int inclusion =0;
         if( prev_index==-1|| nums[curr_index]>nums[prev_index]){
            inclusion =1+dp[curr_index+1][curr_index+1];
         }
         int exclusion=0+dp[curr_index+1][prev_index+1];
        dp[curr_index][prev_index+1]= max(inclusion, exclusion);
        

            }
        }
        return dp[0][-1+1];

    }

// in these pattern binary search in dp also a optimized  way to solev this  inlcusion or exclusion problems
// what happend here
// see make vector for storing the ans ;
// push the first element
// iterate for compare, if 2nd element is greater then stroed ans , than store that  ans tooo.
// if not ,than use lower_bound(it tell the index of just greater then that element )
// after that we  replace with that index, and return in ans ;
//at last we return the ans lenght;
    int solveUsingBS(vector<int>& num ) {
        vector<int> ans;
        //initial state
        ans.push_back(num[0]);
        for(int i=1; i<num.size(); i++) {
            if(num[i] > ans.back()) {
                ans.push_back(num[i]);
            }
            else {
                //just bada number exist krta hai
                int index = lower_bound(ans.begin(), ans.end(), num[i]) - ans.begin();
                //replace 
                ans[index] = num[i];
            }
        }
        return ans.size();
    }

    int lengthOfLIS(vector<int>& nums) {
        int  curr=0;
        int prev=-1;
        //int  ans= solvewithrecursion( nums, curr, prev);

    //int n =nums.size();
    //ector<vector<int>>dp(n+1, vector<int>(n+1, -1));
    //int ans=solvewithmemo(nums,curr,  prev, dp);
    //return ans;
    //int ans=solvewithTabulation(nums);
    //return ans;

    int ans=solveUsingBS(nums);
    return ans;
    
    

        
        
    }
};




