class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int k=INT_MAX; int prof=0; int n=prices.size() ;
        for(int i=0 ; i<n; i++){
           k=min(k,prices[i]);
            
             prof= max(prof, prices[i]-k);
        }
        return prof;
      
        
        
    }
};
        
        