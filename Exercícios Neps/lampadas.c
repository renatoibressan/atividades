#include <stdio.h>

int main() {
    int n, v[100000], i1 = 0, i2 = 0, la = 0, lb = 0;
    scanf("%d", &n);
    if (n < 2 || n > 100000) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] == 1) i1++;
        else if (v[i] == 2) i2++;
        else return 0;
    }
    la = (i1 + i2) % 2;
    lb = i2 % 2;
    printf("%d\n%d\n", la, lb);
    return 0;
}
