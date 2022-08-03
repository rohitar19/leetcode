class Solution {
public:
    int fib(int n) {
        // vector<int>dp(n+1);
         int prev=1;
         int prev2=0;
        if(n==0) return 0;
        
         // dp[0]=0 , dp[1]=1;
        
        for(int i=2 ; i<=n ; i++){
            
        int   curi=prev+prev2;
            prev2=prev;
            prev=curi;
            
        }
        
        return prev;
        
      
    }
    
//      int Fact(int n , vector<int>&dp){
//             if(n==0 || n==1){
            
//                 return n;
//             }
         
//          if(dp[n]=!-1) return dp[n];
         
//          int val=Fact(n-1, dp)+Fact(n-2 , dp); 
         
//          return dp[n]=val;
//      }
};