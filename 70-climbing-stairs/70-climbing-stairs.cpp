class Solution {
public:
    int climbStairs(int n) {
         vector<int>dp(n+1 , -1);
        
        return   allWays(n, dp);
    }
    
     int allWays(int ind , vector<int>&dp){
         
         if(ind==0 || ind==1) return 1;
         
         
          if(dp[ind]!=-1) return dp[ind];
         
         int ls=allWays(ind-1, dp);
         
       int   rs= allWays(ind-2 , dp);
         
         return dp[ind]=(ls+rs);
         
     }
};