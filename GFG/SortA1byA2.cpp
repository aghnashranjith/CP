//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        // map<int,int> freq;
        // for(int i=0; i<N; ++i)
        // {
        //     freq[A1[i]]++;
        //     // cout<<freq[A1[i]];
        // }
        // map<int, int>:: iterator it;
        // for(it = freq.begin(); it!=freq.end(); ++it)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        // cout<<endl;
        vector<int> res;
        // int size = 0;
        // for(int i=0; i<M; i++)
        // {
        //     if(freq[A2[i]]!=0)
        //     {
        //         while(freq[A2[i]]--)
        //         {
        //             res.push_back(A2[i]);
        //             size++;
        //         }
        //     }
        // }
        
        // if(size < N)
        // {
        //     for(auto x : freq)
        //     {
        //         if(x.second!=0)
        //         {
        //             while(x.second--)
        //             {
        //                 res.push_back(x.first);
        //             }
        //         }
        //     }
        // }
        
        return res;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends