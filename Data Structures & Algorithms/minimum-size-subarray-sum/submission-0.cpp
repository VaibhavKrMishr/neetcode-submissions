class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int min_len=INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            while(target<=sum){
                int len=i-left+1;
                min_len=min(min_len,len);
                sum-=nums[left];

                left++;
            }
        }
        if(min_len==INT_MAX) return 0;
        return min_len;
    }
};