#include <stdio.h>
#include <string.h>

int main ()
{

	char n1[11], n2[11];
	int i, j, contador = 0, tamanhoN2, tamanhoN1;

		scanf(" %s %s", &n1, &n2);
		tamanhoN2 = strlen(n2), tamanhoN1 = strlen(n1);

		for (i = tamanhoN2 - 1, j = tamanhoN1 - 1; i > -1; i--, j--){
      if (n2[i] == n1[j])
      contador++;
    }

		if (contador == tamanhoN2){
      printf("encaixa\n");
    }		
		else{
      printf("nao encaixa\n");
    }

		
    return 0;
}
