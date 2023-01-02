class Solution {
public:
    bool detectCapitalUse(string word) {
        // bool flag=0;
        // bool flag2=0;
        // if(word[0]>='A'&&word[0]<='Z'){
        //             flag=1;
        // }
        // int i=1;
        // for(i=1;i<word.size();i++){
        //     if(word[i]>='A'&&word[i]<='Z'){
        //         flag2=1;
        //     }else{
        //         if(flag2==1){
        //             return false;
        //         }
        //     }
        //     if(flag==0 && flag2==1){
        //         return false;
        //     }
        // }
        // if((word[i-1]>='A'&&word[i-1]<='Z')&& flag2==0){
        //     return false;
        // }
        // if(flag==0 && flag2==1){
        //     return false;
        // }
        // return true;
        int count=0;

        if(word.length()==1){
            return true;
        }

        for(auto ch:word){
            if(ch-'A'>=0 && ch-'A'<=25){
                count++;
            }
        }

        if(count==word.length() or count==0){
            return true;
        }
        else if(count==1 && word[0]-'A'>=0 && word[0]-'A'<=25){
            return true;
        }
        else{
            return false;
        }
    }
};