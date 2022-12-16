class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>> res;
        int n = v.size();
        sort(v.begin(),v.end());
        int i =0;
        while(i<n-2){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int s = v[j] + v[k] + v[i];
                if(s==0){
                    res.push_back({v[i],v[j],v[k]});
                    j++;
                    //****** TO AVOID DUPLICATE ******//
                    while(j<n && v[j-1]==v[j])
                        j++;
                    //********************************//
                }else if(s<0){
                    j++;
                }else{
                    k--;
                }
            }
            i++;
            //*****TO AVOID DUPLICATE ********//
            while(i<n && v[i-1]==v[i])
                i++;
            //********************************//
        }
        return res;
    }
};