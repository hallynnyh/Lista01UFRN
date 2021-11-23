// 13. Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa.

#include <stdio.h>
#include <stdlib.h>

void ler(int n, float numero[]){
  for(int i=0; i<n; i++){
    printf("Infrome o %d° valor a ser ordenado\n", i+1);
    scanf("%f", &numero[i]);
  }
}

void ordena(int n, float numero[]){
  float aux;
 
  for( int i=0; i<n; i++ ){
    for( int j=i+1; j<n; j++ ){  
      if( numero[i] > numero[j] ){
        aux =numero[i];
        numero[i] = numero[j];
        numero[j] = aux;
      }
    }
  }
}

int main() {
  int n;
  float *p;

  printf("Digite a quantidade de numeros a ser ordenado: \n");
  scanf("%d", &n);

  p = malloc(n * sizeof(float));

  ler (n, p);

  ordena (n, p);

  for(int i=0; i<n; i++){
    printf("%f ", p[i]);
  }

  free(p);
  return 0;
}