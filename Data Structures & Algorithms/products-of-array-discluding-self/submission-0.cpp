class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre, pos,ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(pre.size()<=0)pre.push_back(nums[i]);
            else pre.push_back(pre[i-1]*nums[i]);
        }

        for(int i=n-1;i>=0;i--){
            if(pos.size()<=0)
            pos.push_back(nums[i]);
            else 
            pos.push_back(pos[(n-i)-2]*nums[i]);
        }

        reverse(pos.begin(),pos.end());

        for(int i=0;i<n;i++){
            if(i==0)ans.push_back(pos[i+1]);
            else if(i==n-1)ans.push_back(pre[i-1]);
            else ans.push_back(pre[i-1]*pos[i+1]);
        }
        return ans;
    }
};
