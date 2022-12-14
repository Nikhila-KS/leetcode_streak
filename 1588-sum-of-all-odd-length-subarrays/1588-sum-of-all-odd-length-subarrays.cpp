class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int start=0,end=0,total=0,odd=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            start=arr.size()-i;
            end=i+1;
            total=start*end;
            odd=(total+1)/2;                   //approach 1
            sum=sum+(odd*arr[i]);
        }
        return sum;
    }
};


//approach 2 - same as above but done in a more efficient way

// class Solution {         
// public:
//     int sumOddLengthSubarrays(vector<int>& arr) {
//         int ans = 0,n=arr.size(),i;
//         for(i =0;i<n;i++)
// 		{
//             int contribution = ceil((i+1)*(n-i)/2.0);
//             ans+=(contribution*arr[i]);
//         }
//         return ans;
//     }
// };


// ref video - https://www.youtube.com/watch?v=J5IIH35EBVE