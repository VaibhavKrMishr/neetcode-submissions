class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int n=nums.size();
        vector<int>res(n,1);

        long long int rp=1;
        for(int i=0;i<n;i++){
            res[i] *=rp;
            rp*=nums[i];
        }
        long long int lp=1;
        for(int i=n-1;i>=0;i--){
            res[i] *=lp;
            lp*=nums[i];
        }
        return res;
    }
};
