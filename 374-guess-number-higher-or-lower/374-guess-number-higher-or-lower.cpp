/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
         
         int l=1 ; int r = n; int ans;
        
              
        
          while(l<=r){
              
               int mid=l+(r-l)/2;
              
                if(guess(n)==mid)   
                    ans=mid;
              
            else  if(mid<guess(n))
                      l=mid+1;
              
              else
                  r=mid-1;
              
          }
        
        return ans;
           
    }
};