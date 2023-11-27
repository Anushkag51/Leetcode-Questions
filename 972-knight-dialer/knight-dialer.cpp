class Solution {
public:
    static const int m=1e9+7;
    int knightDialer(int n) {
        vector<long long>cur(10,1);
        for(int j=2;j<=n;j++)
        {
            vector<long long>neww(10);
            neww[0]=(cur[4]+cur[6])%m;
            neww[1]=(cur[6]+cur[8])%m;
            neww[2]=(cur[7]+cur[9])%m;
            neww[3]=(cur[4]+cur[8])%m;
            neww[4]=(cur[0]+cur[3]+cur[9])%m;
            neww[5]=0;
            neww[6]=(cur[0]+cur[1]+cur[7])%m;
            neww[7]=(cur[2]+cur[6])%m;
            neww[8]=(cur[1]+cur[3])%m;
            neww[9]=(cur[2]+cur[4])%m;
            cur=neww;
        }
        int result=0;
        for(int i=0;i<10;i++)
        {
            result=(result+cur[i])%m;
        }
        return result;
    }
};