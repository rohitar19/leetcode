// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans;
		    unordered_map<char,int>m;
		    queue<int>q;
		    
		      for(int i =0 ; i< A.size(); i ++){
		          if(m[A[i]]==0)
		           q.push(A[i]);
		           
		           m[A[i]]++;
		      

		        while(!q.empty() && m[q.front()]>1)
		          q.pop();
		        
		        if(q.empty())
		        ans.push_back('#');
		        
		        else
		        ans.push_back(q.front());
		        
		      }
		      
		        return ans;
		        
		        
		        
		        
		          
		      
            }
		

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends