class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>>ans;

        set<vector<int>> unique_triplets;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            //for(int j=i+1;j<n-1;j++){
                // for(int k=j+1;k<n;k++){
                //     if(nums[i]+nums[j]+nums[k]==0){
                //         unique_triplets.insert({nums[i], nums[j], nums[k]});
                //     }
                //}

            int j=i+1;
            int k=n-1;
            while(j<k){
                int c_sum=nums[i]+nums[j]+nums[k];
                if(c_sum==0){
                    unique_triplets.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(c_sum<0) j++;
                else k--;
            }
        }
        for(auto triplet : unique_triplets){
            ans.push_back(triplet);
        }
        return ans;
    }
};
