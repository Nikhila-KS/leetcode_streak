class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        // vector<int> difflevel(10,0);
        // for(int i=0;i<tasks.size();i++){
        //     difflevel[tasks[i]]+=1;
        // }
        // int count=0;
        // bool isbefore=false;
        // int isbeforenum=0;
        // for(int i=0;i<difflevel.size();i++){
        //     if(difflevel[i]%3==0 && difflevel[i]>0){
        //         count=count+(difflevel[i]/3);
        //         difflevel[i]=0;
        //     }else if(difflevel[i]/3 >0 && difflevel[i]>0){
        //         count=count+floor(difflevel[i]/3);
        //         difflevel[i]=difflevel[i]%3;
        //         if(isbefore){
        //             count++;
        //             difflevel[i]=difflevel[i]-1;
        //             isbeforenum--;
        //             isbefore=(difflevel[i] || isbeforenum);
        //         }
        //     }else{
        //         if(isbefore){
        //             count++;
        //             difflevel[i]=difflevel[i]-1;
        //             isbeforenum--;
        //             isbefore=(difflevel[i] || isbeforenum);
        //             if((difflevel[i]!=0)&&(isbefore==true)){
        //                 i--;
        //             }
        //         }else{
        //             isbefore=true;
        //             isbeforenum=difflevel[i];
        //         }
        //     }
        // }
        // if(isbefore==false){
        //     return count;
        // }else{
        //     return -1;
        // }
        
          unordered_map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        int output=0;
        
        for (auto freq : mp){
            if(freq.second==1)
                return -1;
            if(freq.second%3==0){
                output += freq.second/3;
            }
            else{
                output += freq.second/3 + 1;
            }
        }
        return output;
        
    }
};