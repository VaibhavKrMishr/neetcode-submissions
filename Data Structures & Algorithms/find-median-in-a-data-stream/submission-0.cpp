class MedianFinder {
private:
    vector<int>mf;
public:
    MedianFinder() {}
    
    void addNum(int num) {
        auto it = std::lower_bound(mf.begin(), mf.end(), num);
        mf.insert(it, num);
    }
    
    double findMedian() {
        //int n=mf.size();
        if(mf.size()%2!=0){
            return float(mf[mf.size()/2]);
        }
        else{
            return (mf[mf.size()/2]+ mf[mf.size()/2 -1])/2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */