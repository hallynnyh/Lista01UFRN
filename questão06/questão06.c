#include <stdio.h>

// 6. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;

printf("contador/valor/valor/endereco/endereco"); // Imprime o texto pré-definido
for(i = 0 ; i <= 4 ; i++){ // laço de repetição que irá passa por todo o vetor
printf("\ni = %d",i); // imprime a posição do elemento no vetor
printf("vet[%d] = %.1f",i, vet[i]); // imprime o valor da posição
printf("*(f + %d) = %.1f",i, *(f+i)); // imprime o valor  que está no ponteiro para a posição indicada
printf("&vet[%d] = %X",i, &vet[i]); // imprime a posição de memória onde está guardado o valor do elemento
printf("(f + %d) = %X",i, f+i); // imprime a posição de memória do ponteiro
  }
}
// A resposta gerada pelo compilador foram as esperadas.