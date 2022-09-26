class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        n=n/3;
        int ans;
        vector<int>v;
        map<int,int>m;
        if(nums.size()==1){
            return nums;
        }
        else{
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
        }
        for(auto it:m){
            if(it.second>n){
                v.push_back(it.first);
                }
            }
            return v;
        }
    }
};