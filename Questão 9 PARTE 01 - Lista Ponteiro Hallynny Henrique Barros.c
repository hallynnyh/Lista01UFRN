#include <stdio.h>

// 9. O que fazem os seguintes programas em C?

int main(){
int vet[] = {4,9,13}; // O primeiro está declarando um vetor 'vet[]' preenchendo com valores iniciais {4, 9, 10}.
int i; // declara o int i
for(i=0;i<3;i++){ // laço de repetição que passa pelos elementos do vetor
printf("%d ",*(vet+i)); // imprime o elemento do vetor
}
}
// Esse programa imprime os elementos do vetor 4, 9 e 13. 