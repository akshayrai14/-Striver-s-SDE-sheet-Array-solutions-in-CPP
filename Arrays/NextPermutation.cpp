class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s=nums.size(),o,p;
        for(o=s-2;o>=0;o--){
            if(nums[o]<nums[o+1]){
                break;
            }
        }
        if(o<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(p=s-1;p>=0;p--){
                if(nums[p]>nums[o]){
                    break;
                }
            }
            swap(nums[o],nums[p]);
            reverse(nums.begin()+o+1,nums.end());
        }
    }
};