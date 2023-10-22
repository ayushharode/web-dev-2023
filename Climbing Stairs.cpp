#include <iostream>
#include <vector>

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 6; // Change n to the desired number of steps.
    int ways = climbStairs(n);
    std::cout << "Number of distinct ways to climb " << n << " stairs: " << ways << std::endl;

    return 0;
}
