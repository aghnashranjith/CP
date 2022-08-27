//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int absolute_value(int a)
    {
        if(a>=0)
        {
            return a;
        }
        return -a;
    }
    
    int closestNumber(int N , int M) {
        // code here
        int first, second;
        int n = N;
        while(n--)
        {
            if((n+1)%M == 0)
            {
                first = n+1;
                break;
            }
        }

        second = first + M;

        if(absolute_value(N-first)< absolute_value(second - N))
        {
            return first;
        }
        else
        {
            return second;
        }

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends