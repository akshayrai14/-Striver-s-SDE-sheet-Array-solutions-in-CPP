class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*int ans;
        map<int,int>m;
        if(nums.size()==1){
            ans=nums[0];
        }
        int n=nums.size();
        n=n/2;
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
                ans=it.first;
                break;
            }
        }
        return ans;
        */
        int element=0;
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
            }
            if(element==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};