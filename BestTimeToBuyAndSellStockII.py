class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(len(prices) - 1):
            # Buy if price is increasing; sell if price is decreasing.
            if prices[i] < prices[i+1]:
                profit += prices[i+1] - prices[i]
        
        return profit
