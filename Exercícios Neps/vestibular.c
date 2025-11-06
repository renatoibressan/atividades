#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, count = 0;
    char gabarito[81], respostas[81];
    scanf("%d", &n);
    scanf("%s", gabarito);
    if (strlen(gabarito) != n) return 0;
    scanf("%s", respostas);
    if (strlen(respostas) != n) return 0;
    for (int i = 0; i < n; i++) {
        if (gabarito[i] == respostas[i]) count++;
    }
    printf("%d\n", count);
    return 0;
}