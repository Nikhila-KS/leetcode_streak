class Solution {
public:
    // int findMaxLength(vector<int>& nums) {
    //     int max_size=0;
    //     int curr_size=0;
    //     int c1=0,c0=0;
    //     vector<int> ans;
    //     for(int i=0;i<nums.size();i++){
    //         // if(nums[i]==1 && (c1-c0<=1)){
    //         //     if(i==nums.size()-1 && c1==c0){
    //         //         continue;
    //         //     }
    //         //     ans.push_back(nums[i]);
    //         //     curr_size++;
    //         //     c1++;
    //         // }
    //         // else if(nums[i]==0 && (c0-c1<=1)){
    //         //     if(i==nums.size()-1 && c1==c0){
    //         //         continue;
    //         //     }
    //         //     ans.push_back(nums[i]);
    //         //     curr_size++;
    //         //     c0++;
    //         // }
    //         // else{
    //         //     if(max_size<curr_size){
    //         //         max_size=curr_size;
    //         //     }
    //         //     curr_size=0;
    //         //     c1=0,c0=0;
    //         //     ans.clear();
    //         // }
    //         if(nums[i]==1){
    //             c1++;
    //         }
    //         else if(nums[i]==0){
    //             c0++;
    //         }
    //     }
    //     // if(max_size<curr_size && (c1==c0)){
    //     //             max_size=curr_size;
    //     // }
    //     if(c0==c1){
    //         max_size=2*c0;
    //     }
    //     else if(c0-c1<=1 && c0-c1>=-1){
    //         max_size=c1+c0-1;
    //     }
    //     else{
    //         max_size= c1>c0?((2*c0)):((2*c1));
    //     }
    //     return max_size;
    // }
    
    
    
    int findMaxLength(vector<int>& nums) {

       unordered_map <int ,int> mp; 

       for(int i=0; i<nums.size(); i++){
           if(nums[i] == 0){
               nums[i] = -1;
           }
       }

       int sum = 0 , res = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(sum == 0){
                res = max(res , i+1);
            }

            if(mp.find(sum) != mp.end()){
                res = max(res , i - mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        return res;
    }
};