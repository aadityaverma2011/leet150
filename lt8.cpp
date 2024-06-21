class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest= prices[0]; //7
        int margin=0;
        
        for(int i=0 ;i <prices.size();i++){
            if(lowest>prices[i]){     //l=1
                lowest=prices[i];
            }
            if(prices[i]-lowest>0){
                margin = margin + (prices[i]-lowest);
                lowest = prices[i];
            }
        }
        return margin ;
    }
};



//{7,1,5,3,6,4}