class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;

        for(auto x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            if(x.second>=k){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};
