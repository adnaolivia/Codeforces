#include <stdio.h>

int main() {
    int a11, a21; //m1
    printf("digite m1\n");
    scanf("%d %d", &a11, &a21);
    int a12, a22; //m2
    printf("digite m2\n");
    scanf("%d %d", &a12, &a22);
    int p1, p2; //pesos
    printf("digite os pesos\n");
    scanf("%d %d", &p1, &p2);
    int m1 = ((a11*p1)+(a21*p2))/(p1+p2);
    int m2 = ((a12*p1)+(a22*p2))/(p1+p2);
    if (m1 >= m2)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}