class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        int left=0;
        int right=k;
        vector<int>ans;
        for(right;right<=n;right++){
            int maxi=INT_MIN;
            for(int j=left;j<right;j++){
                maxi=max(maxi,nums[j]);
            }
            ans.push_back(maxi);
            left++;
        }
        return ans;
    }
};