class Solution {
public:
     long int maxisum(vector<int>& hulu) {
         int n = hulu.size();
       
        long int prev=hulu[0];
         long int prev2=0;
        
        
        
        for(int i =1 ; i< n ; i++){
            
           int pick= hulu[i];
            if(i>1) pick+=prev2;
           int notpick=0+prev;
            
            int cur=max(pick , notpick);
            
            prev2=prev;
            prev=cur;
        }
        
         
        return prev;
             
      
    }
    
    int rob(vector<int>& nums) {
         int n = nums.size();
         vector<int>temp1,temp2;
        if(n==1) return nums[0];
        
        for(int i =0 ; i<n ; i++){
            if(i!=0 ) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        
        return max(maxisum(temp1) , maxisum(temp2));
         
    }
};