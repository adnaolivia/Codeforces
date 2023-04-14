#include <stdio.h>

int main() {
    
    int n;
    while (scanf("%d", &n) != EOF) {
        
        int tamanho[n], i, j, contador = 0;
        char lado[n];
        
        for (i = 0; i < n; i++)
            scanf("%d %c", &tamanho[i], &lado[i]);
            
        for (i = 0; i < n; i++) {
            for (j = i+1; j < n; j++) {
                if (tamanho[i] == tamanho[j]
                && lado[i] != lado[j]
                && lado[i] != 'X'
                && lado[j] != 'X') {
                    contador++;
                    lado[i] = 'X';
                    lado[j] = 'X';
                }
            }
        }
        printf("%d\n", contador);
    }

    return 0;
}
