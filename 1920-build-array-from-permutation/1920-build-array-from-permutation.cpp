class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> tryn;
        for(auto i:nums)
        {
            tryn.push_back(i);
        }
        
        vector<int> ans(nums.size(),0);
        for(int i=0;i<tryn.size();i++)
        {
            
            ans[i]=tryn[tryn[i]];
        }
        return ans;
        
    }
};