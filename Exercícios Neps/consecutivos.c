#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n, anterior, atual, maior_seq = 1, seq_atual = 1;
    scanf("%d", &n);
    scanf("%d", &anterior);
    for (int i = 1; i < n; i++) {
        scanf("%d", &atual);
        if (atual == anterior) seq_atual++;
        else {
            if (seq_atual > maior_seq) maior_seq = seq_atual;
            seq_atual = 1;
        }
        anterior = atual;
    }
    if (seq_atual > maior_seq) maior_seq = seq_atual;
    printf("%d\n", maior_seq);
    return 0;
}
