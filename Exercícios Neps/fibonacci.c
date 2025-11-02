#include <stdio.h>
#include <stdlib.h>

int fibonacciIterativo(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        int a = 0, b = 1, aux;
        for (int i = 2; i <= n; i++) {
            aux = a + b;
            a = b;
            b = aux;
        }
        return b;
    }
}

int termoFibonacci(int n) {
    return fibonacciIterativo(n) + fibonacciIterativo(n - 1);
}

int main() {  
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 30) return 0;
    int t = termoFibonacci(n);
    printf("%d\n", t);
    return 0;
}