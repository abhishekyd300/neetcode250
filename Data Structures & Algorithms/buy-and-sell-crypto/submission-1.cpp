class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,ans=0;

        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
                j=i+1;
            }
            else{
                j++;
                ans=max(ans,prices[j]-prices[i]);
            }
        }
        return ans;
    }
};
