class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int,int>> p;
        map<int,int> m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        for(auto i : p){
            if(k>0)
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};
