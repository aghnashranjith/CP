// https://codeforces.com/problemset/problem/525/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string house_plan;
    cin>>house_plan;
    map<char, int> key_hash;
    int no_of_buys = 0;

    
    for(int i=0; i<(n-1)*2; i++)
    {
        // cout<<house_plan[i]<<"key :";
        if(i%2==0)
        //key
        {
            // cout<<"got: "<<house_plan[i]<<endl;
            auto it = key_hash.find(house_plan[i]);
            if(it != key_hash.end())
            {
                it->second++;
            }
            else
            {
                key_hash.insert({house_plan[i], 1});
            }
        }
        else
        // room
        {
            // cout<<"in room: "<<house_plan[i]<<endl;
            char X = tolower(house_plan[i]);
            auto it = key_hash.find(X);
            if(it!=key_hash.end())
            {
                // cout<<X<<": "<<it->second<<endl;
                it->second--;
                if(it->second == 0)
                {
                    key_hash.erase(it);
                }
            }
            else
            {
                no_of_buys++;
            }
        }

    }

    // for (auto &it : key_hash)
    // {
    //     cout<<"No of "<<it.first<<" keys:"<<it.second<<endl;
    // }
    

    cout<<no_of_buys;
    return 0;
}