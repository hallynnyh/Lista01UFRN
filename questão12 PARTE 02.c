#include <stdio.h>
#include <stdlib.h>

void lerVetor(int n, int numero[]){
  for(int i=0; i<n; i++){
    printf("Infrome o %d° valor do vetor\n", i+1);
    scanf("%d", &numero[i]);
  }
}

int main() {
  int n;
  int *p;

  printf("Digite a quantidade de elementos do vetor: \n");
  scanf("%d", &n);

  p = malloc(n * sizeof(float));

  lerVetor (n, p);

  for(int i=0; i<n; i++){
    printf("%d ", p[i]);
  }

  free(p);
  return 0;
}