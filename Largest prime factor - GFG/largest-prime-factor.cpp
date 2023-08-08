//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
          int maxi=0;
        if(N==1)
        {
            return 1;
        }
        
        for(int i=2;i<=N;i++)
        {
            while(N%i==0)
            {
                maxi=max(maxi,i);
                N/=i;
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends