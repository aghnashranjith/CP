#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	unordered_set<long long> candies;
	while(T--)
	{
		int N;
		int M;
		cin>>N>>M;
		candies.clear();
		for(int i=0; i<N; i++)
		{
			long long n;
			cin>>n;
			candies.insert(n);
		}
		for(int i=0; i<M; i++)
		{
			long long n;
			cin>>n;
			if(candies.find(n)!=candies.end())
				cout<<"YES\n";
			else
			{
				cout<<"NO\n";
				candies.insert(n);
			}
		}
	}
	return 0;
}