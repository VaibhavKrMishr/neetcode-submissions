class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0;
        int r = n - 1;
        int cap=0;
        while(l<r){
            int area = min(heights[l] , heights[r]) * (r-l);
            cout<<heights[l]<<" " << heights[r]<<endl;
            cout<<area<<endl;
            cout<<endl;
            cap =max(cap, area);
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return cap;
    }
};
