#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int minimum_element;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    minimum_element = INT_MAX;

    for(int i=0; i<n; i++)
    {
        minimum_element = min(arr[i],minimum_element);
    }

    // cout<<minimum_element;

    int res = INT_MAX;
    vector<int> indices;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==minimum_element)
        {
            indices.push_back(i);
            // cout<<i<<endl;
            // cout<<indices[i];
        }
    }

    for(int i=1; i<indices.size(); i++)
    {
        // cout<<indices[i] - indices[i-1];
        res = min(res, indices[i] - indices[i-1]);
    }

    cout<<res;
    return 0;

}