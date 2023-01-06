class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         int count=0;
        int total=0;
        sort(costs.begin(),costs.end());
        for(int i=0; i<costs.size();i++)
        {
            if(total+costs[i] <= coins )
            {
                count++;
                total+=costs[i];
            }
            else
            {
                return count;
            }
        }
        return count;
    }
};