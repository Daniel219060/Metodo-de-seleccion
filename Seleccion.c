#include <iostream>
#include <stdlib.h>
#define TAM 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vec[TAM];
	printf("CAPTURA DEL ARREGLO...\n");
	for(int i=0; i<TAM; i++){
		printf("Inserte el numero %i: ", i+1);
		scanf("%i", &vec[i]);
	}
	printf("VECTOR EN DESORDEN...\n");
	for(int i=0; i<TAM; i++){
		printf("%i\t", vec[i]);
	}
	printf("VECTOR ORDENADO...\n");
	int minimo=0,i,j;
	int swap;
  	for(i=0 ; i<TAM-1 ; i++){
     minimo=i;
     for(j=i+1 ; j<TAM ; j++){
        if (vec[minimo] > vec[j]){
			minimo=j;
     		swap=vec[minimo];
     		vec[minimo]=vec[i];
     		vec[i]=swap;
 			}
  		}
  	}
  	for(int i=0; i<TAM; i++){
  		printf("%i\t", vec[i]);
	}
	return 0;
}
