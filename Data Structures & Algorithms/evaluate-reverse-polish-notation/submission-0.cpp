class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stk;
        for (const string& t : tokens) {
            
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int right = stk.back(); stk.pop_back();
                int left = stk.back(); stk.pop_back();

                if (t == "+") {
                    stk.push_back(left + right);
                }else if (t == "-") {
                    stk.push_back(left - right);
                }else if (t == "*") {
                    stk.push_back(left * right);
                }else if (t == "/") {
                    stk.push_back(left / right); }

            } 
            else {
                stk.push_back(stoi(t));
            }
        }
        return stk.back();
    }
};