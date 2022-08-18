//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int flag, first_index, second_index;
        for(int i=0; i<n; i++)
        {
            flag = 0;
            long long sum = arr[i];
            if(sum == s)
            {
                first_index = second_index = i+1;
                flag = 1;
                break;
            }
            for(int j=i+1; j<n; j++)
            {
                sum = sum + arr[j]; //sum of all the elements in the sub array from i to j indices.
                if(sum == s)
                {
                    first_index = i+1;
                    second_index = j+1;
                    flag = 1;
                    break;
                }
                else if(sum > s)
                {
                    break;
                }
                
            }
            if(flag == 1)
            {
                break;
            }
        }
        
        if(flag == 1)
        {
            vector<int> res;
            res.push_back(first_index);
            res.push_back(second_index);
            return res;
        }
        else
        {
            // cout<<"error";
            vector<int> res;
            res.push_back(-1);
            return res;
        }
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends