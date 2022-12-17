class Solution {
public:
//     int search(vector<int>& nums, int target) {
        
//     }
    int search(vector<int>& arr, int k) {
      int low=0,hi=arr.size()-1;
    int l=-1,f=-1;
    int n=arr.size();
    while(low<=hi){
        int mid=low+(hi-low)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]>=arr[low]){
           if(k>=arr[low] && k<arr[mid]) hi=mid-1;
            else low=mid+1;
        }else{
            if(k>arr[mid] &&  k<=arr[hi]){
                low=mid+1;
            }else hi=mid-1;
        }
        
    }
        return -1;
    }
};