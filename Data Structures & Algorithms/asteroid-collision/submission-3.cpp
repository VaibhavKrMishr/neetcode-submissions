class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                ans.push_back(asteroids[i]);
            }
            else if(asteroids[i]<0 && ans.empty()){
                ans.push_back(asteroids[i]);
            }
            else{
                int x=ans.back();
                ans.pop_back();
                // cout<<x<<endl;
                if(x<0  && asteroids[i]<0){
                    ans.push_back(x);
                    ans.push_back(asteroids[i]);
                }
                else if(abs(x)==abs(asteroids[i])) {
                    continue;
                    }
                else if (abs(x) > abs(asteroids[i])){
                    ans.push_back(x);
                    }
                else i--;
            }
        }
        return ans;
    }
};