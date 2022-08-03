class Solution {
public:
    int tribonacci(int n) {
         vector<int>dp(n+1 , -1);
         if(n==0 || n==1) return n;
        
        // dp[0]=0 , dp[1]=1 , dp[2]=1;
        
        int prev3=0;
        int prev2=1;
        int prev=1;
        
        
         for(int i=3 ; i<=n ; i++){
              
             // dp[i]=dp[i-3]+ dp[i-2] + dp[i-1];
             int curi=prev3+prev2+prev;
             
             prev3=prev2;
             prev2=prev;
             prev=curi;
             
         }
          
      return prev;
          
    }
    
//      int  tribo(int n , vector<int>&dp){
         
//             if(n<=0 ) return 0;
         
//           if( n==1 || n==2) return 1;
         
//           if(dp[n]!=-1) return dp[n];
         
//            int val= tribo(n-3 , dp)+tribo(n-2 , dp)+tribo(n-1 , dp);
         
//           return dp[n]=val;
//      }
};