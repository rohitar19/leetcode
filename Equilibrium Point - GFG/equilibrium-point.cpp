//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
          if(n==1) return 1;
          int i=0;
          int j=n-1;
         long long int sumi=a[i];
         long long int sumj=a[j];
          
          while(i<j){
               if(sumi<sumj){
                   i++;
                   sumi+=a[i];
               }
               else if (sumi>sumj){
                   j--;
                   sumj+=a[j];
               }
               else {
                   i++;
                   sumi+=a[i];
               }
          }
          
         
        if(i==j && sumi==sumj) return i+1;
          else return -1;
          
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends