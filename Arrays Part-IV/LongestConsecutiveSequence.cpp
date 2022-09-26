class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result=0;
        int curr=0;
        unordered_set<int>temp;
        for(int i=0;i<nums.size();i++){
            temp.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(temp.find(nums[i]-1)==temp.end()){
                curr=1;
                while(temp.find(nums[i]+curr)!=temp.end()){
                    curr++;
                }
                result=max(result,curr);
            }
        }
        return result;
    }
};