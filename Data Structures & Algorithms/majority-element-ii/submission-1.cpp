class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int count=0;
        int n= nums.size();

        for (int i=0;i<nums.size();i++){
                if(nums[i]==nums[i+1]){
                    count++;
                }
                else{
                    if(count>=nums.size()/3){
                        ans.push_back(nums[i]);
                    }
                    count=0;
                }
        }
        return ans;
    }
};