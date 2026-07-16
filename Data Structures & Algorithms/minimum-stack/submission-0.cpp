class MinStack {
private:
    vector<int> v;     
    vector<int> min_v;
public:
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        int min_val = *min_element(v.begin(), v.end());
        return min_val;
    }
};
