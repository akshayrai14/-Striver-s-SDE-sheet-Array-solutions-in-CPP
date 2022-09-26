class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=INT_MAX;
        int total=0;
        int pist;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<lowest){
                lowest=prices[i];
            }
            pist=prices[i]-lowest;
            if(pist>total){
                total=pist;
            }
        }
        return total;
    }
};