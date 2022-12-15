class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans="";
        priority_queue<pair<int,char>>pq;
        pq.push({a,'a'}); pq.push({b,'b'}); pq.push({c,'c'});
        while(pq.size()>1)                                                          //check
        {
            int a=pq.top().first;
            char c1=pq.top().second;  pq.pop();
            int b=pq.top().first;
            char c2=pq.top().second;  pq.pop();
            if(a!=0 and b!=0)
            {
                if(a>b)
                {
                    ans+=c1;
                    ans+=c1;
                    ans+=c2;
                    a-=2;
                    b-=1;
                }
                else if(b>a)
                {
                    ans+=c2;
                    ans+=c2;
                    ans+=c1;
                    b-=2;
                    a-=1;
                }
                else 
                {
                    ans+=c2;
                    ans+=c1;
                    b--;a--;
                }
            }
            if(a!=0)  pq.push({a,c1});
            if(b!=0)  pq.push({b,c2});
        }
       // int len=ans.length();
        if(pq.size() and ans.back()!=pq.top().second)
        {
            if(pq.top().first >=2)
            {
                ans+=pq.top().second;
                ans+=pq.top().second;
            }
            else if(pq.top().first==1)
            {
                ans+=pq.top().second;
            }
        }
        
        cout<<ans<<endl;
        return ans;
    }
};