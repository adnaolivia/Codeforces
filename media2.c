#include <stdio.h>

int main() {
    int n, i, soma = 0; //n = tamanho do vetor, i = contador
    float media;
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n ; ++i) // ++i = incrementa antes da operação
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    media = soma/n;
    int abaixo = 0, acima = 0;
    for (i = 0; i<n; ++i)
        if (vetor[i] < media)
            abaixo++;
        else
            acima++;
    printf("%.1f\n", media);
    printf("%d\n", abaixo);
    for (i = 0; i < n; ++i)
        if (vetor[i] < media)
            printf("%d", vetor[i]);
    printf("%d\n", acima);
    for(i = 0; i < n; ++i)
        if (vetor[i] >= media)
            printf("%d", vetor[i]);
    return 0;
    //   0  1  2  3  4
    // { 1, 2, 3, 4, 5}
}

/*
declarar vetor, tamanho, contador e media
ler n
vetor de tamanho n
media = soma dos indices do vetor, dividido pela quantidade de indices
mostrar quantidade de numeros abaixo da media
mostrar quantidade de numeros acima da media

a += b -> a = a + b
*/ 
