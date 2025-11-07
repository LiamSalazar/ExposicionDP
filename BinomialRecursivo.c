#include <stdio.h>

int binomialCoeff(int n, int k) {

    if (k == 0 || k == n)
        return 1;

    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}


int main() {
    int n = 5, k = 2;
    printf("%d\n", binomialCoeff(n, k));
    return 0;
}

