class Solution {
public:
        vector<vector<string>>ans;
        vector<vector<string>> solveNQueens(int n){
            vector<vector<int>> grid(n,vector<int>(n,0));
            solve(grid,0);
            return ans;
        }
    void addAns(vector<vector<int>>&grid){
        vector<string>ls;
        for(int i=0;i<grid.size();i++){
            string curr ="";
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==0){
                    curr+=".";
                }
                else{
                    curr+="Q";
                }
            }
            ls.push_back(curr);
        }
        ans.push_back(ls);
    }

    void solve(vector<vector<int>>& grid,int row)
    {
     //base case
        if(grid.size()==row){
        addAns(grid);
        return;
       }
     for(int j=0;j<grid.size();j++)
     {
         if(ispossible(row,j,grid)){
         grid[row][j]=1;
         solve(grid,row+1);
         //backtrack
         grid[row][j]=0;
        }
      }
    }

    bool ispossible(int row,int col ,vector<vector<int>>& grid){
        int x=row;
        int y=col;
        while(x>=0){
            if(grid[x--][y]==1)return false;
        }
        x=row;
        y=col;
        while(x >= 0 && y >= 0){
            if(grid[x--][y--]==1)return  false;
        }

       x=row;
        y=col;
        while(x >= 0 && y < grid.size()){
            if(grid[x--][y++]==1)return  false;
    }
    return true;
    }

    
};