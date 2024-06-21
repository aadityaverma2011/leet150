class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int ni=board.size();
        int nj=board[0].size();
        int livingcount=0;
        vector<vector<int>> board2;
        board2=board;
        for(int i=0;i<ni;i++){
            for(int j=0;j<nj;j++){
                if(i-1>=0){
                    //top element check
                    if(board2[i-1][j]==1){
                        livingcount++;
                    }
                    if(j-1>=0){
                        //top left elementcheck
                        if(board2[i-1][j-1]==1){
                            livingcount++;
                        }
                    }
                    if(j+1<=nj-1){
                        //top right element check
                        if(board2[i-1][j+1]==1){
                            livingcount++;
                        }
                    }
                }
                if(i+1<=ni-1){
                    //bottom element check
                    if(board2[i+1][j]==1){
                        livingcount++;
                    }
                    if(j-1>=0){
                    //bottom left element check
                        if(board2[i+1][j-1]==1){
                            livingcount++;
                        }
                    }
                    if(j+1<=nj-1){
                        //bottom right element check
                        if(board2[i+1][j+1]==1){
                            livingcount++;
                        }
                    }

                }
                if(j-1>=0){
                    //left element check
                    if(board2[i][j-1]==1){
                        livingcount++;
                    }
                }
                if(j+1<=nj-1){
                    //right element check
                    if(board2[i][j+1]==1){
                        livingcount++;
                    }
                }
                if(livingcount<2){
                    board[i][j]=0;
                }
                else if(livingcount>3){
                    board[i][j]=0;
                }
                else if(board[i][j]==0 && livingcount>=3){
                    board[i][j]=1;
                }
               
                

                livingcount=0;
            }
        }
    }
};