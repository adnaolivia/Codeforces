#include <stdio.h>

long long int perimetro(long long int l1, long long int l2) {
    long long int p = 2*(l1+l2);
    return p;
}
int main() {
    long long int l1,l2;
    scanf("%lld %lld", &l1, &l2);
    printf("%lld\n", perimetro(l1,l2));
    return 0;
}