#include <stdio.h>

long long C(int n, int k) {
    if (k == 0 || k == n) return 1;
    return C(n-1, k-1) + C(n-1, k);
}

int main(void) {
    int N = 0;
    puts("Ingresa el número: ");
    scanf("%d", &N); 
    for (int i = 0; i < N; ++i) {
        for (int k = 0; k <= i; ++k)
            printf("%lld ", C(i, k));
        printf("\n");
    }
    return 0;
}
