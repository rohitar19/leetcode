class Solution {
public:
    bool validPalindrome(string s) {
        
        int i =0 ; int j= s.size()-1;
        
        while(i<=j){
           
             if(s[i]!=s[j]) {
                 return isPelidrom(s, i+1 , j) || isPelidrom(s, i , j-1) ;
             }
            
            i++;
            j--;
        }
        
        return true;
        
    }
    
       bool isPelidrom( string &s , int l, int h){
           
    
           
           while(l<h){
               if(s[l]!=s[h]) return false;
               
               l++;
               h--;
           }
           
           return true;
       }
};