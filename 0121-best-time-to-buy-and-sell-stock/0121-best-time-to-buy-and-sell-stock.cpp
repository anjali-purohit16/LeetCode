class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        int mini=prices[0];
        for(int i=0;i<n;i++){
            int cost =prices[i]-mini;
            maxi=max(cost,maxi);
            mini=min(prices[i],mini);
        }
        return maxi;
    }
};