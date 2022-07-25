class Solution {
  public:
    void  printCombination( int ind , int target , vector<int>&arr , vector<int>&ds , vector<vector<int>>&ans){
        
        if(ind==arr.size()){
              if(target==0)
                ans.push_back(ds);
            
                return;
           
        
        }
        if(arr[ind]<=target){
         ds.push_back(arr[ind]);
         printCombination(ind , target-arr[ind] , arr , ds , ans);
         ds.pop_back();
        }
        
        printCombination(ind+1 , target , arr , ds , ans);

    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
        vector<int>ds;
       
        
        printCombination(0 , target  , candidates , ds , ans );
        
        return ans;
        
        
    }
};