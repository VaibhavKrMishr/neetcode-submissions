class Solution {
public:
    double myPow(double x, int n) {
        double x1=x;
        if(n==0) return x1=1;
        if(n>0){
            for(int i=0;i<n-1;i++){
                x1=x1*x;
            }
        }else{

            for(int i=0;n<i-1;i--){
                x1=x1*x;
                }
                x1=1/x1;
        }
        return x1;
    }
};
