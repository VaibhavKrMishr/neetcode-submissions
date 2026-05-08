class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int k=0;
        for(int x:s){
            nums[k++]=x;
        }
        return s.size();
    }
};