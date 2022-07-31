#include <iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;    //Reading input from STDIN

	int count_hash[10000]={0};
	int A[N];
	for(int i = 0; i < N; i++)
	{
		cin>>A[i];
		count_hash[A[i]]++;
	}

	for(int i =0; i < N; i++)
	{
		if(count_hash[K-A[i]]>0)
		{
			cout<<"YES\n";
            cout<<A[i]<<" "<<count_hash[K-A[i]];
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}

