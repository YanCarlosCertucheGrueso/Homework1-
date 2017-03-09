int longCadena(char *cad );
int main(int argc, char* argv[]){
	char *cad1=argv[1];
    int t= longCadena(cad1);
	printf("\n%d\n ",t);
	return 1;
}
int longCadena(char *cad ){
	int n = 0;
	while (cad[n] != '\0'){
		n++;
	}
	return n;	
}
