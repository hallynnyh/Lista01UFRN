// 10. PARTE 02 Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.

#include <stdio.h>
#include <stdlib.h>

int main(){
 	char xc[4] = {"4233"};
 	int xi[4] = {2, 4, 6, 8};
 	float xf[4] = {2.2, 4.4, 6.6, 8.8};
 	double xd[4] = {2.2, 4.4, 6.6, 8.8};

 	for(int i=0;i<4;i++){
  	printf(" tipo char --  x + %d = %p \n",i+1 ,(xc+i));
 	}
 	for(int i=0;i<4;i++){
  	printf(" tipo int --  x + %d = %p \n",i+1 ,(xi+i));
 	}
 	for(int i=0;i<4;i++){
  	printf(" tipo float --  x + %d = %p \n",i+1 ,(xf+i));
 	}
 	for(int i=0;i<4;i++){
 	  printf(" tipo double --  x + %d = %p \n",i+1 ,(xd+i));
 	}
}