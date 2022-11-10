class Solution {
public:
    int min(int a, int b)
    {
        if(a<b)
            return a;
        return b;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs[0].length();
        for(int i=0; i<strs.size(); i++)
        {
            int j=0;
            while(j<strs[i].length() && strs[i][j]==strs[0][j])
                j++;
            len = min(j,len);
        }
        string ans = "";
        for(int i=0; i<len; i++)
            ans.push_back(strs[0][i]);
        return ans;
    }
};