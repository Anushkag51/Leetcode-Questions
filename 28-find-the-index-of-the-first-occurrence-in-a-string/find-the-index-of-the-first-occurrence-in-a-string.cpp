class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                int f=0;
                for(int k=i+1,j=1;j<needle.size();j++,k++)
                {
                    if(haystack[k]==needle[j])
                    continue;
                    else
                    {
                        f=1;
                        break;
                    }

                }
                if(f==0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};