class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        long long int  product=1;
        int left=0;
        int ans=0;
        for(int right = 0; right<n ;right++){
            product*=nums[right];
            
            while (left <= right && product >= k) {
                product /= nums[left];
                left++;
            }
            ans+=right - left +1;
        }
        return ans;
    }
};