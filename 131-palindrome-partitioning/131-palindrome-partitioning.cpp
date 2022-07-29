class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        
        func(0 , s, ds ,ans);
        return ans;
    }
    
    void func(int ind , string s , vector<string>&ds , vector<vector<string>>&ans){
        
          if(ind ==s.size())
          {
              ans.push_back(ds);
              return;
          }
        
        for( int i=ind ; i<s.size() ; i++){
            if(isPelidrome(s, ind , i)){
                ds.push_back(s.substr(ind , i-ind+1));
                func(i+1 , s , ds ,ans);
                ds.pop_back();
                
            }
            
        }
    }
    
     bool isPelidrome(string s , int start , int end){
         while(start<=end){
             if(s[start++]!=s[end--]) return false;
         }
         return true;
     }
};