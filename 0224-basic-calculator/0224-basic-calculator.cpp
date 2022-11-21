class Solution {
public:
    int calculate(string s) {
        stack<int> nums;
        int ans=0;
        long long currval=0,sign=1;
        for(char c:s){             // to iterate through each char in string
            if(isdigit(c)){
                currval=currval*10+(c-'0');
            }else if(c=='+'){
                ans=ans+(currval*sign);
                currval=0;
                sign=1;
            }else if(c=='-'){
                ans=ans+(currval*sign);
                currval=0;
                sign=-1;
            }else if(c=='('){
                nums.push(ans);
                nums.push(sign);
                ans=0;
                sign=1;
            }else if(c==')'){
                ans+=currval*sign;
                currval=0;
                ans=ans*nums.top();
                nums.pop();
                ans=ans+nums.top();
                nums.pop();
            }
        }
        ans+=currval*sign; 
        return ans; 
    }
};

