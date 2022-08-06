//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?page=4&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long arr[m+n]; //merged array 
            int i=0,j=0;
            // for(int k=0; k<n; k++)
            // {
            //     cout<<arr1[k]<<endl;
            // }
            while(i<n && j<m)
            {
                // cout<<i+j<<". "<<arr1[i]<<" "<<arr2[j]<<endl;
                if(arr1[i]==arr2[j])
                {
                    arr[i+j] = arr1[i];
                    arr[i+j+1] = arr2[j];
                    i++;j++;
                }
                else if(arr1[i]<arr2[j])
                {
                    arr[i+j] = arr1[i];
                    // cout<<"\n"<<arr[i+j]<<"\n";
                    i++;
                }
                else
                {
                    arr[i+j] = arr2[j];
                    j++; 
                }
            }
            if(i<n)
            {
                while(i<n)
                {
                    arr[i+j] = arr1[i];
                    i++;
                }
            }
            else if(j<m)
            {
                while(j<m)
                {
                    arr[i+j] = arr2[j];
                    j++;
                }
            }
            //merge complete
            
            // cout<<"arr1[] = [";
            for(int i1=0; i1<n; i1++)
            {
                // cout<<arr[i]<<" ";
                arr1[i1] = arr[i1];
            }
            // cout<<"]"<<endl;
            
            // cout<<"arr2[] = [";
            int j1=0;
            for(int i1=n; i1<n+m; i1++)
            {
                // cout<<arr[i]<<" ";
                arr2[j1++] = arr[i1];
            }
            // cout<<"]"<<endl;
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends