class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>t;
        for(int i=0;i<numRows;i++){
            if(i==0){
                t.push_back(1);
                v.push_back(t);
                t.clear();
            }
            else if(i==1){
                t.push_back(1);
                t.push_back(1);
                v.push_back(t);
                t.clear();
            }
            else{
                vector<int>temp(i+1);
                temp[0]=temp[temp.size()-1]=1;
                for(int j=1;j<=temp.size()-2;j++){
                    temp[j]=v[i-1][j-1]+v[i-1][j];
                }
                v.push_back(temp);
            }
        }
        return v;
    }
};