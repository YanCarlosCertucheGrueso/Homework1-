#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int existeCar(char* cad, char* c){
	int i;
	for (i=0; i<strlen(cad); i++){
		if (cad[i] == c[0]){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char* argv[]){
	char* cad =argv[1];
	char*  ch = argv[2];
	
	int n= existeCar(cad,ch);
	if (n == 1){
		printf("Verdadero");
	}else{
		printf("falso");
	}
	return 1;
}
