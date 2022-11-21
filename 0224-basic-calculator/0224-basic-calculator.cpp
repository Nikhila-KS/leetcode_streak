class Solution {
public:
    int calculate(string s) {
        stack<int> nums;
        int ans=0;
        long long currval=0,sign=1;
        for(char c:s){
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

//   stack<int> nums; 
//         int answer=0; 
//         long long current_val=0, sign=1; 
       
        
//      for (char c : s) { 
//             if (isdigit(c)) {
//          current_val=10*current_val + c-'0'; 
//             }else if(c=='+'){
//                 answer+=current_val*sign; 
//                 current_val=0;
//                 sign=1;   
//             }else if(c=='-'){
//                 answer+=current_val*sign; 
//                 current_val=0; 
//                 sign=-1; 
//             }else if(c=='('){
//                 nums.push(answer);    
//                 nums.push(sign); 
//                 answer=0; 
//                 sign=1;
//             }else if(c==')' ){ 
//                 answer+=current_val*sign; 
//                 current_val=0;
                
//                 answer = answer*nums.top();
//                 nums.pop();
//                 answer= answer+nums.top();
//                 nums.pop();
//             }
//         }
//         answer+=current_val*sign; 
//         return answer; 