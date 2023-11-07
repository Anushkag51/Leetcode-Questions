class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        string ans="";
        stack<string>s;
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
                continue;
            string temp;
            while(path[i]!='/' and i<path.size())
            {
                temp+=path[i];
                i++;
            }

            if(temp==".")
                continue;
            if(temp=="..")
                {
                    if(!s.empty())
                    s.pop();
                }
            else
                s.push(temp);
           
        }
        while(!s.empty())
        {
            ans="/"+s.top()+ans;
            s.pop();
        }
        if(ans.size()==0)
            return "/";
        return    ans;     
    
    }
};