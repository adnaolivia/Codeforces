#include <stdio.h>

float media(float a, float b) {
    float m = (a+b)/2;
    return m;
}
int main() {
    float a,b;
    scanf("%f %f", &a, &b);
    printf("%.5f\n", media(a,b));
    return 0;
}