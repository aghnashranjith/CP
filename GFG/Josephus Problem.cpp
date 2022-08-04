//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
        int josephus_circle[n+1];
        for(int i=1; i<=n; i++)
            josephus_circle[i] = 0;
        int no_of_dead =0;
        int killer=1;
        while(no_of_dead!=n-1)
        {
            for(int live_persons_skipped=1; live_persons_skipped <= k-1;)
            {
                if(josephus_circle[killer]==1)
                {
                    killer++;
                    if(killer>n)
                        killer = 1;
                    // cout<<"\ndead guy skipped: "<<killer-1;    
                }
                else
                {
                    killer++;
                    if(killer>n)
                        killer = 1;
                    live_persons_skipped++;
                    // cout<<"\nskipped: "<<killer-1<<" and "<<josephus_circle[killer-1]<<"but killer: "<<killer;
                }
                // cout<<killer<<endl;
            }

            while(true)
            {
                if(josephus_circle[killer]==0)
                    break;
                killer++;
                 if(killer>n)
                    killer = 1;
            }
            josephus_circle[killer]=1;
            no_of_dead++;
            // cout<<"\nkilled: "<<killer;
            // // josephus_circle[2]==1;
            // //going to the next live person
            while(true)
            {
                if(josephus_circle[killer]==0)
                    break;
                killer++;
                 if(killer>n)
                    killer = 1;
            }
            
        }
        return killer;
    }
};




//{ Driver Code Starts.

int main() {
	
	int t;
    t=1;
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends