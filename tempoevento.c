#include <stdio.h>

int main() {
    int a, b, tempo;
    scanf("%d %d", &a, &b);
    tempo = a-b;
    if (tempo < 0) {
        tempo += 1440;
    }
    printf("%02d:%02d\n", tempo / 60, tempo % 60);
    return 0;
}
