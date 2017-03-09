void copiarN(char *cadOrigen, char *cadDestino,int n){
	int i;
	for(i=0; i<= n; i++){
		cadDestino[i]  = cadOrigen[i];
	}
}

int main(int argc, char* argv[]){
	char* cadOrigen=argv[1];
	char* cadenaN = argv[2];
	int  n = atoi(cadenaN);
	
	char* cadDestino=(char*)malloc(n+1);
	
	copiarN(cadOrigen,cadDestino,n);
	
	printf("\n%s\n",cadDestino);
}
