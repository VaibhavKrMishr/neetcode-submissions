class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int x=m+n;

        vector<int>merged_arr(x);
        merge(nums1.begin(), nums1.end(), nums2.begin(),nums2.end(), merged_arr.begin());
        

        // if x is odd x+1/2
        // else ((x/2)+(x/2 +1))/2

        if(x%2!=0){
            return merged_arr[x/2];
        }else{
            // int m1=merged_arr[x/2];
            // int m2=merged_arr[x/2 - 1];
            return (merged_arr[x/2] + merged_arr[x/2 - 1]) /2.0;
        }
    }
};