class Solution {
public:
    int findPairs(vector<int>& a, int k) {
         int i =0 ; int j=1 ; int ans=0;
        int n=a.size();
        sort(a.begin(),a.end());
        while(i<n && j<n){
            
            if(i==j || abs(a[i]-a[j])<k)
                j++;
            
            else if(abs(a[i]-a[j])==k){
                
                ans++;
                
                j++;
                
             if(j<n){
                
           while(a[j]==a[j-1] ){
                    j++;
           }
                }
               
            }
                else
                    i++;
              
            
        }
        
        return ans;
        
    }
};