//https://www.codechef.com/LRNDSA01/problems/FCTRL 

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int numberOfFives;
// 	find_zeroes();
	while(N--)
	{
	    int n;
	    cin>>n;
	    if(n<5)
	        cout<<'0'<<endl;
	    else
	    {
	        numberOfFives = 0;
	        while(n/5>=1)
	        {
	            numberOfFives = numberOfFives + n/5;
	            n = n/5;
	        }
	        cout<<numberOfFives<<endl;
	    }
	}
	return 0;
}
