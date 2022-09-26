class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()==0){
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> temporary=intervals[0];
        for(auto intv : intervals ){
            if(intv[0]<=temporary[1]){
                //write this condition by seeing the second element as intv and first as temporary
                //first element will get in line automatically as temporary
                temporary[1]=max(intv[1],temporary[1]);
            }
            else{
                ans.push_back(temporary);
                temporary=intv;
            }
        }
        //At end temporary will be the last element which will not be pushed
        //push it after loop
        ans.push_back(temporary);
        return ans;
    }
};