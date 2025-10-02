class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     int n=mat.size();
     int deg =3;
     if(mat == target) return true;
     while(deg--){
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
      }
      for(int i=0;i<n;i++)
       reverse(mat[i].begin(),mat[i].end());

      if(mat==target) return true;
     }
     return false;
    }
};