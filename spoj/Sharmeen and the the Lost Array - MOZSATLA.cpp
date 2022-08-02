#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=0;

        for(int i=1; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                arr[i]=0;
            else if(arr[i]==1)
                arr[i]=1;
            else
                arr[i]=-1;
        }

        // for(int i = 1; i<n ; i++)
        // {
        //     cout<<arr[i]<<endl;
        // }

        int pf[n], smallest=INT_MAX;
        pf[0]=1;
        for(int i=1; i<n; i++)
        {
            pf[i] = pf[i-1] + arr[i];
            if(pf[i]<smallest)
                smallest = pf[i];
        }
        cout<<endl<< smallest<<endl;
        int diff;
        if(smallest!=1)
            diff = smallest -1;

        for(int i=0; i<n; i++)
        {
            cout<<pf[i]-diff<<" ";
        }
    }
}