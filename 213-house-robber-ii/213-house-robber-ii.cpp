class Solution {
    
    int maxSum(vector<int>& nums) {
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
    
    
public:
    int rob(vector<int>& num) {
         int n = num.size();
         vector<int>temp1,temp2;
         if(n==1) return num[0];
        for(int i=0 ; i< n ; i++){
            if(i!=0) temp2.push_back(num[i]);
            if(i!=n-1) temp1.push_back(num[i]);
            
           
        }
         return max(maxSum(temp1) , maxSum(temp2));
        
    }
};