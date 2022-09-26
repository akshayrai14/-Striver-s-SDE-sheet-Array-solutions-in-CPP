class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c=1;int r=matrix.size();int cc=matrix[0].size();
        for(int i=0;i<r;i++){
            if(matrix[i][0]==0){c=0;}
            for(int j=1;j<cc;j++){
                if(matrix[i][j]==0 ){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            for(int j=cc-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(c==0){matrix[i][0]=0;}
        }
    }
};