// 14. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu código, explicando o que faz cada uma das linhas.

#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b){ // funcao que compara dois valores do array
  float fa = *(const float *) a; // define o valor de fa a partir da constante a
  float fb = *(const float *) b; // define o valor de fb a partir da constante b
  return (fa > fb) - (fa < fb); // retorna 1 se fa for maior que fb e -1 se fa for menor que fb
}
	
void ler(int n, float numero[]){ // funcao para ler o array
  for(int i=0; i<n; i++){ // laço de repeticao para passar pelos elementos do array
    printf("Infrome o %d° valor a ser ordenado\n", i+1); 	// impressão de mensagem para indicar o elemento a ser informado
    scanf("%f", &numero[i]); // alocar o valor informado no elemento correspondente do array
  }
}

void ordena(int n, float numero[]){	// função para ordenar o array
  qsort(numero, n, sizeof(float), compare);	// chamada da função qsort
}

int main() {
  int n; // declaração da variavel inteira n
  float *p; // declaração do ponteiro p

  printf("Digite a qauntidade de numeros a ser ordenado: \n"); // impressão de mensagem para pedir a quantidade de elementos do array
  scanf("%d", &n); // alocar o valor informado na variável n

  p = malloc(n * sizeof(float)); // alocação dinâmica de p

  ler (n, p); // chamada da função para ler os elementos do array

  ordena (n, p); // chamada da função para ordenar o array

 //impressão do array ordenado
  for(int i=0; i<n; i++){
    printf("%f ", p[i]);
  }

  free(p); // liberação do ponteiro p
  return 0;
}