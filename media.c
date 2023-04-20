#include <stdio.h>

int main() {
    int n, i;
    long long int soma = 0;
    double media;
    scanf("%d\n", &n);
    int vetor[n];
    for (i = 0 ; i < n ; ++i) {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
        // soma dos itens do vetor até i chegar em n
    }
    media = (double)soma/n; //media: soma dos itens do vetor dividido pela quantidade de itens
    int abaixo = 0; int acima = 0;
    for (i = 0 ; i < n ; ++i) {
        if (vetor[i] < media)
        abaixo++;
        else
        acima++;
    }
    printf("%.1f\n", media);
    printf("%d\n", abaixo);
    printf("%d\n", acima);
    return 0;
}