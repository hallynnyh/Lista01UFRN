#include <stdio.h>

int main(void) {
 
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

printf("%i\n", p == &i);
printf("%i\n", *p - *q);
printf("%i\n", **&p);
printf("%i", 3- *p/(*q) + 7);

// p == &i;     O valor da expressão é 1
// *p - *q;     O valor da expressão é-2
// **&p;        O valor da expressão é 3
// 3- *p/(*q) + 7; O valor da expressão é 10
}