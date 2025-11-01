#include <stdio.h>

int main() {
    int code[2], qtd[2];
    float value[2], pay = 0.0;
    for (int i = 0; i < 2; i++) {
        scanf("%d%d%f", &code[i], &qtd[i], &value[i]);
        pay += qtd[i] * value[i];
    }
    printf("VALOR A PAGAR: R$ %.2f\n", pay);
    return 0;
}
