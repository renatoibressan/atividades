#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n1, n2, q = 0;
    char op;
    scanf("%d %d%*c%c%*c%d%*c", &m, &n1, &op, &n2);
    if (op == '+') q = n1 + n2;
    else if (op == '*') q = n1 * n2;
    else return 0;
    if (q <= m) printf("OK\n");
    else printf("OVERFLOW\n");
    return 0;
}