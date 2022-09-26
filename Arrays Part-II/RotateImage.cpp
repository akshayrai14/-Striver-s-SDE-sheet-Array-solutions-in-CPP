class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*int h=matrix.size()-1;
        int a;
        vector<vector<int>>v=matrix;
        for(int i=0;i<matrix.size();i++){
            a=h-i;
            for(int j=0;j<matrix[i].size();j++){
                matrix[i][j]=v[i+a][i];//math function i derived
                a--;
            }
        }*/
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};