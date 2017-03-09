#include <stdio.h>
char* Concatenar(char* str1, char* str2, int t){
	 int i;
	 for (i=0; i <= str1[t]; i++){
		 str1[t+i]=str2[i];
	 }
	 return str1;
}

int longCadena(char *cad ){
	int n = 0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;
}

int main(int argc, char* argv[]){
	char* str1 = argv[1];
	char* str2 = argv[2];
	int s1=longCadena(str1);
	int s2 =longCadena(str2);
	int t=s1+s2; 
    char* temp =(char*) realloc(str1, t);
	str1 =temp; 
	char* c= Concatenar(char* str1, char* str2,int s1);
	printf("%s",c);
	return 1;
}
