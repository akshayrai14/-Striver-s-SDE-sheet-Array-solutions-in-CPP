typedef long long ll;
class Solution {
public:
    int merge(vector<int>&nums,ll low,ll mid, ll high){
        ll i=low;
        ll j=mid+1;
        ll cnt=0;
        for(i=low;i<=mid;i++){
            while(j<=high and nums[i]>2*(long)nums[j]){
                j++;
            }
            cnt+=(j-(mid+1));
        }
        vector<int>temp(high-low+1);
        ll k=0;
        i=low;j=mid+1;
        while(i<=mid and j<=high){
            if(nums[i]<nums[j]){
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }
        while(i<=mid){
            temp[k++]=nums[i++];
        }
        while(j<=high){
            temp[k++]=nums[j++];
        }
        for(k=low;k<=high;k++){
            nums[k]=temp[k-low];
        }
        return cnt;
    }
    int merge_sort(vector<int>&nums,ll low,ll high){
        if(low>=high){
            return 0;
        }
        ll mid=(low+high)/2;
        ll count=0;
        count+=merge_sort(nums,low,mid);
        count+=merge_sort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
        return count;
    }
    int reversePairs(vector<int>&nums){
        return merge_sort(nums,0,nums.size()-1);
    }
};

