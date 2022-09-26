class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*for(int i=m;i<nums1.size();i++){
            nums1[i]=nums2[i-m];
        }
        int x=INT_MAX;*/
        //sort(nums1.begin(),nums1.end());
        int p1=m-1;//first pointer at element before 0 in nums1
        int p2=n-1;//second pointer at last of nums2
        int i=m+n-1;//third pointer at last of nums1
        while(p2>=0){//till entire p2 traverses to start of nums2 and nothing left to merge
            if(p1>=0 && nums1[p1]>nums2[p2]){
                //p1>=0 to check for the case of only 1 element in nums1 then p1 will be -1
                nums1[i--]=nums1[p1--];
            }
            else{
                nums1[i--]=nums2[p2--];//normally put elements of nums2 if greater than nums1
            }//traverse from end and check greater element and put at end (that is ith position)
        }
    }
};