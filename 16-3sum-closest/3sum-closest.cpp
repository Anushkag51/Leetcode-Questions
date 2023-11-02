class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l,r,sum,res=0,n=nums.size();
        int diff=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            l=i+1;
            r=n-1;
            while(l<r)
            {
                sum=nums[i]+nums[l]+nums[r];
                if(sum==target)
                    return target;
                if(abs(target-sum)<diff)
                {
                    diff=abs(target-sum);
                    res=sum;
                }
                if(sum>target)
                    r--;
                else
                    l++;
            }
        }
        return res;
    }
};