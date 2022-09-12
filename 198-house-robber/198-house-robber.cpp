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
        int prev=0 ; int prev2=0; int cur=0;
        // vector<int>dp(n,0);
        prev=nums[0];
        for(int ind=1 ; ind<n ; ind++){
             int notTake=0+prev;
      
       int take=nums[ind];
           if(ind>1)
               take+=prev2;
        
       cur=max(take, notTake );
            prev2=prev;
            prev=cur;
            
        }
        return prev;
      
    }
};