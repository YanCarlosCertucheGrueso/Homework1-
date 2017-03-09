#include <stdio.h>

int longCadena(char *cad ){
	int n = 0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;
}

int porInicio(char* cad, char* ch){
	int i;
	for (i= 0; cad[i] != '\0'; i++){
		if (cad[i] == ch[0]){
			return i;
		}
	}
	return -1; 
}

int porFinal(char* cad, char* ch){
	int i;
	int t = longCadena(cad);
	for (i= 0; i< t; i++){
		if (cad[t-1] == ch[0]){
			return i; 
		}else{
				t--;
		}
	}
	return -1;
}

int main(int argc, char* argv[]){
	char* cad = argv[1];
	char* ch = argv[2];
	int ini=porInicio(cad,ch);
	if (ini == -1){
		printf("\n no se encontraba \n");
	}else{
		printf("\n la posición es %d \n",ini);
	}	
	printf("\n para la posición inversa \n");
	
	int fin= porFinal(cad,ch);
	if(fin== -1){
		printf("\n no se encontraba \n");
	}else{
		printf("\n la posición es %d \n",fin);
	}	
	return 1;
}
