class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++)
        {
            int n=__builtin_popcount(arr[i]);
            mp[n].push_back(arr[i]);
        }
        for(auto a:mp)
        {
            int x=a.first;
            sort(mp[x].begin(),mp[x].end());
        }
        vector<int>ans;
        for(auto x:mp)
        {
            for(auto a:x.second)
            {
                ans.push_back(a);
            }
        }
        return ans;
    }
};