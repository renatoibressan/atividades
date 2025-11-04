#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int v[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            if (n <= i) printf("%d\n", v[i]);
            else printf("%d\n", v[i] + v[i + 1]);
        } else if (i == n) printf("%d\n", v[i] + v[i - 1]);
        else printf("%d\n", v[i - 1] + v[i] + v[i + 1]);
    }
    return 0;
}