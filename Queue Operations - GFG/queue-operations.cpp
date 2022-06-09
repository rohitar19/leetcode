// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
       q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
      
        int cnt=0;
        int s=q.size();
        // queue<int>q1;
         for(int i =0 ; i<s ; i++){
              
               if(q.front()==k){
                   cnt++;
                  q.push(q.front());
                   q.pop();
               }
               else
            q.push(q.front());
               q.pop();
          }
          
          if(cnt==0)
          return -1;
          else
          return cnt;
            
         }
        
    
    
};

// { Driver Code Starts.
int main() {
    
		int testcase;
		cin>>testcase;
		
		while(testcase-- > 0){
		    // Declaring Queue
		    queue<int> q;
		    int n, k;
		    cin>>n;
		    
		    // Invoking object of Geeks class
		    Solution obj;
		    
		    for(int i = 0;i<n;i++){
		        cin >> k;
		        obj.insert(q, k);
		    }
		   
		    int m;
		    cin >> m;
		    for(int i = 0;i<m;i++){
		        cin >> k;
		        int f = obj.findFrequency(q, k);
		        if(f != 0){
		            cout<<f<<endl;
		        }
		        else{
		            cout<<"-1\n";
		        }
		    }
		}
	return 0;
}  // } Driver Code Ends