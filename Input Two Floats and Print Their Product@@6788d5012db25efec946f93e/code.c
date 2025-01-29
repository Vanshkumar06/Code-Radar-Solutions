#include <stdio.h>
int main() {
    float a, b;
    scandf("%f",&a);
    scanf("%f",&b);
    printf("Product:%.2f",a*b);
    return 0;
}