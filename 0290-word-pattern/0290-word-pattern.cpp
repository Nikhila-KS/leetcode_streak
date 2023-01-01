class Solution {
public:
//     bool wordPattern(string pattern, string s) {
//         vector<string> res(26,"");
//         int k=0;
//         string temp="";
//         for(int i=0;i<s.size();i++){
//             if(s[i]!=' '){
//                 temp=temp+s[i];
//             }
//             if(s[i]==' '){
//                 int j=s[k++]-'a';
//                 if(res[j]==""){
//                     res[j]=temp;
//                 }else{
//                     string g= res[j];
//                     if(g==temp){
//                         continue;
//                     }else{
//                         return false;
//                     }
//                 }
//                 temp="";
//             }
            
//         }
//         return true;
//     }
    bool wordPattern(string p, string s) {
        unordered_map<char,string>mp;
        set<string>st;
        vector<string>v;
/*
entire stuff is just to make the words in the strings
seprate and store into the vector so that we could track..
with the help of indexes 
*/
        int i=0;
        string temp="";
        while(i<s.size()){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
            i++;
        }
     v.push_back(temp);

     if(v.size()!=p.size()){return false;}

        for(int i =0;i<p.size();i++){
            if(mp.find(p[i])!=mp.end()){
                if(v[i]!=mp[p[i]]){return false;}
            }
            else{
                if(st.count(v[i])>0){return false;}
            mp[p[i]]=v[i];
            st.insert(v[i]);
            }
        }
        return true;
    }
};