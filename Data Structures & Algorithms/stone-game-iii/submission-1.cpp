class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        vector<int> dp(n + 1, 0);
        
        for (int i = n - 1; i >= 0; --i) {
            int max_diff = INT_MIN;
            int current_stones = 0;
            
            for (int X = 1; X <= 3 && i + X <= n; ++X) {
                current_stones += stoneValue[i + X - 1];
                max_diff = max(max_diff, current_stones - dp[i + X]);
            }
            
            dp[i] = max_diff;
        }
    
        if (dp[0] > 0) return "Alice";
        if (dp[0] < 0) return "Bob";
        return "Tie";
    }
};