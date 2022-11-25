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
        int k=0,p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                k--;
                 k=max(0,k);
            }
            
           else
           {
               s[k]=s[i];
               k++;
           }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                p--;
                 p=max(0,p);
            }
            
           else
           {
               t[p]=t[i];
               p++;
           }
        }
        if(k!=p)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
        
    }
};