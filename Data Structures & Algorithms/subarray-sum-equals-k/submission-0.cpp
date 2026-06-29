class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        long long int current_sum=0;
        unordered_map<long long, int> prefix_sum;

        prefix_sum[0] = 1;

        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            if(prefix_sum.find(current_sum - k) != prefix_sum.end()){
                count+=prefix_sum[current_sum - k];
            }
            prefix_sum[current_sum]++;

        }
    return count;        
    }
};