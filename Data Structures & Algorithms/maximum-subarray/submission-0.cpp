class Solution {
public:
    long long maxSubArray(vector<int>& nums) {

        //Using Kadane algorithm
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int g_mx_sum=INT_MIN;
        int c_mx_sum=0;
        for(int i=0;i<nums.size();i++){
            c_mx_sum=max(nums[i], c_mx_sum+nums[i]);
            g_mx_sum=max(c_mx_sum,g_mx_sum);
        }

        return g_mx_sum;
    }
};