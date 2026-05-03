class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> my_set(nums.begin(), nums.end());
        int count=1;
        for(int x : my_set){
            if (x<=0) {
                continue;
            }else if(x==count) {
                count++;
            }else if(x>count) {
                return count;
                }
                
        }

        return count;
    }
};