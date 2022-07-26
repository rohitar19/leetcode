class Solution {
   public:
    void findSubset(int ind , vector<int>&nums , vector<int>ds , vector<vector<int>>&ans){
        
        ans.push_back(ds);
        
        for(int i =ind ; i<nums.size(); i++){
            ds.push_back(nums[i]);
          
            findSubset(i+1 , nums, ds , ans);
            ds.pop_back();
        }
        
    }
   
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        findSubset(0,nums , ds , ans);
        return ans;
        
    }
};