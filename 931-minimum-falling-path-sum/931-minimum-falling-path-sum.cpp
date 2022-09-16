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
          int INF=(int)1e9;
          int n=matrix.size();
        vector<int>prev(n,INF) , cur(n,INF);
        
        for(int j=0 ; j<n ; j++){
            prev[j]=matrix[n-1][j];
        }
        
        for(int i=n-2 ; i>=0 ; i--){
            for(int j=n-1 ; j>=0 ; j--){
          int down=matrix[i][j]+prev[j];
                
              int left=matrix[i][j];
                if(j>0)left+=prev[j-1];
                else left+= 1e8;
                
              int right=matrix[i][j];
                if(j+1<n)right+=prev[j+1];
                else right+=1e8;
        
          cur[j]=min(down,min(left,right));
            }
            
            prev=cur;
        }
        
        
        
         
         int ans=INT_MAX;
         for(int j=0 ; j<n ; j++){
             ans=min(ans,prev[j]);
         }
        
        return ans;
    }
};