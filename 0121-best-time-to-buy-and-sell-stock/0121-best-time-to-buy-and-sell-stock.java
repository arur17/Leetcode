class Solution {
    public int maxProfit(int[] prices) {
        // int maxP = 0;
        // int less = prices[0];
        // int more = 0;
        // int less_index =0;
        int n = prices.length;
        // for(int i = 1; i<n ; i++ ){
        //     if(prices[i-1] > prices[i]){
        //         less = prices[i];
        //     }
            // int more = prices[i];
            // for(int j = i+1; j<n ; j++){
            //     if(prices[j-1]< prices[j]){
            //         more = prices[j];
            //     }
            //     maxP = more-less;
            // }
        // }
        // for(int i = 1; i<n; i++){
        //     if(prices[i] == less){
        //         less_index = i;
        //     }
        // }
        // for(int i = less_index+1; i<n; i++){
        //     if(prices[i-1] < prices[i]){
        //         more = prices[i];
        //     }
        // }
        // maxP = more - less;
        // return maxP;
            // int maxp = 0;
            // int least = prices[0];
            // for(int i = 0; i<n; i++){
            //     int sold = prices[i] - least;
            //     maxp += Math.max(maxp,sold);
            //     least = Math.min(least,prices[i]);
        // }
        // return maxp;
        // int maxPro = 0;
        // for (int i = 0; i < prices.length; i++) {
        //     for (int j = i + 1; j < prices.length; j++) {
        //         if (prices[j] > prices[i]) {
        //             maxPro = Math.max(prices[j] - prices[i], maxPro);
        //         }
        //     }
        // }
        // return maxPro;
        int maxPro = 0;
        int minPrice = Integer.MAX_VALUE;
        for (int i = 0; i < prices.length; i++) {
            minPrice = Math.min(minPrice, prices[i]);
            maxPro = Math.max(maxPro, prices[i] - minPrice);
        }
        return maxPro;


        
    }
}