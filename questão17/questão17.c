// 17. Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.

#include <stdio.h>
#include <stdlib.h>

void ler(int n, int numero[]){
  for(int i=0; i<n; i++){
    printf("Infrome o %d° elemento do vetor\n", i+1);
    scanf("%d", &numero[i]);
  }
}

void soma(int n, int vetorA[], int vetorB[], int vetorC[]){
  for( int i=0; i<n; i++ ){
    vetorC[i] = vetorA[i]+vetorB[i];
  }
}

int main() {
  int n;
  int *vetorA, *vetorB, *vetorC;

  printf("Digite a quantidade de elementos dos vetores: \n");
  scanf("%d", &n);

  vetorA = malloc(n * sizeof(int));
  vetorB = malloc(n * sizeof(int));
  vetorC = malloc(n * sizeof(int));

  printf("Vetor A\n");
  ler (n, vetorA);
  printf("Vetor B\n");
  ler (n, vetorB);

  soma (n, vetorA, vetorB, vetorC);

  printf("Vetor C\n");
  for(int i=0; i<n; i++){
    printf("%d ", vetorC[i]);
  }

  free(vetorA);
  free(vetorB);
  free(vetorC);
  return 0;
}