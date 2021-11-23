// 16. Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes). Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução das implementações que você criou para os dois problemas de ordenação anteriores e compare os resultados obtidos.


// Função usando qsort | Tempo com o qsort: 0.000005s

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b){
  float fa = *(const float *) a;
  float fb = *(const float *) b;
  return (fa > fb) - (fa < fb);
}

void ler(int n, float numero[]){
  for(int i=0; i<n; i++){
    printf("Infrome o %d° valor a ser ordenado\n", i+1);
    scanf("%f", &numero[i]);
  }
}

void ordena(int n, float numero[]){
  qsort(numero, n, sizeof(float), compare);
}

int main() {
  clock_t t;
  int n;
  float *p; 

  printf("Digite a quantidade de numeros a ser ordenado: \n");
  scanf("%d", &n); 

  p = malloc(n * sizeof(float));

  ler (n, p);

  t = clock();
  ordena (n, p);
  t = clock() - t;

  for(int i=0; i<n; i++){
    printf("%f ", p[i]);
  }

  free(p);
  return 0;
}