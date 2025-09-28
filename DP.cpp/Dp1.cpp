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
// tabulation mathod
// here if we know the intial data than we make remiaing ans based  on inital ans using recursion
// step1->create  a dp array
// step2->fill the intial data according  to the base case
// fill the  remaining data using  recusiove relation
