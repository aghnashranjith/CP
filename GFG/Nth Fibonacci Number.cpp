//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        //Recursive solution
        // if(n==1)
        //     return 1;
        // else if(n==2)
        //     return 1;
        // else
        //     return nthFibonacci(n-1) + nthFibonacci(n-2);
    
        //DP solution
        long long int fib[n];
        fib[0]=fib[1]=1;
        for(int i=2; i<n; i++)
        {
            fib[i]=(fib[i-1]+fib[i-2])%1000000007;
        }
        return fib[n-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends