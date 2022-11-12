class Solution {
public:
    bool isDivby5(int i)
    {
        if(i%5==0)
            return true;
        return false;
    }
    
    bool isDivby3(int i)
    {
        if(i%3==0)
            return true;
        return false;
    }
    
    bool isDivby3and5(int i)
    {
        return isDivby3(i) && isDivby5(i);
    }
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1; i<=n; i++)
        {
            if(isDivby3and5(i))
            {
                ans.push_back("FizzBuzz");
                continue;
            }
            if(isDivby3(i))
            {
                ans.push_back("Fizz");
                continue;
            }
            if(isDivby5(i))
            {
                ans.push_back("Buzz");
            }
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};