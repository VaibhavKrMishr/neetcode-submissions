class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int size = s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            temp= s[size];
            s[size]=s[i];
            s[i]=temp;
            size--;
        }
    }
};