class Solution {
public:
    void sortColors(vector<int>& nums) {
        //O(n2)->
        /*for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }*/
        //O(n)->
        /*int c=0;int v=0;int g=0;
        for(int i=0;i<nums.size();i++){
            switch(nums[i]){
                case 0:
                    c++;
                case 1:
                    v++;
                case 2: 
                    g++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<c){
                nums[i]=0;
            }
            if(i>=c && i<v){
                nums[i]=1;
            }
            if(i>=v && i<g){
                nums[i]=2;
            }
        }*/
        //Dutch national flag algorithm
        //all element to left of Low are 0 and right of high are 2 and low to mid-1 are 1
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[mid],nums[low]);
                    mid++;low++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high]);
                    high--;
                    break;
            }
        }
    }
    
};