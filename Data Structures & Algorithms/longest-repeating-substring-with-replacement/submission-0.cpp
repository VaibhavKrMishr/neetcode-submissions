class Solution {
public:
    int characterReplacement(string s, int k) {
           vector<int>freq(26,0);
            int left=0;
            int max_freq=0;
            int max_len=0;

           for(int i=0;i<s.length();i++){
            int idx=s[i] - 'A';
            freq[idx]++;

            max_freq=max(max_freq, freq[idx]);

            while((i-left+1)-max_freq >k){
                int left_idx = s[left]-'A';
                freq[left_idx]--;

                left++;
            }
            max_len=max(max_len,i-left+1);
           }
        return max_len;
    }
};
