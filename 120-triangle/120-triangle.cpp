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
        vector<int>front(n,0) ,cur(n,0);
        
        for(int j=0 ; j<n;j++){
            front[j]=tri[n-1][j];
        }
        
        for(int i=n-2 ; i>=0 ; i--){
            for(int j=i ; j>=0 ; j--){
                 int down=tri[i][j]+front[j];
                  int dig=tri[i][j]+front[j+1];
        
            cur[j]=min(down, dig);
          
            }
            
            front=cur;
        }
        
        
        return front[0];
         
    }
};