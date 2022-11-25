// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         vector<char> ss;
//         vector<char> tt;
//         for(int i=0;i<s.size();i++){
//             if(ss.size()==0 && s[i]=='#'){
//                 continue;
//             }
//             if(s[i]=='#'){
//                 ss.pop_back();
//                 continue;
//             }                                                  //approach 1- my approach
//             ss.push_back(s[i]);
//         }
//         for(int i=0;i<t.size();i++){
//             if(tt.size()==0 && t[i]=='#'){
//                 continue;
//             }
//             if(t[i]=='#'){
//                 tt.pop_back();
//                 continue;
//             }
//             tt.push_back(t[i]);
//         }
//         while(tt.size()!=0 && ss.size()!=0){
//             if(tt.back()!=ss.back()){
//                 return false;
//             }
//             tt.pop_back();
//             ss.pop_back();
//         }
//         if(tt.size()!=0 || ss.size()!=0){
//             return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st,sts;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]=='#'){
                st.pop();   
            }                                             //approach 2
            else if(s[i]!='#') st.push(s[i]);
        }
        
        
        for(int i=0;i<t.length();i++){
            if(!sts.empty() && t[i]=='#' ){
                sts.pop();
            }
            else if(t[i]!='#') sts.push(t[i]);
        }
        
        if(sts==st) return true;
        return false;
        
    }
};