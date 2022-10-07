//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<char> legalMoves(int n, int x_curr, int y_curr, vector<vector<int>> &m)
    {
        vector<char> legal_moves;
        if(x_curr-1>=0 && m[x_curr-1][y_curr]!=0)
            legal_moves.push_back('U');
        if(x_curr+1<n && m[x_curr+1][y_curr]!=0)
            legal_moves.push_back('D');
        if(y_curr+1<n && m[x_curr][y_curr+1]!=0)
            legal_moves.push_back('R');
        if(y_curr-1>=0 && m[x_curr][y_curr-1]!=0)
            legal_moves.push_back('L');
            
        return legal_moves;
    }
    
    void recursePath(vector<vector<int>> &m, int x_curr, int y_curr, string path, vector<string> &paths, int n, vector<vector<int>> visited)
    {
        if(x_curr==n-1 && y_curr ==n-1)
        {
            paths.push_back(path);
            return;
        }
        vector<char> legal_moves = legalMoves(n, x_curr, y_curr, m);
        for(int i=0; i<legal_moves.size(); i++)
        {
            char move = legal_moves[i];
            int x_new,y_new;
            if(move == 'L')
            {
                x_new = x_curr;
                y_new = y_curr-1;
            }
            else if(move == 'R')
            {
                x_new = x_curr;
                y_new = y_curr+1;
            }
            else if(move == 'U')
            {
                x_new = x_curr-1;
                y_new = y_curr;
            }
            else if(move == 'D')
            {
                x_new = x_curr+1;
                y_new = y_curr;
            }
            
            if(!visited[x_new][y_new])
            {
                visited[x_new][y_new] = 1;
                path.push_back(move);
                recursePath(m, x_new, y_new, path, paths, n, visited);
                path.pop_back();
                visited[x_new][y_new] = 0;
            }
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> paths;
        vector<vector<int>> visited(n,vector<int>(n,0));
        visited[0][0] = 1;
        string path = "";
        if(m[0][0]==0)
            return paths;
        if(m[n-1][n-1]==0)
            return paths;
        recursePath(m, 0,0, path, paths, n, visited);
        return paths;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends