class Solution {
public:
    bool search(vector<int>& nums, int key) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                return true;
            }
        }
        return false;
        
        
    }
};