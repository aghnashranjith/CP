#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int iterations=0;
    bool pairfound=true;

    while(pairfound)
    {
        iterations++;
        int index=0;
        pairfound = false;
        for(int i=0; i<str.length()-1; i++)
        {
            if(str[i]==str[i+1])
            {
                pairfound = true;
                index = i;
                break;
            }
        }
        if(pairfound)
        {
            str.erase(index, index+1);
        }
    }

    if(iterations%2==0)
    {
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}