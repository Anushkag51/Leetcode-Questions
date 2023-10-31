class Solution {
public:
    bool check(vector<int>&time,int totaltrips,long long int   mid)
    {
        long long int  count=0;
        for(int  i=0;i<time.size();i++)
        {
            count+=(mid/time[i]);
        }
        if(count>=totaltrips)
        {
            return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totaltrips) {
        long  long int  left=1;
        long long int  right=1e14+5;
        long long int  mid,ans;
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(check(time,totaltrips,mid))
            {
                ans=mid;
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return ans;
    }
};