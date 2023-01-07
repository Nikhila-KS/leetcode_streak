class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // try once more !!
        int tc=0,tg=0;
        for(int i=0;i<gas.size();i++)
        {
            tc+=cost[i];
            tg+=gas[i];
        }  
        if (tc>tg)return -1;

        int ans=-1;
        int gasbalance=0;
        for(int i=0;i<gas.size();i++)
        {
            gasbalance+=gas[i]-cost[i];
            if (gasbalance>=0 && ans==-1)
            {
                ans=i;
            }
            else if (gasbalance<0)
            {
                gasbalance=0;
                ans=-1;
            }
        } 
        return ans;
        
    }
};