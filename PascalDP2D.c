#include <stdio.h>

int main(void) {
    int N = 0;
    puts("Ingresa el número: ");
    scanf("%d", &N);
    long long dp[31][31] = {0}; 
    for (int n = 0; n <= N; ++n) {
        dp[n][0] = dp[n][n] = 1;
        for (int k = 1; k < n; ++k)
            dp[n][k] = dp[n-1][k-1] + dp[n-1][k];
    }
    for (int i = 0; i <= N; ++i) {
        for (int k = 0; k <= i; ++k)
            printf("%lld ", dp[i][k]);
        printf("\n");
    }
    return 0;
}
