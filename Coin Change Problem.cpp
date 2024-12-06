#include <stdio.h>

int countCombinations(int coins[], int n, int sum) {
    int dp[sum + 1];
    dp[0] = 1;
    for (int i = 1; i <= sum; i++) dp[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j <= sum; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[sum];
}

int main() {
    int n, sum;
    printf("Enter the number of coins: ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter the coin denominations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    printf("Number of combinations: %d\n", countCombinations(coins, n, sum));
    return 0;
}

