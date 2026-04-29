class Solution {
public:
    bool isAnagram(string s, string t) {
         
            for(int i=0; i<s.size();i++){
                for (int j = 0; j < s.size() - i - 1; j++) {
                    if (s[j] > s[j + 1])
                        swap(s[j], s[j + 1]);
                    if (t[j] > t[j + 1])
                        swap(t[j], t[j + 1]);
                }
            }

            return s==t;
         
    }
};
