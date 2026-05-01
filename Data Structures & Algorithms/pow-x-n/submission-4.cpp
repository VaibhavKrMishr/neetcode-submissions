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
            cout<<"n"<<n<<endl;
            cout<<"x"<<x<<endl;
            for(int i=0;n<i-1;i--){
                cout<<"i "<<i<<endl;
                x1=x1*x;
                cout<<x1<<endl;
                }
                x1=1/x1;
        }
        return x1;
    }
};
