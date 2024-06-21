class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int ni=matrix.size();
        int nj=matrix[0].size();
        vector<int>columntrack;
        vector<int>rowtrack;
        for(int i=0 ; i<ni;i++){
            for(int j=0 ; j<nj;j++){
                if(matrix[i][j]==0){
                    rowtrack.push_back(i);
                    columntrack.push_back(j);
                }
            }
        }

        for(int i=0 ; i<columntrack.size();i++){
            for(int k=0 ; k<ni ; k++){
                matrix[k][columntrack[i]]=0;
            }
        }

        for(int i=0; i<rowtrack.size();i++){
            fill(matrix[rowtrack[i]].begin(),matrix[rowtrack[i]].end(),0);
        }
        
    }
};