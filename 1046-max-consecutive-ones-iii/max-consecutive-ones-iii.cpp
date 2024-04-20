class Solution {
public:
    bool check(int size, vector<int>&nums,int k)
    {
        int n=nums.size();
        int i=0,j=0;
        int count=0;
        while(j<n)
        {
            if(nums[j]==1)
                count++;
            if(j-i+1==size)
            {
                int x=size-count;
                if(x<=k)
                    return true;
                if(nums[i]==1)
                    count--;
                i++;
            }
            j++;
        }
        return false;
    }
    int longestOnes(vector<int>& nums, int k) {
        int low=1;
        int high=nums.size();
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(mid,nums,k))
            {
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};