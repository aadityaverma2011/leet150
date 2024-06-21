class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest= prices[0];
        int margin=0;
        for(auto i:prices){
            if(i<lowest){
                lowest=i;
            }
           if (i-lowest>margin)
            {
                margin=i-lowest;
            }
            
        }

        return margin;
    }
};