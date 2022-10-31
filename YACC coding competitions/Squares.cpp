#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int res = arr[0];

    for(int i=0; i<n; i++)
    {
        int root = sqrt(arr[i]);
        if(arr[i] != root*root)
            res = max(res, arr[i]);
    }

    cout<<res;
    return 0;
}