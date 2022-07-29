class Solution {
    public:
    
//     bool isSafe( int col , int row , vector<string>& board , int n){
//      int    duprow=row;
//        int  dupcol=col;
        
//         while(col>=0 && row>=0){
//             if(board[row][col]=='Q')return false;
//             row--;
//             col--;
//         }
        
//        row=duprow;
//         col=dupcol;
//         while(col>=0){
//              if(board[row][col]=='Q')return false;
//             col--;
//         }
        
//         row=duprow;
//         col=dupcol;
        
//         while(col>=0 && row<n){
//              if(board[row][col]=='Q')return false;
//             col--;
//             row++;
//         }
        
//         return true;
        
//     }
    
    void slove( int col , vector<string>&board , vector<vector<string>>&ans , int n, vector<int>&siderow , vector<int>&updig , vector<int>&lowdig ){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0 ; row<n ; row++){
            // if( isSafe(col , row , board , n))
            
            if( siderow[row]==0 && updig[row+col]==0  && lowdig[(n-1) + (col-row)]==0){
                board[row][col]='Q';
                siderow[row]=1;
                updig[row+col]=1;
                lowdig[n-1+col-row]=1;
                slove(col+1 , board , ans , n , siderow , updig , lowdig);
                board[row][col]='.';
                siderow[row]=0;
                updig[row+col]=0;
                lowdig[n-1+col-row]=0;
            }
            
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        vector<int>siderow(n,0) ;
        vector<int>updig( 2 * n -1  , 0);
        vector<int>lowdig(2 * n -1 , 0);
        
         string s(n , '.');
        
        for(int i =0 ; i<n ; i++){
            board[i]=s;
        }
        
        slove(0, board , ans , n , siderow , updig , lowdig);
        return ans;
    }
};