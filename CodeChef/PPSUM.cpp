#include <iostream>
using namespace std;

int sum(int times, int num)
{
    if(times==0)
        return num;
    int n=0;
    for(int i=1; i<=num; i++)
    {
        n=n+i;
    }
    --times;
    return sum(times,n);
}

int main()
{
	int T;
	cin>>T;
	int D,N;
	while(T--)
	{
	    cin>>D>>N;
	    cout<<sum(D,N)<<endl;
	}
	return 0;
}