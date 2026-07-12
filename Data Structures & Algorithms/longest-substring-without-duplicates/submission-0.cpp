class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>seen;
        int length=0;
        int start=0;

        for(int i=0;i<s.length();i++){
            if(seen.find(s[i])!=seen.end()){
                if(seen[s[i]]>=start){
                    start = seen[s[i]]+1;
                }
            }
            seen[s[i]]=i;
            if (i - start + 1 > length) {
                length= i - start + 1;
            }
        }
        return length;

    }
};


