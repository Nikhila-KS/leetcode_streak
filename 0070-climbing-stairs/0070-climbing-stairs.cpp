class Solution {
public:
    int climbStairs(int n) {
        int arr[46];
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
        arr[3]=3;
        int i=4;
        while(i<n+1){
            arr[i]=arr[i-2]+arr[i-1];
            i++;
        }
        return arr[n];
    }
};