#include <stdio.h>
#include<time.h>

int tribonacci_recursivo(int n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return tribonacci_recursivo(n-1) +
               tribonacci_recursivo(n-2) +
               tribonacci_recursivo(n-3);
}

int main() 
{
    int n = 0;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    clock_t inicio, fin;
    double tiempo;
    inicio = clock();
    printf("\nEl numero en la posicion %d de la secuencia tribonacci es: %d\n\n", n, tribonacci_recursivo(n));
    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\nTIEMPO DE EJECUCION: %f SEGUNDOS", tiempo);
    return 0;
}
