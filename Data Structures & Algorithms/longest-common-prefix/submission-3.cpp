class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs[0].size();i++){
            char curr=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i == strs[j].size() || curr!= strs[j][i]){
                    return str;
                }
            }
            str+=strs[0][i];
        }
        return str;  
    }
};