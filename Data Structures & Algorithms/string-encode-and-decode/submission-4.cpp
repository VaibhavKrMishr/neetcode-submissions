class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        int n =strs.size();
        for(int i=0;i<n;i++){
            s+=strs[i];
            s+="_";
            s+="?";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> str;
        cout<<s;
        string s2="";
        for (int i=0;i<s.length();i++){
            if(s[i]=='_' && s[i+1]=='?'){
                str.push_back(s2);
                s2="";
                i++;
            }else{
                s2+=s[i];
            }
        }
        return str;
    }
};
