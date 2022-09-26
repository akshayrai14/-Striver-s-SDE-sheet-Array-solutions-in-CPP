class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==target){
                    return true;
                    break;
                }
            }        
        }//O(n2)
        return false;
        */
        int r=0;
        int c=matrix[r].size()-1;
        while(r<matrix.size() && c>=0){
            if(matrix[r][c]==target){
                return true;
                break;
            }
            else if(matrix[r][c]<target){
                r++;
            }
            else{
                c--;
            }
        }
        return false;
        //O(logn)binary search in 2 d array using row and column
        //Now binary saerch in 2d array by making it one D without extra space
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int lo=0;
        // int high=(n*m)-1;
        // while(lo<=high){
        //     int mid=((lo+(high-lo))/2);
        //     if(matrix[mid/m][mid%m]==target){
        //         return true;
        //     }
        //     if(matrix[mid/m][mid%m]<target){
        //         lo=mid+1;
        //     }
        //     else{
        //         high=mid-1;
        //     }
        // }
        // return false;
    }
};