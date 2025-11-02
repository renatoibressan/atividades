#include <stdio.h>

int main() {
    int n, a[1000], soma = 0, count = 0;
    scanf("%d", &n);
    if (n < 1 || n > 1000) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 0 || a[i] > 1000000) return 0;
    }
    for (int i = 0; i < n; i++) {
        soma += a[i];
        if (soma >= 1000000) {
            count = i + 1;
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}