class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Assume Minimum Cost to be Infinity
        int minCost = INT_MAX;

        // Number of Chocolates
        int n = prices.size();

        // Check Every Pair of Chocolates
        for (int firstChoco = 0; firstChoco < n; firstChoco++) {
            for (int secondChoco = firstChoco + 1; secondChoco < n; secondChoco++) {
                // Sum of Prices of the Two Chocolates
                int cost = prices[firstChoco] + prices[secondChoco];

                // If the Sum of Prices is Less than the Minimum Cost
                if (cost < minCost) {
                    // Update the Minimum Cost
                    minCost = cost;
                }
            }
        }

        // We can buy chocolates only if we have enough money
        if (minCost <= money) {
            // Return the Amount of Money Left
            return money - minCost;
        } else {
            // We cannot buy chocolates. Return the initial amount of money
            return money;
        }
    }
};


