class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int n= nums.size();
        int a=0;
        int d=n-1;
        while(a<=d){
        // for(int i=0;i<n;i++){

        //     for(int j=n;j>0;j--){
                int b=a+1;
                int c=d-1;
                while(b<c){
                    long long sum = (long long)nums[a] + nums[d] + nums[c] + nums[b];

                    if(sum==target){
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});

                        while (b < c && nums[b] == nums[b + 1]) b++;
                        while (b < c && nums[c] == nums[c - 1]) c--;
                        
                        b++;
                        c--;
                    }
                    else if(sum<target){b++;}
                    else c--;
                }
                while (d > a + 2 && nums[d] == nums[d - 1]) d--;
                d--;
                if (d <= a + 2) { 
                    while (a < n - 3 && nums[a] == nums[a + 1]) a++;

                    a++;       
                    d = n - 1; 
                }
           // }
        //}
        }
        return ans;
    }
};