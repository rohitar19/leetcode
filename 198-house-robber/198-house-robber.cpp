class Solution {
    
    public:
    int f(int ind , vector<int>&nums, vector<int>&dp){
        
        if(ind==0) return nums[0];
        if(ind<0) return 0;        
        if(dp[ind]!=-1) return dp[ind];
        int notTake=0+f(ind-1 , nums,dp);
        int take=nums[ind]+f(ind-2 , nums,dp);
        
        return dp[ind]=max(take, notTake );
        
    }
    
    
public:
   
    int rob(vector<int>& nums) {
       int n =nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        for(int ind=1 ; ind<n ; ind++){
             int notTake=0+dp[ind-1];
      
       int take=nums[ind];
           if(ind>1)
               take+=dp[ind-2];
        
        dp[ind]=max(take, notTake );
            
        }
        return dp[n-1];
      
    }
};