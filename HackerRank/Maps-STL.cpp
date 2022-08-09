//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    map<string,int> marks;
    while(T--)
    {
        int choice;
        cin>>choice;
        if(choice == 1)
        {
            string name;int marks_to_be_added;
            cin>>name>>marks_to_be_added;
            auto it = marks.find(name);
            if(it != marks.end())
                it->second = it->second + marks_to_be_added;
            else
                marks.insert({name, marks_to_be_added});
        }
        else if(choice ==2)
        {
            string name; cin>>name;
            auto it = marks.find(name);
            if(it != marks.end())
                it->second =0;
            
                // cout<<"error";
            // break;
        }
        else if(choice == 3)
        {
            string name; cin>>name;
            auto it = marks.find(name);
            if(it != marks.end())
                cout<<it->second<<endl;
            else
                cout<<0<<endl;
            // break;
        }
    }
    return 0;
}



