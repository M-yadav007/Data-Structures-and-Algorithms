class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int t=2;
        
        while(t--)
        {
        for(int i:nums)
        {
            ans.push_back(i);
        }
        }
        
        return ans;
        
    }
};