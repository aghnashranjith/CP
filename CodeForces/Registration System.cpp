//https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string, int> database;
    for(int i=0; i<n; i++)
    {
        string name;
        cin>>name;
        auto it = database.find(name);
        if(it != database.end())
        {
            cout<<name<<it->second++<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
            database.insert({name, 1});
        }
    }
}