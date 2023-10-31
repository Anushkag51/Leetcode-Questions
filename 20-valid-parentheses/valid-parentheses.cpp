class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(auto ch : str)
        {
            if(ch=='(' or ch=='{' or ch=='[')
                s.push(ch); 
            else if(s.empty())
                return false;
            else if(!s.empty())
            {
                if(ch==')' and s.top()=='(' )
                { 
                    s.pop();
                    continue;
                }
                else if(ch=='}' and s.top()=='{')
               {
                   s.pop();
                        continue;
               }
                else if(ch==']' and s.top()=='[')
                {
                    s.pop();
                    continue;
                }
                else
                    return false;
            }
        }
        return s.empty();
    }
};