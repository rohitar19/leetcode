class Solution {
public:
    int minPairSum(vector<int>& nums) {
     int   maxsum=INT_MIN; int n= nums.size();
        sort(nums.begin(),nums.end());
        
        
        int l=0 ; int r= n-1;
        while(l<r){
            maxsum=max(maxsum, nums[l]+nums[r]);
            l++;
            r--;
            
        }
        return maxsum;
      
    }
};