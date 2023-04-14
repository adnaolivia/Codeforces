#include <stdio.h>

int mdc(int a, int b){
  int x;

  while (b != 0)
  {
    x = a % b;
    a = b;
    b = x;
  }
    return a;
}

int main(){
  int n1, n2, op;
  scanf("%d %d", &n1, &n2);
  op = mdc(n1, n2);

  printf("%d\n", op);
  return 0;
}
