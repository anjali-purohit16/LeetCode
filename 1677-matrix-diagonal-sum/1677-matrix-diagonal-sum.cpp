class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size()-1;
        for(int i=0;i<=n;i++){
          for(int j=0;j<=n;j++){
            if(i==j || j==n-i){
                sum+=mat[i][j];
            }
          }
        }
        return sum;
    }
};