#include <bits/stdc++.h>
using namespace std;

int main()
{
	    int n;
	    cin>>n;
	    long customer_budget[n];
	    for(int i=0; i<n; ++i)
	        cin>>customer_budget[i];
	    
	    sort(customer_budget, customer_budget+n);
	    
	   // for(int i=0; i<n; ++i)
	   //     cout<<customer_budget[i]<<endl;
	    
	    long max_revenue=-1;
	    for(int i=0; i<n; ++i)
	    {
	        if(customer_budget[i]*(n-i) >= max_revenue)
	            max_revenue = customer_budget[i]*(n-i);
	    }
	    cout<<max_revenue<<endl;
	return 0;
}
