#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int longCadena(char *cad ){
	int n = 0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;	
} 

char* asignar(char* cad, char* c ){
	int i = 0;
	int t = longCadena(cad);
	char* final=(char*)malloc(t+1);
	for (i=0 ;i < strlen(cad);i++){
			final[i]=c[0];
	}
	printf("%s",final);
}

int main(int argc, char* argv[]){
	char* cad= argv[1];
	char* ch= argv[2];
	
	asignar(cad,ch);
}
