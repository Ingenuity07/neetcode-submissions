class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int f=0;
        if(nums.size()>1)
        for(int i=0;i<nums.size()-1;i++)if(nums[i]==nums[i+1])f=1;

        return f;
    }
};