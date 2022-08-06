//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int flag = 0;
        int Integer = 0;
        int i;
        if(str[0]=='-')
        {
            flag = 1;
            i = 1;
        }
        else
            i = 0;
        for(; i<str.size(); i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                Integer = Integer*10 + (int)str[i]- (int)('0');
                // cout<<Integer<<endl;
            }
            else
            {
                return -1;
            }
        }
        if(flag)
        return 0-Integer;
        else
        return Integer;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends