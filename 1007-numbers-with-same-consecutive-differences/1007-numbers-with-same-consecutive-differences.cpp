class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        queue<int>q;
        for(int i=1;i<=9;i++){
            q.push(i);
        }

        int len=1;
        while(!q.empty() && len<n){
            len++;
            int s=q.size();
            for(int i=0;i<s;i++){
                int currnum=q.front();
                q.pop();
                int last =currnum%10;
                if(last+k<=9) q.push(currnum*10+last+k);
                if(k!=0 && last-k>=0) q.push(currnum*10+last-k);
            }
        }
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
    return res;
    }
};