class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        if(x==1 || x==2) return ans=1;
        for(int i=0;i<x;i++){
            long long int z =(long long int)i*i;
            if(z==x){
                ans=i;
                break;
            }
            if(z>x){
                ans=i-1;
                break;
            }
        }
        return ans;
    }

};