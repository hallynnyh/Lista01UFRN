#include <stdio.h>

int main(void) {
int i, j, *p, *q;

// 4. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
// a. p = &i; Resultado: Não há problema 
printf ("%p", p = &i);
return 0;
}
