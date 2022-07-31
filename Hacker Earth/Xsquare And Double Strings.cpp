/* https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
Hacker Earth problem */

#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num--)
	{
		int alphabet_count_hash[26] = {0};
		
        string Stringy;

        cin>>Stringy;
        for(int i=0; i<Stringy.size(); ++i)
        {
            alphabet_count_hash[Stringy[i]-'a']++;
        }

        int flag = 0;

        for (int i = 0; i < 26; ++i)
        {
            if(alphabet_count_hash[i]>=2)
            {
                flag = 1;
                break;
            }
        }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
	}
}