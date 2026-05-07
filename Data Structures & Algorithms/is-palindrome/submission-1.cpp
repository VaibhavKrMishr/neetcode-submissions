class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
        bool ans=true;
        int size = (int)s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            if(tolower((unsigned char)s[i]) != tolower((unsigned char)s[size])){
                return false; 
            }
            size--;
        }
        return ans;
    }
};
