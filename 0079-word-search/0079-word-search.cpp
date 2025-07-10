class Solution {
public:
    
    bool exist(vector<vector<char>>& board, string word) {
    vector<int>s;
    int n=board.size();
    int m =board[0].size();
   vector<vector<bool>> vis(n, vector<bool>(m, false));
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++)
       {
        if(board[i][j]==word.at(0))
         {
          bool ans =search(board,i,j,word,0,vis);
          if(ans) return true;
         }
     }
   }
   return false;
 }

 bool search(vector<vector<char>>& board,int row,int col,string word,int index, vector<vector<bool>>&vis)
 {
    if(index==word.length()){
        return true;
    }
    if(row>=board.size()||row<0||col<0||col>=board[0].size()||board[row][col]!=word[index]||vis[row][col]){
        return false;
    }
    vis[row][col]=true;
    bool opt1=search(board,row+1,col,word,index+1,vis);
    bool opt2=search(board,row-1,col,word,index+1,vis);
    bool opt3=search(board,row,col+1,word,index+1,vis);
    bool opt4=search(board,row,col-1,word,index+1,vis);
    vis[row][col]=false;


 return opt1||opt2||opt3||opt4;
 }

};