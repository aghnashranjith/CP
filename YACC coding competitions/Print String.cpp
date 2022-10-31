#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int m, n;
        cin>>n>>m;

        string res = "";
        string abc = "abc";

        for(int i = 0; i<n; i++)
        {
            int index = i%3;
            res.push_back(abc[index]);
        }
        cout<<res<<endl;
    }
}