//CodeChef GCDQ https://www.codechef.com/problems/GCDQ

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N, Q;
	    cin >> N >> Q;
	    
	    int A[N];
	    
	    int fwd_gcd[N+10];
	    fwd_gcd[0] = 0;
	    for(int i = 1; i <= N; ++i)
	    {
	        cin >> A[i];
	        fwd_gcd[i] = __gcd(fwd_gcd[i-1], A[i]);
	    }
	    
	    int bwd_gcd[N+10];
	    bwd_gcd[N+1] = 0;
	    for(int i = N; i >= 1; --i)
	    {
	        bwd_gcd[i] = __gcd(bwd_gcd[i+1], A[i]);
	    }
	    
	    while(Q--)
	    {
	        int L, R;
	        cin >> L >> R;
	        
	        cout<<__gcd(fwd_gcd[L-1], bwd_gcd[R+1])<<endl;
	    }
	    
	}
	return 0;
}
