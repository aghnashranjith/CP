//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int max_in_range(int arr[], int curr)
    {
        //curr is the index of the current position
        int highest = -1;
        for(int i=curr+1; i<=curr+arr[curr]; ++i)
        {
            if(arr[i]+i>arr[highest]+highest)   //GREEDY STEP //MOST IMPORTANT
            {
                highest = i;
            }
        }
        return highest;
    }
  
    int minJumps(int arr[], int n){
        // Your code here
        //jump to the greatest value in the range which is jumpable
        int i = 0, jump = 0;
        while(true)
        {
            if(i == n-1)
                break;
            if(arr[i]>=n-1 - i)
            {
                jump++;
                break;
            }
            else if(arr[i]<=0)
            {
                return -1;
            }
            else
            {
                i = max_in_range(arr, i);
                jump++;
            }
        }
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends