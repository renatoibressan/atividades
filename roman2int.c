#include <stdio.h>
#include <string.h>
#define N 4000

int romanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int res = 0;
    for (int i = 0; i < strlen(s); i++) {
        int aux = romanValue(s[i]);
        if (i + 1 < strlen(s) && romanValue(s[i + 1]) > aux) res -= aux;
        else res += aux;
    }
    return res;
}

int main() {
    char roman[N];
    scanf("%s", roman);
    int num = romanToInt(roman);
    printf("%d\n", num);
    return 0;
}