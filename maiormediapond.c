#include <stdio.h>

int main() {
    long long int a11, a21; //m1
    scanf("%lld %lld", &a11, &a21);
    long long int a12, a22; //m2
    scanf("%lld %lld", &a12, &a22);
    long long int p1, p2; //pesos
    scanf("%lld %lld", &p1, &p2);
    long long int m1 = (a11*p1+a21*p2)/(p1+p2);
    long long int m2 = (a12*p1+a22*p2)/(p1+p2);
    if (m1 >= m2)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}
