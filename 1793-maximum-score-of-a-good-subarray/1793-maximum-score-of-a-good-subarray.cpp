class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i=k;
        int j=k;
      
        int n=nums.size();
        int ans=nums[k];
        int mini=nums[k];
        while(i>0 || j<nums.size()-1 ){
            
               // mi=min_element(nums.begin()+j,nums.end()-n-i)-nums.begin(); this will take o(n) time
            
            if(i==0)
                j++;
           else if(j==nums.size()-1)
                i--;
            
           else if(nums[i-1]>nums[j+1])
                i--;
            else
                j++;
       mini=min(mini, min(nums[i],nums[j]));
            
            ans=max(ans, mini*(j-i+1));
             
        }
        return ans;
        
    }
};