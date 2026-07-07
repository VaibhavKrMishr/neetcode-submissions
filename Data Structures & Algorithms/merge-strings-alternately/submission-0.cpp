class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s2;
        int i=0; int j=0;
        while(i<word1.length() && j<word2.length()){
            s2+=word1[i++];
            s2+=word2[j++];
            // i++;j++;
        }
        while(i<word1.length()) s2+=word1[i++];//i++;
        while(j<word2.length()) s2+=word2[j++];//j++;
        return s2;
    }
};