class Solution {
public:
    static const int m=1e9+7;
    int numberOfWays(string str) {
        long long int seat=0;
        long long int plant=0;
        long long int ans=1;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='S')
                seat=(seat+1)%m;
            else
            {
                if(seat==2)
                    plant++;
            }
            if(seat==3)
            {
                ans=(ans*(plant+1))%m;
                seat=1;
                plant=0;
            }
        }
        if(seat!=2)
            return 0;
        return ans;

       
    }
};