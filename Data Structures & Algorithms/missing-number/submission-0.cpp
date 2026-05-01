class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing=0;
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                missing =i;
                break;
            }
            missing=nums.size();
        }
        return missing;
    }
};