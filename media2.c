#include <stdio.h>

int main() {
    int n, i;
    long long int soma = 0; //n = tamanho do vetor, i = contador
    double media; // double tem maior precisão que float
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n ; ++i) { // ++i = incrementa antes da operação
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = (double)soma/n;
    int abaixo = 0, acima = 0;
    for (i = 0; i<n; ++i)
        if (vetor[i] < media)
            abaixo++;
        else
            acima++;
    printf("%.1f\n", media); // print media
    printf("%d", abaixo); // saida: 2_
    for (i = 0; i < n; ++i)
        if (vetor[i] < media)
            printf(" %d", vetor[i]); // print numeos abaxio da media
    printf("\n"); // quebra de linha dos numeros abaixo da media
    printf("%d", acima); // saida: 3_
    for(i = 0; i < n; ++i)
        if (vetor[i] >= media)
            printf(" %d", vetor[i]); // print numeros acima da media 
    printf("\n");
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
