//Tempo de execução 0.001385

#include <stdio.h>
#include "gc.h"
#include <time.h>

int main() {
  clock_t t = clock();
    int size = 10;

    GC_INIT();

    int *p = (int *) GC_MALLOC_ATOMIC(sizeof(int));
    
    for (int i=0; i<size; i++){
      p[i]=i+1;
    }

    for (int i=0; i<size; i++){
      printf("%d ", p[i]);
    }

     t = clock() - t;

    printf("\nTempo de execução %f ", (double)t / CLOCKS_PER_SEC);
    
    return 0;
}