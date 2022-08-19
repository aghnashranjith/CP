//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string reversed_words = "";
        vector<string> words;
        string str = "";
        
        for(int i=0; i<S.size(); i++)
        {
            if(S[i] == '.')
            {
                words.push_back(str);
                str = "";
            }
            else
            {
                str.push_back(S[i]);
            }
        }
        
        //adding last word
        words.push_back(str);
        
        for(int i=words.size()-1; i>=0; i--)
        {
            reversed_words = reversed_words + words[i];
            if(i!=0)
            {
                reversed_words.push_back('.');
            }
        }
        return reversed_words;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends