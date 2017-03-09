#include <stdio.h>
int CompararCad(char* cad1, char* cad2){
	int i ;
	i=0;
	while (cad1[i] != '\0'){
		if (cad1[i] == cad2[i]){
			i++;
			return 0;
		}else if (cad1[i]<cad2[i]){
			i++;
			return 1;
		}else{
			i++;
			return 2;
		}
	}		
}

int main(int argc, char* argv[]){
	char* first=argv[1];
	char* second=argv[2];
	
	int t=CompararCad(first,second);
	
	if (t==0){
		printf("0");
	}else if (t==1){
		printf("<0");
	}else{
		printf(">0");
	}
	return 1;
}
