class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        vector<int>v(n);
        int mini=INT_MAX;
      int   profit=INT_MIN;
        int sum=0;
        for(int i =0 ; i< n-1 ; i++){
                 
            if(n==1)
                return 0;
            
            
             if(p[i]<p[i+1])
             {
                 int x=p[i+1]-p[i];
                 v.emplace_back(x);
                 
             }
            
             mini=min(mini, p[i]);
            profit=max(profit, p[i]-mini);
        
        }
        
        for(int i =0 ; i<v.size(); i++){
            sum+=v[i];
        }
        
          return max(sum,profit);
    }
};