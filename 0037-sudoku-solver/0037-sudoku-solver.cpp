class Solution {
public:
    bool ans=false;
    void solveSudoku(vector<vector<char>>& board) {
        solve(0,0,board);
    }
    void solve(int row,int col, vector<vector<char>>& grid){
        if(row==grid.size()){
            ans=true;
            return;
        }
        int next_row =(col==8)?row+1:row;
        int next_col =(col==8)?0:col+1;
    
    if(grid[row][col]!='.')
        solve(next_row ,next_col ,grid);
    else{
        for(char i='1';i<='9';i++){
            if(isPossible(row,col,i,grid))
            {
                grid[row][col]=i;
                solve(next_row,next_col,grid);
                 if(ans)return;
                     grid[row][col]='.'; //backtrack
            }
        }
    }
 }
 bool isPossible(int row ,int col,char num,vector<vector<char>>&grid){
    //check column
    for(int i=0;i<9;i++){
        if(grid[i][col]==num) return false;
    }

    //check row
    for(int i=0;i<9;i++){
        if(grid[row][i]==num)return false;
    }

    //check 3*3 box
    int x=(row/3)*3;
    int y=(col/3)*3;
    for(int i=x;i<x+3;i++)
   { for(int j=y;j<y+3;j++){
        if(grid[i][j]==num)
            return false;
   }
   }
   return true;
 }
};