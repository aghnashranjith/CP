#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        
        int hash[s.size()][26];
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                hash[i][j]=0;
            }
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            hash[i][s[i]-'a']++;
        }

        // for (int i = 0; i < s.size(); i++)
        // {
        //     for (int j = 1; j < 26; j++)
        //     {
        //         cout<<hash[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j < s.size(); j++)
            {
                hash[j][i] = hash[j][i] + hash[j-1][i];
            }
            
        }
        
        
        // for (int i = 0; i < s.size(); i++)
        // {
        //     for (int j = 0; j < 26; j++)
        //     {
        //         cout<<hash[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        int flag = 0;
        int mid = s.size()/2;
        for(int i=0; i<26; i++)
        {
            if(s.size()%2==0)
            {
                int left_freq = hash[mid-1][i];
                int right_freq = hash[s.size()-1][i] - hash[mid-1][i];
                if(left_freq != right_freq)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                int left_freq = hash[mid-1][i];
                int right_freq = hash[s.size()-1][i] - hash[mid][i];
                if(left_freq != right_freq)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }
}