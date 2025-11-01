#include <stdio.h>
 
int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double area1 = (a * c) / 2.0;
    double area2 = 3.14159 * c * c;
    double area3 = (a + b) * c / 2.0;
    double area4 = b * b;
    double area5 = a * b;
    printf("TRIANGULO: %.3lf\n", area1);
    printf("CIRCULO: %.3lf\n", area2);
    printf("TRAPEZIO: %.3lf\n", area3);
    printf("QUADRADO: %.3lf\n", area4);
    printf("RETANGULO: %.3lf\n", area5);
    return 0;
}