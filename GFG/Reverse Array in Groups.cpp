//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse array from indices l to r
    void reverse(vector<long long> &arr, int l, int r)
    {
        while(l<=r)
        {
            // cout<<arr[l]<<" "<<arr[r]<<endl;
            swap(arr[l++], arr[r--]);
            // cout<<arr[l-1]<<" "<<arr[r+1]<<endl;
        }
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int fullk = n/k;
        int rest = n%k;
        
        int l=0, r=k-1;
        for(int i=0; i<fullk; ++i)
        {
            // cout<<arr[l]<<" "<<arr[r]<<endl;
            reverse(arr,l,r);
            l += k;
            r += k;
        }
        
        if(rest!=0)
        {
            reverse(arr,l,n-1);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends