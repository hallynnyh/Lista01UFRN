#include <stdio.h>

int main(void) {
 
// 3. Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
} // O resultado é 000FFE 7 5 15 9

// p = 000FFE -- Como o %x imprime um valor hexadécimal, o valor de p que é 4094 em hexadécimal é FFE
// *p+2 = 7
// **&p = 5
// 3**p = 15
// **&p+4 = 9