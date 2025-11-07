#include <stdio.h>
#include<time.h>

int tribonacci_memo(int n, int memo[]) {
    if (n == 2) return 1;
    if (n == 1 || n == 0) return 0;
    if (memo[n] != -1) return memo[n];

    memo[n] = tribonacci_memo(n-1, memo)  
                + tribonacci_memo(n-2, memo) 
                + tribonacci_memo(n-3, memo);
    return memo[n];
}

int main() {
    int n;
    clock_t inicio, fin;
    double tiempo;
    printf("Ingrese la posición de Tribonacci: ");
    scanf("%d", &n);

    int memo[n+1];
    for (int i = 0; i <= n; i++) memo[i] = -1;

    inicio = clock();
    printf("Tribonacci(%d) = %d\n", n, tribonacci_memo(n, memo));
    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\nTIEMPO DE EJECUCION: %f SEGUNDOS", tiempo);
    return 0;
}
