class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,f=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
                f=1;
            }
            else if(f!=0)
            {
                break;
            }
        }
        return count;
    }
};