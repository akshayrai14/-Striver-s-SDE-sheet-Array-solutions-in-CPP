class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.size()==0){
           return 0;
       }
        unordered_set<int>so;
        int l=0;
        int maxi=INT_MIN;
        for(int r=0;r<s.length();r++){
            if(so.find(s[r])!=so.end()){
                while(l<r && so.find(s[r])!=so.end()){
                    so.erase(s[l]);
                    l++;
                }
            }
            so.insert(s[r]);
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};