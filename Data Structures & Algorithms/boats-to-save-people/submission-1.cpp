class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();

        int i=n-1;
        int j=0;
        int count=0;
        while(j<=i){
            if(people[i]+people[j]<=limit){
                j++;
            }
            count++;
            i--;
        }
        return count;
    }
};