class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        sort(edges.begin(),edges.end());
        int i=0,b=0,c=0;
        vector<int>a(n,0);
        for(i=edges.size()-1;i>=0;i--)
        {
            b=0,c=0;
            if(hasApple[edges[i][1]]==true || a[edges[i][1]]!=0)
                b=2+a[edges[i][1]];
            if(hasApple[edges[i][0]]==true || a[edges[i][0]]!=0)
                c=2+a[edges[i][0]];
            a[edges[i][0]]+=b;
            a[edges[i][1]]+=c;
        }
        return a[0];
    }
};