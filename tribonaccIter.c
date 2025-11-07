#include <stdio.h>
#include<time.h>

int tribonacci_iterativo(int n) 
{
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;

    int a = 0, b = 0, c = 1;
    int siguiente = 0;
    for (int i = 3; i <= n; i++) {
        siguiente = a + b + c;
        a = b;
        b = c;
        c = siguiente;
    }
    return c;
}

int main() 
{
    int n = 0;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    clock_t inicio, fin;
    double tiempo;
    inicio = clock();
    printf("\nEl numero en la posicion %d de la secuencia tribonacci es: %d\n\n", n, tribonacci_iterativo(n));
    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\nTIEMPO DE EJECUCION: %f SEGUNDOS", tiempo);
    return 0;
}
