//Tempo de execução 0.000136
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t t = clock();
    int size = 10;

    int *p = malloc(size * sizeof(int));
    
    for (int i=0; i<size; i++){
      p[i]=i+1;
    }

    for (int i=0; i<size; i++){
      printf("%d ", p[i]);
    }

    free(p);

    t = clock() - t;

    printf("\nTempo de execução %f ", (double)t / CLOCKS_PER_SEC);
    
    return 0;
}