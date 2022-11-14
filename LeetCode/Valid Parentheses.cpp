class Solution {
public:
    bool isValid(string s) {
        
        map<char, int> m;
        m.insert({'(', 1});
        m.insert({')', -1});
        m.insert({'{', 2});
        m.insert({'}', -2});
        m.insert({'[', 3});
        m.insert({']', -3});

        stack<char> st;
        for(int i=0; i<s.length(); i++)
        {
            if(m[s[i]]>0)
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                char ch = st.top();
                int val = m[ch];
                if(val*(-1) != m[s[i]])
                    return false;
                st.pop();
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};