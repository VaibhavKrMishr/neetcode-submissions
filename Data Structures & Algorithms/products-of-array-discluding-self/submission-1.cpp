class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,1);
        for(int i=0;i<n;i++){
            int p=1;
                for(int j=0;j<n;j++){
                    if(j!=i){
                        p=p*nums[j];
                    }
                }
            res[i] =p;
        }
        return res;
    }
};
