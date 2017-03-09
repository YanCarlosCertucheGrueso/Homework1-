#include <stdio.h>
int longCadena(char *cad ){
	int n = 0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;	
}

char * haciaMayus(char* cad ){
	int i;
	int p=longCadena(cad);
	char* final =(char*)malloc(p);
	
	for (i=0; cad[i] !='\0'; i++){
		if (cad[i]>= 'a' && cad[i]<='z'){
			final[i]=cad[i]-32;
		}else if ( cad[i] >= 'A' && cad[i]<= 'Z'){
			final[i]=cad[i];
		}
	}
	return final;
}

int main(int argc, char* argv[]){
	char* str1= argv[1];
	char* t=haciaMayus(str1);
	printf("%s",t);
}
