#include <stdio.h>

int media (int a, int b) {
    int m = ((a*2)+(b*3))/5;
    return m;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", media(a,b));
    return 0;
}