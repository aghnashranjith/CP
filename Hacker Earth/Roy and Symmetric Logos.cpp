#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--)
	{
		int N;
        cin>>N;
		char Logo[N+1][N+1];

        for(int i=0; i<N; i++)
        {
            string s;
            cin>>s;
            for(int j =0; j<N; j++)
            {
                Logo[i][j] = s[j];
            }
        }       

		int flag=0;
		if(N%2==0)
		{
			flag = 0;
			for(int i=0; i < N/2; i++)
			{
				for(int j=0; j<N/2; j++)
				{
					// the points that should be the same are: Logo[i][j], Logo[i][N+1-j], Logo[N+1-i][j] and Logo[N+1-i][N+1-j]
					if(!(Logo[i][j]==Logo[i][N-j-1] && Logo[i][j]==Logo[N-i-1][j] && Logo[i][j]==Logo[N-i-1][N-j-1]))
						{flag = 1;
						break;}

						

				}
				if(flag == 1)
					break;
			}
		}
		else
		{
			flag = 0;
			for(int i=0; i < N/2+1; i++)
			{
				for(int j=0; j<N/2+1; j++)
				{
					// the points that should be the same are: Logo[i][j], Logo[i][N+1-j], Logo[N+1-i][j] and Logo[N+1-i][N+1-j]
					if(!(Logo[i][j]==Logo[i][N-j-1] && Logo[i][j]==Logo[N-i-1][j] && Logo[i][j]==Logo[N-i-1][N-j-1]))
						{flag = 1;
						break;}

						

				}
				if(flag == 1)
					break;
			}
		}

		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		
	}    
}