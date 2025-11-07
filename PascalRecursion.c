#include <stdio.h>

long long C(int n, int k) {
    if (k == 0 || k == n) return 1;
    return C(n-1, k-1) + C(n-1, k);
}

int main(void) {
    int N = 15; // cuidado: crece muy lento por el costo exponencial
    for (int i = 0; i < N; ++i) {
        for (int k = 0; k <= i; ++k)
            printf("%lld ", C(i, k));
        printf("\n");
    }
    return 0;
}
