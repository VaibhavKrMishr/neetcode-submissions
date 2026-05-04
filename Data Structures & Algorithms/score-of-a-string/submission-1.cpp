class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++){
            int val = int(s[i])-int(s[i+1]);
            if(val<0){
                val = val*(-1);
            }
            score+=val;
        }
        return score;
    }
};