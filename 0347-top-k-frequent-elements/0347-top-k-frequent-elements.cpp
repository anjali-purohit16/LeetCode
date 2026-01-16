class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
         for(int num: nums) mpp[num]++;

         priority_queue<pair<int,int>>pq;
         for(auto& it :mpp)
           pq.push({it.second ,it.first}); //frequency, number
        
        vector<int>result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};