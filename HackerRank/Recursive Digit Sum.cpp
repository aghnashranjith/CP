#include <bits/stdc++.h>

using namespace std;

int superdigit(string n)
{
    if(n.size()==1)
        return stoi(n);

    else
    {
        long next_n=0;
        // int real_n= n;
        // for(int i=0; i<n; i++)
        // {
        //     next_n += real_n%10;
        //     real_n = real_n/10;
        // }
        int count = n.size();
        for(int i=0; i<count; i++)
        {
            int digit = n[i]-'0';
            next_n += digit;
        }
        string next;
        // cout<<endl<<next_n;
        next = to_string(next_n);
        return superdigit(next);
    }
}


int main(){
    string n;
    cin>>n;
    // cout<<n[n.size()-1]-'0';
    int k;
    cin>>k;

    int res;
    res = superdigit(n)*k;
    while(res>9)
        res = superdigit(to_string(res)); 
    cout<<res;
    return 0;
}
