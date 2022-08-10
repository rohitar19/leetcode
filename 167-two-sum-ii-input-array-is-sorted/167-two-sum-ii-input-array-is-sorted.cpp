class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i =0 ;
        int j=nums.size()-1;
        vector<int>ans;
        
          while(i<j){
              
           int mid=j-(j-i)/2;
            int sum= nums[i]+nums[j];
              
               if(sum==target)
               {
                   ans.push_back(i+1);
                   ans.push_back(j+1);
                   break;
               }
              
              if(sum>target){
                  
                   if(nums[i]+nums[mid]>target)
                       j=mid-1 ;
                       
                       else
                           j--;
              }
                  else{
                      
                         if(nums[j]+nums[mid]<target)
                             i=mid+1;
                      else
                          i++;
                  
                  
              }
                
              
              
          }
        
        return ans;
    }
};