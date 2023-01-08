class Solution {
public:
//     int maxPoints(vector<vector<int>>& points) {
       
//     }
   int maxPoints(vector<vector<int>>& p) {
        int n = p.size() ;
        if(n<=2){
            return n ;
        }
        int maximum = 2 , i , j , k ;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int total = 2;
                for(k=0;k<n;k++)
                {
                    if(k!=i && k!=j)
                    {
                        // y2-y1/x2-x1 if Slope  are equal
                        if( (p[j][1]-p[i][1])*(p[i][0]-p[k][0]) == (p[i][1]-p[k][1])*(p[j][0]-p[i][0]) ){
                            total++ ; 
                        }
                    }
                }
                maximum = max(maximum,total) ;
            }
        }
        return maximum ;
    }
   
};