class Solution {
public:
    bool isValid(string s) {
        vector<int>v;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') v.push_back(s[i]);
            if(s[i]==')'){
                if(v.empty() || v.back()!='(') return false;
                v.pop_back();
            }
            if(s[i]=='}'){
                if(v.empty() || v.back()!='{') return false;
                v.pop_back();
            }
            if(s[i]==']'){
                if(v.empty() || v.back()!='[') return false;
                v.pop_back();
            }
        }
        return v.empty();
    }
};
