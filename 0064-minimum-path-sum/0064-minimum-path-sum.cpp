class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>dp(m,1e6);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    dp[j]=dp[j]+grid[i][j];
                }
                else{
                    dp[j]=min(dp[j]+grid[i][j],dp[j-1]+grid[i][j]);
                }
            }
        }
        return dp[m-1];
    }
};