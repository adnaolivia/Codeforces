#include <stdio.h>

int main(){
  int num, resto = 0;
  scanf("%d", &num);
  for (int i = 2; i <= num/2; i++)
    if(num % i == 0 )
      resto++;
  if (resto == 0 && num != 1)
    printf("sim");
  else
    printf("nao");
  return 0;
}
