class Solution {
    
    void soln(string digits, int i,string str, vector<string> &ans, map<int,string> keys)
    {
        if(i==digits.size())
        {
            ans.push_back(str);
            return;
        }
        
        int num = digits[i]-'0';
        string alpha = keys[num];
        for(int j=0; j<alpha.size(); j++)
        {
            str.push_back(alpha[j]);
            soln(digits, i+1, str, ans, keys);
            str.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        map<int,string> keys = {{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        
        vector<string> ans;
        string str = "";
        soln(digits, 0, str, ans, keys);
        return ans;
        
    }
};