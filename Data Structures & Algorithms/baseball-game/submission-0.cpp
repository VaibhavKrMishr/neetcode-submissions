class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                v.pop_back();
            }
            else if(operations[i]=="D"){
                int x=v[v.size()-1];
                v.push_back(x*2);
            }
            else if(operations[i]=="+"){
                int x=v[v.size()-1];
                int y=v[v.size()-2];
                v.push_back(x+y);
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        int ans=accumulate(v.begin(),v.end(),0);
        return ans;
    }
};