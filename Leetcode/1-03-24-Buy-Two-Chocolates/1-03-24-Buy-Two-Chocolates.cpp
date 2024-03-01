class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
         sort(prices.begin(),prices.end());

         if (prices[0]+prices[1] <= money){
             return money -( prices[0] + prices[1]);
         }
         else {
             return money;
         }
        // int sum = 0;
        // for(int i=0;i<prices.size()-1;i++) {
        //     for(int j=i+1;j<prices.size();j++){
        //         sum = prices[i]+prices[j];
        //         if(sum<=money) {
        //        int diff_money = money-sum;
        //        return diff_money; 
        // }
        //     }
        // }
        // return money;
        

        
        
    }
};
