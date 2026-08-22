class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            res[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for (const auto &[key,val]: res){
            ans.push_back(val);
        }
        return {ans};
    }
};
