class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        vector<pair<int,int>> ans;
        for(const auto &[key,val]: res){
            ans.push_back({val, key});
        }
        sort(ans.rbegin(),ans.rend());

        vector<int>ans2;
        for(int i=0;i<k;i++){
            ans2.push_back(ans[i].second);
        }
        return ans2;        
    }
};

