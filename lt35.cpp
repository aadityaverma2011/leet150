class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nj= matrix[0].size();
        int ni= matrix.size();
        vector<int>result;
        if(nj==1){
            for(int i=0 ;i<ni;i++){
                result.push_back(matrix[i][0]);
            }
            return result;
        }
        if(ni==1){
            for(int j=0 ; j<nj;j++){
                result.push_back(matrix[0][j]);

            }
            return result;
        }
        for(int j=0;j<nj-1;j++){
                result.push_back(matrix[0][j]);
        }     
        for(int i=0 ; i< ni ;i++){
            result.push_back(matrix[i][nj-1]);
        }
        int i=ni-1;
        int j= nj-2;
        while(j>0){
            result.push_back(matrix[i][j]);
            j--;
        }       
        for(i;i>0;i--){
            result.push_back(matrix[i][0]);
        } 

        i=1;
        j=1;
        while(i<ni-1){
            if(j==nj-2){
                if(i+1==ni-1){
                    result.push_back(matrix[i][j]);
                    return result;
                }
                else{
                    i++;
                    while(j!=1){
                        result.push_back(matrix[i][j]);
                        j--;
                    }
                    if(i+1!=ni-1){
                        i++;
                    }
                    else{
                        return result;
                    }
                    
                }
            }
            else{
                result.push_back(matrix[i][j]);
                j++;
            }
        }
        return result;


    }
};