class Solution {
    public:
    int f(int i , int j , int n , vector<vector<int>>& matrix, vector<vector<int>>&dp){
        
           if(j<0 || j>=n) return 1e8;
        
             if(i==n-1){
                  return matrix[n-1][j];
              }
          if(dp[i][j]!=-1) return dp[i][j];
          int down=matrix[i][j]+f(i+1,j,n,matrix,dp);
          int left=matrix[i][j]+f(i+1,j-1,n,matrix,dp);
          int right=matrix[i][j]+f(i+1,j+1,n,matrix,dp);
        
        return dp[i][j]=min(down,min(left,right));
        
      
      
        
    
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
          int n=matrix.size();
         vector<vector<int>>dp(n,vector<int>(n,-1));
         
         int ans=INT_MAX;
         for(int j=0 ; j<n ; j++){
             ans=min(ans,f(0,j,n,matrix,dp));
         }
        
        return ans;
    }
};