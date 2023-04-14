#include <stdio.h>

int mdc(int a, int b) {
    int resto;
    while (b != 0)
        resto = a % b;
        a = b;
        b = resto;
    return a;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", mdc(a, b));
    return 0;
}
