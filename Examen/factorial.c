#include <stdio.h>

int factorial(int n) {
  if (n < 0) 
    return -1;

  int result = 1;
  for(int i=1; i<=n; i++) {
    result *= i;
  }

  return result;
}

int main() {

  int start, end;

  printf("Entrer le premier nombre : ");
  scanf("%d", &start);

  printf("Entrer le dernier nombre : ");  
  scanf("%d", &end);

  for(int i=start; i<=end; i++) {
    int fact = factorial(i);
    printf("%d! = %d\n", i, fact);
  }

  return 0;
}
