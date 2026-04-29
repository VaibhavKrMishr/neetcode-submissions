class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()/2]){
            return nums[0];
        }
        else{
            return nums[nums.size()/2];
        }
    }
};