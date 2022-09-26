class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        /*sort(nums.begin(),nums.end());//nlogn
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }//n
        return ans;*/
        //negative marking solution
        for(int i=0;i<nums.size();i++){
            int cur=abs(nums[i]);
            if(nums[cur]<0){
                ans=cur;
                break;
            }
            else{
                nums[cur]*=-1;
            }
        }
        return ans;
        
    }
};