class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int>lastindex(26,0);
        for(int i=0;i<n;i++){
            lastindex[s[i]-'a']=i;
        }
        vector<int> result;
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); ++i) {
              end = max(end, lastindex[s[i] - 'a']);
                if (i == end) {
                  result.push_back(end - start + 1);
                  start = i + 1;
                }

         }
         return result;
    }
};