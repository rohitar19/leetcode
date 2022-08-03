class Solution {
public:
    int fib(int n) {
        vector<int>dp(n+1, -1);
       return  Fact(n , dp);
    }
    
     int Fact(int n , vector<int>&dp){
            if(n==0 || n==1){
            
                return n;
            }
         
         if(dp[n]=!-1) return dp[n];
         
         int val=Fact(n-1, dp)+Fact(n-2 , dp); 
         
         return dp[n]=val;
     }
};