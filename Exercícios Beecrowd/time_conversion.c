#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    int h = t / 3600;
    int min = (t - (h * 3600)) / 60;
    int s = t - (h * 3600) - (min * 60);
    printf("%d:%d:%d\n", h, min, s);
    return 0;
}
