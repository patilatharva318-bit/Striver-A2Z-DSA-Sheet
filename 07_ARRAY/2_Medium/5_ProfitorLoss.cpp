// brute 
class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        int n = arr.size();
        int maxprofit = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                maxprofit += arr[i] - arr[i - 1];
            }
        }

        return maxprofit;
    }
};

// optimal 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int profit= 0;
        int min_price=prices[0];
        for(int i=0; i<n;i++){
            if(prices[i]<min_price){
                min_price=prices[i];
            }
            if((prices[i]-min_price)>profit){
                profit=prices[i]-min_price;
            }
        }
        return profit;
    }
};