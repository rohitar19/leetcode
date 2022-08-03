class Solution {
public:
    int tribonacci(int n) {
         vector<int>dp(n+3 , -1);
      return   tribo(n , dp);
          
    }
    
     int  tribo(int n , vector<int>&dp){
         
            if(n<=0 ) return 0;
         
          if( n==1 || n==2) return 1;
         
          if(dp[n]!=-1) return dp[n];
         
           int val= tribo(n-3 , dp)+tribo(n-2 , dp)+tribo(n-1 , dp);
         
          return dp[n]=val;
     }
};