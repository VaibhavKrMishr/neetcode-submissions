class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
        for (char &c : s) {
            c =tolower(c);
        }
        bool ans=true;
        int size = s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[size]){
                cout<<"s[i]"<<s[i]<<endl;
                cout<<"s[size]"<<s[size];
                return ans=false;
            }
            // temp= s[size];
            // s[size]=s[i];
            // s[i]=temp;
            size--;
        }
        return ans;
    }
};
