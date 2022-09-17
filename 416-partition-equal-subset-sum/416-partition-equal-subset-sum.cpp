class Solution {
    public:
     bool f(int ind , int target , vector<int>&nums ,vector<vector<int>>&dp){
           
            if(ind==0){
                return target==nums[0];
            }
           if(dp[ind][target]!=-1) return dp[ind][target];
            int notPick=f(ind-1 , target , nums,dp);
           int pick=0;
            if(nums[ind]<=target) 
            pick=f(ind-1 , target-nums[ind] , nums,dp);
         
          return dp[ind][target]=pick|notPick;
         
     }
       
    
public:
    bool canPartition(vector<int>& nums) {
        int totSum=0;
        int n=nums.size();
         for(int i =0 ; i<nums.size() ; i++){
             totSum+=nums[i];
         }
         vector<vector<int>>dp(n,vector<int>((totSum/2)+1 , -1));
        
       if(totSum%2) return false;
        
        else
             return f(n-1 , totSum/2 , nums , dp);
    }
};