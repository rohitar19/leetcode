class Solution {
public:
    void reverseString(vector<char>& s) {
      stack<int>st;
        
        for(int i =0 ; i<s.size() ; i++){
            
             st.push(s[i]);
            
        }
        int j=0;
        
        while(!st.empty()){
            s[j]=st.top();
            j++;
            st.pop();
        }
    }
};