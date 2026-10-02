class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,maxp=0;
        for(int r=1;r<prices.size();r++){
            if(prices[r] <= prices[l]) l=r;
            maxp=max(maxp, prices[r]-prices[l]);
        }
        return maxp;
    }
};
