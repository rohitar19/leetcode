class Solution {
    public:
    int f(int i , int j , int n, vector<vector<int>>&tri, vector<vector<int>>&dp){
       
        if(i==n-1){
           return tri[n-1][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int down=tri[i][j]+f(i+1,j,n,tri,dp);
        int dig=tri[i][j]+f(i+1,j+1,n,tri,dp);
        
        return dp[i][j]=min(down, dig);
        
        
    }
    
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
//         for(int j=0 ; j<n;j++){
//             dp[n-1][j]=tri[n-1][j];
//         }
        
//         for(int i=n-2 ; i>=0 ; i--){
//             for(int j=0 ; j<n ; j++){
//                  int down=tri[i][j]+dp[i+1][j];
//                   int dig=tri[i][j]+dp[i+1][j+1];
        
//             dp[i][j]=min(down, dig);
          
//             }
//         }
        
        
        return f(0,0,n,tri,dp);
         
    }
};