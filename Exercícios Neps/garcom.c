#include <stdio.h>
#define N 100

int main() {
    int n, l[N], c[N], quebrados = 0;
    scanf("%d", &n);
    if (n < 1 || n > N) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &l[i], &c[i]);
        if (l[i] < 0 || l[i] > N || c[i] < 0 || c[i] > N) return 0;
        if (l[i] > c[i]) quebrados += c[i];
    }
    printf("%d\n", quebrados);
    return 0;

}
