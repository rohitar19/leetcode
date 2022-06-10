// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                
    deque<long long int >q;
    vector<long long int >v;
  
    
    for(long long int i =0 ; i < K ; i++){
        
        while(!q.empty() && A[i]<0 ){
            if(A[q.back()]>=0)
             q.pop_back();
            else
            break;
        }
        q.push_back(i);
    }
    if(A[q.front()]<0 && !q.empty())
        v.push_back(A[q.front()]);
        else
        v.push_back(0);
         
    //remaining k element 
     for(long long int i =K; i < N ; i++){
         
         while(!q.empty() && q.front()<=(i-K))
           q.pop_front();
           
             
        while(!q.empty() && A[i]<0 ){
            if(A[q.back()]>=0)
             q.pop_back();
            else
            break;
        }
        q.push_back(i);
        if(A[q.front()]<0 && !q.empty())
        v.push_back(A[q.front()]);
        else
        v.push_back(0);
         
     }
     
     return v;
     
    
 }