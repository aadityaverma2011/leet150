class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool breakoutoftheloop =false;
        map<int,int>rowmap;
        map<int,int>backup;
        map<int,int>column0;       
        map<int,int>column1;
        map<int,int>column2;
        map<int,int>column3;
        map<int,int>column4;
        map<int,int>column5;
        map<int,int>column6;
        map<int,int>column7;
        map<int,int>column8;
        map<int,int>grid0;
        map<int,int>grid1;
        map<int,int>grid2;
        map<int,int>grid3;
        map<int,int>grid4;
        map<int,int>grid5;
        map<int,int>grid6;
        map<int,int>grid7;
        map<int,int>grid8;
        backup=rowmap;
        for(int i=0 ; i<9 ; i++){
            for(int j=0; j<9 ; j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(rowmap[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==0 && column0[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==1 && column1[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==2 && column2[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==3 && column3[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==4 &&  column4[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==5 && column5[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==6 && column6[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==7 && column7[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(j==8 && column8[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i<=2 && j<=2 && grid0[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>2 && i<=5 && j<=2 && grid1[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>5 && i<=8 && j<=2 && grid2[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i<=2 && j>2 && j<=5 && grid3[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>2 && i<=5 && j>2 && j<=5 && grid4[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>5 && i<=8 && j>2 && j<=5 && grid5[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i<=2 && j>5 && j<=8 && grid6[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>2 && i<=5 && j>5 && j<=8 && grid7[board[i][j]]>0){breakoutoftheloop=true;break;}
                if(i>5 && i<=8 && j>5 && j<=8 && grid8[board[i][j]]>0){breakoutoftheloop=true;break;}
                rowmap[board[i][j]]++;
                if(j==0){column0[board[i][j]]++;}
                if(j==1){column1[board[i][j]]++;}
                if(j==2){column2[board[i][j]]++;}
                if(j==3){column3[board[i][j]]++;}
                if(j==4){column4[board[i][j]]++;}
                if(j==5){column5[board[i][j]]++;}
                if(j==6){column6[board[i][j]]++;}
                if(j==7){column7[board[i][j]]++;}
                if(j==8){column8[board[i][j]]++;}
                if(i<=2 && j<=2 ){grid0[board[i][j]]++;}
                if(i>2 && i<=5 && j<=2 ){grid1[board[i][j]]++;}
                if(i>5 && i<=8 && j<=2 ){grid2[board[i][j]]++;}
                if(i<=2 && j>2 && j<=5 ){grid3[board[i][j]]++;}
                if(i>2 && i<=5 && j>2 && j<=5 ){grid4[board[i][j]]++;}
                if(i>5 && i<=8 && j>2 && j<=5 ){grid5[board[i][j]]++;}
                if(i<=2 && j>5 && j<=8 ){grid6[board[i][j]]++;}
                if(i>2 && i<=5 && j>5 && j<=8 ){grid7[board[i][j]]++;}
                if(i>5 && i<=8 && j>5 && j<=8 ){grid8[board[i][j]]++;}
            }
            rowmap=backup;
            if(breakoutoftheloop==true){
                return false;
            }

        }

        return true;
    }
};