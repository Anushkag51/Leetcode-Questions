class Solution {
public:
    int find(vector<int>nums,int b,int r,int target)
    {
        while(b<=r)
        {
            int mid=(b+r)/2;
            if(nums[mid]<target)
                b=mid+1;
            else
                r=mid-1;
        }
        return b;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=find(nums,0,nums.size()-1,target);
        int end=find(nums,0,nums.size()-1,target+1)-1;
        if(start<nums.size() and nums[start]==target)
            return {start,end};
        return {-1,-1};

    }
};