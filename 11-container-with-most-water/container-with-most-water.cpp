class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int n=height.size()-1;
        for(int i=0,j=height.size()-1;i<j;)
        {
            if(height[i]<height[j])
            {
                maxi=max(maxi,height[i]*n);
                --n;
                i++;
            }
            else if(height[i]>height[j])
            {
                maxi=max(maxi,height[j]*n);
                --n;
                j--;
            }
            else
            {
                maxi=max(maxi,height[i]*n);
                --n;
                i++;
            }
        }
        return maxi;
    }
};