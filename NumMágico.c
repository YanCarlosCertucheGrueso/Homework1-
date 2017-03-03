#include <stdio.h>
#include <stdlib.h> 
int gano(int x);
int esmayor(int x);
int otravez(int intentos, int* historial);

int dobleNum(void){
	int d;
	d=ran();
	return d;
}
int magico(void){
	int m;
	m=ran();
	return m;
}

int main(void){
	int x,intentos, historial[100];
	intentos=10;
	int* hist=historial;
	printf("Digita tu numero \n");
	scanf("%d",&x);
	gano(x);
	if (gano(x) == 1){
		printf(" bien hecho \n");
	} else {
		printf(" algo cerca amig@, el número \n");
		esmayor(x);
		otravez(intentos,hist);
	}
	return 0;
}

/*Función que me dice que tan cerca es está el magico del número que Digitó el usuario*/
int esmayor(int x){
	if (x < magico()) {
		printf("Es Mayor que el primero \n");
	}else if(x< dobleNum()){
		printf("Es Mayor que el Segunodo \n");
	}else if(x>dobleNum()){
		printf("es Menor que el segundo\n");
	}else if (x>dobleNum() && x<magico()){
		printf("esta entre los dós números mágicos");
	}else if (x>magico() && x<dobleNum()){
		printf("esta entre los dós números mágicos");
	} else {
		printf("Es Menor que el primero\n");
	}
	return 1;
}

/*Función que me dice si el número digitado por el Usuario es el correcto o no*/
int gano(int x){
	int suma = magico() + dobleNum();
	int resta = magico() - dobleNum();
	int multiplicacion = (magico() ) * (dobleNum());
	if (x == magico() || x==dobleNum()) {
		printf(" Usted ha Adivinado!!/n");
		printf("felicitaciones/n");
	}else if(x==suma || x==resta || x==multiplicacion){
		printf(" Usted ha Adivinado!!/n");
		printf("felicitaciones/n");		
	} else {
		printf("usted No lo ha Adivinado/n");
		return 0;
	}
	return 1;
}

/*Función que pregunta de nuevo a el usuario otro posible número en caso de fallar la primera vez*/
int otravez(int intentos, int* historial){
	int i;
	int x; 
	i=0;
	while (i < intentos){
		printf("Digita un nuevo numero ");
		scanf("%d",&x);
		if (gano(x) == 1){
			historial[i]=x;
			printf(" bien hecho \n");
			printf("te llevo %d intento(s)\n",i);
			printf("el (los) Número (s) hasta ahora ingresado (s) es (son) :%d\n",historial[i]);
			break;
		}else{
			historial[i]=x;
			printf(" algo cerca amig@, el número \n");
			esmayor(x);
			printf("te llevo %d intento(s)\n",i);
			printf("el (los) Número (s) hasta ahora ingresado (s) es (son) :%d\n",historial[i]);
			i++;
		}
		i++;
	}
	return i;
}
