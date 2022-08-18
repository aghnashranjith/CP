//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int no_of_triplets = 0;
	    
	    sort(arr, arr+n);
	    
	    int hash[100000] = {0};
	    
	    for(int i=0; i<n; i++)
	    {
	        hash[arr[i]]=1;
	    }
	    
	   // vector<int> existence;
	    
	   // for(int i=0; i<n; i++)
	   // {
	   //     existence.push_back(arr[i]);
	   // }
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(arr[i]+arr[j]>arr[n-1])
	                break;
	           // auto it = existence.find(arr[i] + arr[j])
	            if(hash[arr[i]+arr[j]]==1)
	                no_of_triplets++;
	        }
	    }
	    
	    return no_of_triplets;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends